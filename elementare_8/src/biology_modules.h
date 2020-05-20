#ifndef BIOLOGY_MODULES_H_
#define BIOLOGY_MODULES_H_


#include "biodynamo.h"
#include "cell.h"
#include "rrException.h"
#include "rrExecutableModel.h"
#include "rrLogger.h"
#include "rrLogger.h"
#include "rrRoadRunner.h"
#include "rrUtils.h"


namespace bdm{
// Define SbmlModule to simulate intracellular chemical reaction network.
struct SbmlModule : public BaseBiologyModule {
  SbmlModule(const std::string& sbml_file, const rr::SimulateOptions& opt)
      : BaseBiologyModule(gNullEventId, gNullEventId) {
    rr_ = new rr::RoadRunner(sbml_file);
    rr_->getSimulateOptions() = opt;
    // setup integrator
    rr_->setIntegrator("gillespie");
    dt_ = opt.duration / opt.steps;
    auto* integrator = rr_->getIntegrator();
    integrator->setValue("variable_step_size", false);
    integrator->setValue("initial_time_step", dt_);
    integrator->setValue("maximum_time_step", dt_);
    result_.resize(opt.steps, 13);
  }

  virtual ~SbmlModule() { delete rr_; }

  SbmlModule(const Event& event, BaseBiologyModule* other, uint64_t new_oid = 0)
      : BaseBiologyModule(event, other, new_oid) {}

  /// Create a new instance of this object using the default constructor.
  BaseBiologyModule* GetInstance(const Event& event, BaseBiologyModule* other,
                                 uint64_t new_oid = 0) const override {
    return new SbmlModule(event, other, new_oid);
  }

  /// Create a copy of this biology module.
  BaseBiologyModule* GetCopy() const override { return new SbmlModule(*this); }

  /// Default event handler (exising biology module won't be modified on
  /// any event)
  void EventHandler(const Event& event, BaseBiologyModule* other1,
                    BaseBiologyModule* other2 = nullptr) override {
    BaseBiologyModule::EventHandler(event, other1, other2);
  }
  //Multiply all species by a value, excepts lipids "L"
  void MultiplyAllSpecies(float value){
    rr_ -> setValue("A_0", static_cast<int>(rr_ -> getValue("A_0")*value));
    rr_ -> setValue("B_0", static_cast<int>(rr_ -> getValue("B_0")*value));
  //  rr_ -> setValue("p", (rr_ -> getValue("p")*value));
    rr_ -> setValue("C", static_cast<int>(rr_ -> getValue("C")*value));
  }

