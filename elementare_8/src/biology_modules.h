#ifndef BIOLOGY_MODULES_H_
#define BIOLOGY_MODULES_H_


#include "biodynamo.h"
#include "substances.h"
//#include "cell.h"
#include "rrException.h"
#include "rrExecutableModel.h"
#include "rrLogger.h"
#include "rrLogger.h"
#include "rrRoadRunner.h"
#include "rrUtils.h"



namespace bdm{





// Define SbmlModule to simulate intracellular chemical reaction network.
struct SbmlModule : public BaseBiologyModule {
  BDM_BM_HEADER(SbmlModule, BaseBiologyModule, 1)
  //BDM_STATELESS_BM_HEADER(SbmlModule,BaseBiologyModule,1);
  
  // SbmlModule(const std::string& sbml_file, const rr::SimulateOptions& opt)
  //   : BaseBiologyModule(gAllEventIds) {
  SbmlModule()
    : BaseBiologyModule(gAllEventIds) {  
    //  : BaseBiologyModule(gNullEventId, gNullEventId) {
   //   Initialize(sbml_file, opt);
   Initialize();

  }
  SbmlModule(int A, int B, int C, int L)
    : BaseBiologyModule(gAllEventIds) {  
    //  : BaseBiologyModule(gNullEventId, gNullEventId) {
   //   Initialize(sbml_file, opt);
   std::cout << "costruttore figlia "<<A << " " << B << " "<<C <<" "<<L << std::endl;
   Initialize();
    this -> inherited_ = true;
    this -> A_ = abs(A);
    this -> B_ = abs(B);
    this -> C_ = abs(C);
    this -> L_ = abs(L);
  }

  SbmlModule(const SbmlModule& other) {
    auto mother_sbml_module = bdm_static_cast<const SbmlModule*>(&other);
    //auto mother_sbml_module = dynamic_cast<SbmlModule*>(&other);
    Initialize();
    // std::cout << "son dentro il modulo bello" << std::endl;
    // if (mother_sbml_module -> divided_){
    //  // mother_sbml_module -> divided_ = false;
    //   std::cout << "son dentro l'if "<< std::endl;
    //   this -> A_ = mother_sbml_module -> A_;
    //   this -> B_ = mother_sbml_module -> B_;
    //   this -> C_ = mother_sbml_module -> C_;
    //   this -> L_ = mother_sbml_module -> L_;
    //   this -> inherited_ = true;
    // }
    //Initialize(other_sbml_bm->sbml_file_, other_sbml_bm->initial_options_);
  }

  virtual ~SbmlModule() { delete rr_; }

  SbmlModule(const Event& event, BaseBiologyModule* other, uint64_t new_oid = 0)
      : BaseBiologyModule(event, other, new_oid) {
      }
  
  // void Initialize(const std::string& sbml_file,
  //                 const rr::SimulateOptions& opt) {
  void Initialize() {
    
    rr::SimulateOptions opt;
    opt.start = 0;
    opt.duration = 400;
    opt.steps = 870;
  //     opt.duration = 25;
  // opt.steps = 50;
    std::string sbml_file = "src/sbml_model.xml";
    sbml_file_ = sbml_file; 
    initial_options_ = opt;

    rr_ = new rr::RoadRunner(sbml_file_);
    rr_->getSimulateOptions() = initial_options_;
    // setup integrator
    rr_->setIntegrator("gillespie");
    dt_ = opt.duration / opt.steps;
    auto* integrator = rr_->getIntegrator();
    integrator->setValue("variable_step_size", false);
    integrator->setValue("initial_time_step", dt_);
    integrator->setValue("maximum_time_step", dt_);
  }
  // /// Create a new instance of this object using the default constructor.
  // BaseBiologyModule* GetInstance(const Event& event, BaseBiologyModule* other,
  //                                uint64_t new_oid = 0) const override {
  //   return new SbmlModule(event, other, new_oid);
  // }

  // /// Create a copy of this biology module.
  // BaseBiologyModule* GetCopy() const override { return new SbmlModule(*this); }

  // /// Default event handler (exising biology module won't be modified on
  // /// any event)
  // void EventHandler(const Event& event, BaseBiologyModule* other1,
  //                   BaseBiologyModule* other2 = nullptr) override {
  //   BaseBiologyModule::EventHandler(event, other1, other2);
  // }
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
    
