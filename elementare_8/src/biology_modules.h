#ifndef BIOLOGY_MODULES_H_
#define BIOLOGY_MODULES_H_


#include "biodynamo.h"
#include "substances.h"
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


  //Perfom the exchange of substances with the environment
  // in this case just A and B

  void ExchangeSubstances(const Double3 pos){
    static auto* aDiffGrid = Simulation::GetActive()-> GetResourceManager()->GetDiffusionGrid(Aspecie);
    static auto* bDiffGrid = Simulation::GetActive()-> GetResourceManager()->GetDiffusionGrid(Bspecie);

    size_t iA = aDiffGrid -> GetBoxIndex(pos);
    size_t iB = bDiffGrid -> GetBoxIndex(pos);
    
  
    int A_netto = rr_ -> getValue("A_ingresso") - rr_ -> getValue("A_uscita");
    int B_netto = rr_ -> getValue("B_ingresso") - rr_ -> getValue("B_uscita");
    //concentrazione* volume (DiffusionGrid::GetBoxLength())
    //A netto < 0: the cell eats something from the environment
    if (A_netto < 0){
      int A_Concentration = static_cast<int>(aDiffGrid -> GetConcentration(pos));
      //Check if there's A in the environment and eat it
      if(A_Concentration > 0){
        aDiffGrid -> IncreaseConcentrationBy(iA, A_netto);
      }

    }else{
      //A_netto is positive so the cell eject A in the environment
      aDiffGrid -> IncreaseConcentrationBy(iA, A_netto);

    }

    
    //B_netto < 0: the cell eats something from the environment
    if (B_netto < 0){
      int B_Concentration = static_cast<int>(bDiffGrid -> GetConcentration(pos));
      //check if there's B in the environment
      if(B_Concentration > 0){      
        bDiffGrid -> IncreaseConcentrationBy(iB, B_netto);
      }

    }else{
      bDiffGrid -> IncreaseConcentrationBy(iB, B_netto);
    }

    //set new concentrations of Aext and Bnext
    int Avolume = aDiffGrid->GetBoxVolume();
    int Bvolume = bDiffGrid->GetBoxVolume();

    auto newAext = (rr_ ->getValue("Aext")*Avolume - A_netto )/Avolume;
    auto newBext = (rr_ ->getValue("Bext")*Bvolume - B_netto )/Bvolume;
    
    rr_->setValue("Aext",static_cast<int>(newAext) );
    rr_->setValue("Bext",static_cast<int>(newBext) );

    //std::cout << B_Concentration << std::endl;
  }
  //Append volume value to text file
  void SaveToFile( const SoUid id, int iteration){

      std::ofstream outfile;
      outfile.open("volume.csv", std::ios_base::app); // append instead of overwrite
      outfile <<id<<";"  << iteration << ";" << 
              rr_ -> getValue("compartment") << ";" <<
              rr_ -> getValue("A_0")  <<";" <<
              rr_ -> getValue("B_0")  <<";" <<
              rr_ -> getValue("C")    <<";" <<
              rr_ -> getValue("L")    <<";" <<
              rr_ -> getValue("p")    <<";" <<
              rr_ -> getValue("Aext")  <<";" << 
              rr_ -> getValue("Bext")  <<";" <<
              rr_ -> getValue("Compl")  <<";" <<
              rr_ -> getValue("A_uscita")  << ";" << 
              rr_ -> getValue("A_ingresso")  <<";" <<
              rr_ -> getValue("B_uscita")  << ";" <<
              rr_ -> getValue("B_ingresso")  << std::endl;
  }
  //update volume
  void UpdateVolume(){
    //float ro =7.87870;
    float ro =7.87870e+22;
    float delta = 1e-8;
    float delta3 = pow(delta,3);
    int L = rr_ -> getValue("L");
    double newVolume = (1.0/6.0)*M_PI*delta3*pow(sqrt((L/(ro*M_PI*delta3)) -1.0/3.0)-1 ,3 );   
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
        //rr_ -> setValue("Compl", cell -> GetCompl() * randomSpeciesChange / 100);
        //rr_ -> setValue("p", cell -> GetP());
        // rr_ -> setValue("Aext", cell -> GetAExt());
        // rr_ -> setValue("Bext", cell -> GetBExt());
      }



      
     
      cell -> SetL(rr_ -> getValue("L"));

      UpdateVolume();
      //Integration pass
      rr_->getIntegrator()->integrate(0 * dt_, dt_);
      

      ExchangeSubstances(so -> GetPosition());

      //A_uscita quantità prodotta, A_ingresso quantità consumata
      //la differenza è quello che inserisce all'ambiente
      //fare ciò ad ogni integrazione
      //prima di ogni integrazione van rimesse a 0
//      if(i != 399){
        SaveToFile(so -> GetUid(),i);   
        rr_ -> setValue("A_uscita",0);
        rr_ -> setValue("A_ingresso",0);
        rr_ -> setValue("B_uscita",0);
        rr_ -> setValue("B_ingresso",0);
  //    }
      
    
   
      if (rr_ -> getValue("L") > 20000 && active_){
          //multiply lipids by 0.5
          rr_ -> setValue("L", rr_ -> getValue("L")/2);
          cell -> SetL(rr_ -> getValue("L"));
          
         // active_ = false;  <- cells keep replicating
          MultiplyAllSpecies(0.353553391);
          //update Cell Values
          cell -> SetA(rr_ -> getValue("A_0"));
          cell -> SetB(rr_ -> getValue("B_0"));
          cell -> SetC(rr_ -> getValue("C"));
          cell -> SetL(rr_ -> getValue("L"));
          cell -> SetP(rr_ -> getValue("p"));
          cell -> SetAExt(rr_ -> getValue("Aext"));
          cell -> SetAExt(rr_ -> getValue("Bext"));
          cell -> SetCompl(rr_ -> getValue("Compl"));

          //update volume of the cell and of the integrator
          cell -> SetCompartment( rr_ -> getValue("compartment")/2);
          rr_ -> setValue("compartment", cell -> GetCompartment());

          cell -> SetIsBornAfterDivision(true);

          cell -> Divide();
      }

    }
  }



 private:

  bool active_ = true;
  rr::RoadRunner* rr_;
  double dt_;
  BDM_CLASS_DEF_OVERRIDE(SbmlModule, 1);
};




} //end namespace bdm

#endif