  //Correct the value of all species
  //
  void UpdateSpecies(){
    float A = rr_ -> getValue("A_0");
    float B = rr_ -> getValue("B_0");
    float C = rr_ -> getValue("C");
    float p = rr_ -> getValue("p");
  
    float v = rr_ -> getValue("compartment");
    int co = rr_ -> getValue("Compl");

    //FIXME: Errors are raised in the simulation
    //FIXME: Update formulas with the one of the pdf
    // rr_ -> setValue("A_0",static_cast<int>(-v*1e-19*A*B+v*1e+17));
    // rr_ -> setValue("B_0",static_cast<int>(-v*1e-19*A*B+v*1e+17));
    // rr_ -> setValue("C",static_cast<int>(+v*1e-19*A*B));
    // rr_ -> setValue("L",static_cast<int>(+v*1e-17*p*C));
  }
  //Append volume value to text file
  void SaveVolume(int t, float v){
    #pragma omp critical
    {
      std::ofstream outfile;

      outfile.open("volume.csv", std::ios_base::app); // append instead of overwrite
      outfile << t<<";" << v << std::endl;
    } 
  }
  //update volume
  void UpdateVolume(){
    //float ro = 7.87870;
    float ro =7.87870e+22;
    //float r = 1e-6;
    float delta = 1e-8;
    float delta3 = pow(delta,3);
   
    float L = rr_ -> getValue("L");
    double newVolume = (1.0/6.0)*M_PI*delta3*pow(sqrt((L/(ro*M_PI*delta3)) -1.0/3.0)-1 ,3 );
    //std::cout <<newVolume<<std::endl;
    rr_ -> setValue("compartment",newVolume*1000);
  }
  void Run(SimObject* so) override {
    if (auto* cell = static_cast<MyCell*>(so)) {

      auto i = Simulation::GetActive()->GetScheduler()->GetSimulatedSteps();

      if(i == 1){
        //rand 90-110
        int randomSpeciesChange = rand() % 21 + 90;
        rr_ -> setValue("A_0", cell -> GetA() * randomSpeciesChange / 100);
        rr_ -> setValue("B_0", cell -> GetB() * randomSpeciesChange / 100);
        rr_ -> setValue("C", cell -> GetC() * randomSpeciesChange / 100);
        rr_ -> setValue("L", cell -> GetL() * randomSpeciesChange / 100);
       // rr_ -> setValue("Compl", cell -> GetCompl() * randomSpeciesChange / 100);
      }
      if(cell -> GetIsBornAfterDivision()){
        //rand 90-110
        int randomSpeciesChange = rand() % 21 + 90;
        cell -> SetIsBornAfterDivision(false);
        rr_ -> setValue("A_0", cell -> GetA() * randomSpeciesChange / 100);
        rr_ -> setValue("B_0", cell -> GetB() * randomSpeciesChange / 100);
        rr_ -> setValue("C", cell -> GetC() * randomSpeciesChange / 100);
        rr_ -> setValue("L", cell -> GetL() * randomSpeciesChange / 100);
       // rr_ -> setValue("Compl", cell -> GetCompl() * randomSpeciesChange / 100);
       // rr_ -> setValue("p", cell -> GetP());
      }

      rr_->getIntegrator()->integrate(0 * dt_, dt_);
    
      cell -> SetCompartment(rr_ -> getValue("compartment"));
      

      //std::cout << "Aext: "<< rr_ -> getValue("Aext") << std::endl;
      //SaveVolume(i,rr_ -> getValue("compartment"));
     // std::cout << i << " " << rr_ -> getValue("compartment") << std::endl;
      

      cell -> SetL(rr_ -> getValue("L"));
      UpdateVolume();
      const auto& partial_result = rr_->getFloatingSpeciesAmountsNamedArray();
     
      result_(i, 0) = i * dt_;
      for (unsigned j = 0; j < partial_result.numCols(); j++) {
        result_(i, j + 1) = partial_result(0, j);
      }

      UpdateSpecies();
   
      if (cell -> GetL() > 20000 && active_){
          //multiply lipids by 0.5
          rr_ -> setValue("L", rr_ -> getValue("L")/2);
          cell -> SetL(rr_ -> getValue("L"));
          //UpdateSpecies();
         // active_ = false;  <- cells keep replicating
          MultiplyAllSpecies(0.353553391);
          //update Cell Values
          cell -> SetA(rr_ -> getValue("A_0"));
          cell -> SetB(rr_ -> getValue("B_0"));
          cell -> SetC(rr_ -> getValue("C"));
          cell -> SetP(rr_ -> getValue("p"));
          cell -> SetCompl(rr_ -> getValue("Compl"));

          //update volume of the cell and of the integrator
          cell -> SetCompartment( cell -> GetCompartment()/2);
          rr_ -> setValue("compartment", cell -> GetCompartment());

          cell -> SetIsBornAfterDivision(true);

          cell -> Divide();
      }

    }
  }

  const ls::DoubleMatrix& GetResult() const { return result_; }

 private:
  ls::DoubleMatrix result_;
  bool active_ = true;
  rr::RoadRunner* rr_;
  double dt_;
  BDM_CLASS_DEF_OVERRIDE(SbmlModule, 1);
};




} //end namespace bdm

#endif