    int Avolume = aDiffGrid->GetBoxVolume();
    int Bvolume = bDiffGrid->GetBoxVolume();
  
    int A_netto = rr_ -> getValue("A_ingresso") - rr_ -> getValue("A_uscita");
    int B_netto = rr_ -> getValue("B_ingresso") - rr_ -> getValue("B_uscita");
   // std::cout << "Il volume e' " << Avolume << " Lato: "<< aDiffGrid -> GetBoxLength()<< std::endl;
    /** 
     * Salvare il valore Aext dell'ambiente 
     * Calcolare quello nuovo 
     * Utilizzare la differenza in IncreaseConcentration.
     * 
     * A_netto se positivo mangia roba da fuori
     * **/
    //newAext - VecchioAext = valore da incrementare       
    int A_Concentration = static_cast<int>(aDiffGrid -> GetConcentration(pos));
    //auto newExternalAExt = (A_Concentration*Avolume - A_netto )/Avolume;
    auto newExternalAExt = A_Concentration - A_netto;
    auto increaseAValue = newExternalAExt - A_Concentration;
    //auto increaseAValue = newExternalAExt - A_Concentration/Avolume;
    //std::cout << "A_conc: " << A_Concentration <<" A_netto: "<< A_netto  <<" newAext: " << newExternalAExt << " value: "<<increaseAValue << std::endl;
    
    //A netto > 0: the cell eats something from the environment
    if (A_netto > 0){
      
      //Check if there's A in the environment and eat it
      if(A_Concentration > 0){      
        //std::cout << "A eaten by : " << increaseAValue << std::endl;
        
        /**
         * Se il valore che devo togliere dall'ambiente è maggiore di quello attualmente presente
         * tolgo solo quello presente
         * TODO: gestire in modo coerente anche i valori della cellula
         * */
        if (-increaseAValue > A_Concentration){
          aDiffGrid -> IncreaseConcentrationBy(iA, -A_Concentration);  
          //std::cout << "A eaten: "<< A_Concentration << std::endl;
        } else{
         // std::cout << "A eaten: "<< increaseAValue << std::endl;
          aDiffGrid -> IncreaseConcentrationBy(iA, increaseAValue);
        }
        
      }

    }else if (A_netto <0){
      //std::cout << "A ejected by : " << increaseAValue << std::endl;
      //A_netto is negative so the cell eject A in the environment
      //std::cout << "A ejected: "<< increaseAValue << std::endl;
      aDiffGrid -> IncreaseConcentrationBy(iA, increaseAValue);

    }

    
    int B_Concentration = static_cast<int>(bDiffGrid -> GetConcentration(pos));
    //auto newExternalBExt = (B_Concentration*Avolume -B_netto )/Bvolume;
    auto newExternalBExt = (B_Concentration -B_netto );
    auto increaseBValue = newExternalBExt - B_Concentration;

    //auto increaseBValue = newExternalBExt - B_Concentration/Bvolume;

    //B_netto < 0: the cell eats something from the environment
    if (B_netto < 0){
      //check if there's B in the environment
      if(B_Concentration > 0){    
                
        /**
         * Se il valore che devo togliere dall'ambiente è maggiore di quello attualmente presente
         * tolgo solo quello presente
         * TODO: gestire in modo coerente anche i valori della cellula
         * */
        
        if(-increaseBValue > B_Concentration){
          bDiffGrid -> IncreaseConcentrationBy(iB, -B_Concentration); 
        //  std::cout << "B eaten: "<< -B_Concentration << std::endl; 
        }else{
        //  std::cout << "B eaten: "<< increaseBValue << std::endl;
          bDiffGrid -> IncreaseConcentrationBy(iB, increaseBValue);
        }
        
      }

    }else if (B_netto <0){
      std::cout << "B ejected: "<< increaseAValue << std::endl;
      bDiffGrid -> IncreaseConcentrationBy(iB, increaseBValue);
    }

    //set new concentrations of Aext and Bnext


    // auto newAext = (rr_ ->getValue("Aext")*Avolume - A_netto )/Avolume;
    // auto newBext = (rr_ ->getValue("Bext")*Bvolume - B_netto )/Bvolume;
    auto newAext = static_cast<int>(aDiffGrid -> GetConcentration(pos));
    auto newBext = static_cast<int>(bDiffGrid -> GetConcentration(pos));
  

    rr_->setValue("Aext",static_cast<int>(newAext) );
    rr_->setValue("Bext",static_cast<int>(newBext) );

    //std::cout << B_Concentration << std::endl;
  }
  //Append volume value to text file
  void SaveToFile( const SoUid id, int iteration){

      static auto* aDiffGrid = Simulation::GetActive()-> GetResourceManager()->GetDiffusionGrid(Aspecie);
      bdm::Double3 cuboVicino = {200,200,200};
      bdm::Double3 cuboMedio = {300,300,300};
      bdm::Double3 cuboLontano = {400,400,400};

      int Avicino, Amedio, Alontano;

      Avicino = static_cast<int>(aDiffGrid -> GetConcentration(cuboVicino));
      Amedio = static_cast<int>(aDiffGrid -> GetConcentration(cuboMedio));
      Alontano = static_cast<int>(aDiffGrid -> GetConcentration(cuboLontano));
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
              rr_ -> getValue("B_ingresso") <<";"<<
              rr_ -> getValue("A_ingresso") -rr_ -> getValue("A_uscita") <<";" <<
              rr_ -> getValue("B_ingresso") -rr_ -> getValue("B_uscita") << 
              ";" << Avicino <<";"<<Amedio << ";"<< Alontano << ";" <<std::endl;
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
    if (auto* cell = static_cast<Cell*>(so)) {

      static auto* aDiffGrid = Simulation::GetActive()-> GetResourceManager()->GetDiffusionGrid(Aspecie);
      static auto* bDiffGrid = Simulation::GetActive()-> GetResourceManager()->GetDiffusionGrid(Bspecie);

      auto i = Simulation::GetActive()->GetScheduler()->GetSimulatedSteps();
    
      //std::cout << i << std::endl;
      if(i == 0){
        //rand 90-110
        //int randomSpeciesChange = rand() % 21 + 90;
     //   int randomSpeciesChange = 100;
        //rr_ -> setValue("A_0", cell -> GetA() * randomSpeciesChange / 100.0);
       // rr_ -> setValue("B_0", cell -> GetB() * randomSpeciesChange / 100.0);
       // rr_ -> setValue("C", cell -> GetC() * randomSpeciesChange / 100.0);
       // rr_ -> setValue("L", cell -> GetL() * randomSpeciesChange / 100.0);

        rr_-> setValue("Aext", static_cast<int>(aDiffGrid -> GetConcentration(so -> GetPosition()) ) );
        rr_-> setValue("Bext", static_cast<int>(bDiffGrid -> GetConcentration(so -> GetPosition()) ) );
       // rr_ -> setValue("Compl", cell -> GetCompl() * randomSpeciesChange / 100);
      }

      // if(cell -> GetIsBornAfterDivision()){
      //   //rand 90-110
      //   int randomSpeciesChange = rand() % 21 + 90;
      //   // cell -> SetIsBornAfterDivision(false);
      //   // rr_ -> setValue("A_0", cell -> GetA() * randomSpeciesChange / 100);
      //   // rr_ -> setValue("B_0", cell -> GetB() * randomSpeciesChange / 100);
      //   // rr_ -> setValue("C", cell -> GetC() * randomSpeciesChange / 100);
      //   // rr_ -> setValue("L", cell -> GetL() * randomSpeciesChange / 100);

      //   rr_-> setValue("Aext", static_cast<int>(aDiffGrid -> GetConcentration(so -> GetPosition()) ) );
      //   rr_-> setValue("Bext", static_cast<int>(bDiffGrid -> GetConcentration(so -> GetPosition()) ) );
      //   //rr_ -> setValue("Compl", cell -> GetCompl() * randomSpeciesChange / 100);
      //   //rr_ -> setValue("p", cell -> GetP());
      //   // rr_ -> setValue("Aext", cell -> GetAExt());
      //   // rr_ -> setValue("Bext", cell -> GetBExt());
      // }



      
     
      //cell -> SetL(rr_ -> getValue("L"));

      UpdateVolume();
      //Integration pass

      rr_->getIntegrator()->integrate(personal_counter_* dt_, dt_);
      personal_counter_ ++;

      if(divided_){
        divided_  = false;
      }
      if(this -> inherited_){
        std::cout << "C: "<< rr_ -> getValue("C") << std::endl;
        inherited_ = false;
        rr_ -> setValue("A_0", A_);
        rr_ -> setValue("B_0", B_);
        rr_ -> setValue("C", C_);
        rr_ -> setValue("L", L_);
        A_ = 0;
        B_= 0;
        C_ = 0;
        L_ = 0;
        std::cout << "C: "<< rr_ -> getValue("C") << std::endl;
      }

      ExchangeSubstances(so -> GetPosition());

      bdm::Double3 posCubo = {200,200,200};
      
      if (so -> GetPosition() == posCubo){
          //std::cout << "son la cellula 200 200 200" <<std::endl;
          double AExtValue = 100;
          double BExtValue = 100;
          
          bdm::Double3 nuova_pos = {230,230,230};
          size_t iA = aDiffGrid -> GetBoxIndex(nuova_pos);
          size_t iB = bDiffGrid -> GetBoxIndex(nuova_pos);

          aDiffGrid -> IncreaseConcentrationBy(iA, AExtValue);
          bDiffGrid -> IncreaseConcentrationBy(iB, BExtValue);
      }
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
      
    
      //std::cout << "ID: "<< so->GetUid() << std::endl;
      if (rr_ -> getValue("L") > 20000 && active_){
          //multiply lipids by 0.5
          rr_ -> setValue("L", rr_ -> getValue("L")/2);
          // cell -> SetL(rr_ -> getValue("L"));
          
         // active_ = false;  <- cells keep replicating
          MultiplyAllSpecies(0.353553391);
          //update Cell Values
          // cell -> SetA(rr_ -> getValue("A_0"));
          // cell -> SetB(rr_ -> getValue("B_0"));
          // cell -> SetC(rr_ -> getValue("C"));
          // cell -> SetL(rr_ -> getValue("L"));
          // cell -> SetP(rr_ -> getValue("p"));
          // cell -> SetAExt(rr_ -> getValue("Aext"));
          // cell -> SetAExt(rr_ -> getValue("Bext"));
          // cell -> SetCompl(rr_ -> getValue("Compl"));
          this -> A_ = rr_ -> getValue("A_0");
          this -> B_ = rr_ -> getValue("B_0");
          this -> C_ = rr_ -> getValue("C");
          this -> L_ = rr_ -> getValue("L");
          this -> divided_ = true;
          //update volume of the cell and of the integrator
          //cell -> SetCompartment( rr_ -> getValue("compartment")/2);
          //rr_ -> setValue("compartment", cell -> GetCompartment());

          //cell -> SetIsBornAfterDivision(true);

          cell -> Divide();
      }

    }
  }


  public:
    int A_ = 0;
    int B_ = 0;
    int C_ = 0;
    int L_ = 0; 
 private:
  std::string sbml_file_;
  rr::SimulateOptions initial_options_;
  bool active_ = true;
  rr::RoadRunner* rr_;
  double dt_;
  int personal_counter_ = 0;

  bool inherited_ = false;
  bool divided_ = false; 
  //BDM_CLASS_DEF_OVERRIDE(SbmlModule, 1);
};

class MyCell : public Cell {
  BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1);

 public:
  MyCell() {}
  explicit MyCell(const Double3& position) : Base(position) {}

  /// Default event constructor
  MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
      : Base(event, other, new_oid) {
        
        //AddBiologyModule
        //TODO: inherit substances from mother and update RR
        if (auto* mother = dynamic_cast<MyCell*>(other)) {
          // rr::SimulateOptions opt;
          // opt.start = 0;
          // opt.duration = 200;
          // opt.steps = 200;
          const auto module = mother -> GetAllBiologyModules();
          const auto mother_module = bdm_static_cast<const SbmlModule*>(module[0]);
          int A = mother_module -> A_;
          int B = mother_module -> B_;
          int C = mother_module -> C_;
          int L = mother_module -> L_;
           // std::string sbml_file = "src/sbml_model.xml";
          this -> AddBiologyModule(new SbmlModule(A,B,C,L));
        }
      }

  
};



} //end namespace bdm

#endif