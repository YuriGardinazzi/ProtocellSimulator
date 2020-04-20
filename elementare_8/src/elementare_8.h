// -----------------------------------------------------------------------------
//
// Copyright (C) The BioDynaMo Project.
// All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// See the LICENSE file distributed with this work for details.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership.
//
// -----------------------------------------------------------------------------
#ifndef ELEMENTARE_8_H_
#define ELEMENTARE_8_H_

#include "biodynamo.h"
#include "core/util/io.h"
#include "core/util/timing.h"

#include <TAxis.h>
#include <TCanvas.h>
#include <TFrame.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TPad.h>
#include <TLegend.h>
#include <TLegendEntry.h>
#include "rrException.h"
#include "rrExecutableModel.h"
#include "rrLogger.h"
#include "rrLogger.h"
#include "rrRoadRunner.h"
#include "rrUtils.h"

#include <math.h>
#include <fstream>
#include <stdlib.h> /*rand()*/
namespace bdm {

// Define my custom cell, which extends Cell by adding an extra
// data member compartment_, L_.
class MyCell : public Cell {
  BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, compartment_, L_,A_0_ ,B_0_, p_ ,C_ ,Compl_, isBornAfterDivision_);

 public:
  MyCell() {}
  explicit MyCell(const Double3& position) : Base(position) {}

  /// Default event constructor
  MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
      : Base(event, other, new_oid) {

        //TODO: inherit substances from mother and update RR
        if (auto* mother = dynamic_cast<MyCell*>(other)) {
          if(mother -> GetIsBornAfterDivision()){
            // std::cout << "I'm a new CELL :D " << std::endl;
            SetL(mother -> GetL());
            SetA(mother -> GetA());
            SetB(mother -> GetB());
            SetC(mother -> GetC());
            SetP(mother -> GetP());
          }
        }
      }

  void SetCompartment(double volume) { compartment_ = volume; }
  double GetCompartment() const { return compartment_; }
  
  void SetL(int l) { L_ = l; }
  int GetL(){ return L_; }

  void SetA(int a) { A_0_ = a; }
  int GetA() const { return A_0_; }

  void SetB(int b) { B_0_ = b; }
  int GetB() const { return B_0_; }

  void SetC(int c) { C_ = c; }
  int GetC() const { return C_; }

  void SetP(double p) { p_ = p; }
  double GetP() const { return p_; }

  void SetCompl(int co) { Compl_ = co; }
  int GetCompl() const { return Compl_; }
  
  void SetIsBornAfterDivision(bool flag){ isBornAfterDivision_ = flag;}
  bool GetIsBornAfterDivision(){ return isBornAfterDivision_ ;}
  
  void PrintValues(){
    std::cout <<"L:  "<<GetL() <<"\n" 
              <<"A: "<<GetA() <<"\n"
              <<"B: "<<GetB() <<"\n"
              <<"C: "<<GetC() <<"\n"
              <<"p: "<<GetP() <<"\n" 
              <<"Compl: "<<GetCompl() <<"\n" 
              <<"is born after division: "<<GetIsBornAfterDivision()<<std::endl;


  }
 private:
  double compartment_ = 0;
  int L_ = 0;
  int A_0_ = 0;
  int B_0_ = 0;
  int C_ = 0;
  int Compl_ = 0;
  double p_ = 0;
  bool isBornAfterDivision_ = false;
};

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

inline void AddToPlot(TMultiGraph* mg, const ls::Matrix<double>* result) {
  ls::Matrix<double> foo1(*result);
  ls::Matrix<double> foo(*foo1.getTranspose());
  int rows;
  int cols;
  auto** twod = foo.get2DMatrix(rows, cols);

  // TGraph* gr = new TGraph(cols, twod[0], twod[1]); /*A_0*/
  
  // gr->SetLineColorAlpha(2, 0.1);
  // gr->SetLineWidth(1);
  

  // TGraph* gr1 = new TGraph(cols, twod[0], twod[2]); /*B_0*/
  
  // gr1->SetLineColorAlpha(3, 0.1);
  // gr1->SetLineWidth(1);

  // TGraph* gr2 = new TGraph(cols, twod[0], twod[3]); /*C*/
  
  // gr2->SetLineColorAlpha(4, 0.1);
  // gr2->SetLineWidth(1);

  // TGraph* gr3 = new TGraph(cols, twod[0], twod[4]); /*L*/
  
  // gr3->SetLineColorAlpha(8, 0.1);
  // gr3->SetLineWidth(1);


  // TGraph* gr4 = new TGraph(cols, twod[0], twod[5]); /*p*/
  
  // gr4->SetLineColorAlpha(8, 0.1);
  // gr4->SetLineWidth(1);

 
  // TGraph* gr5 = new TGraph(cols, twod[0], twod[6]); /*Aext*/
  
  // gr5->SetLineColorAlpha(8, 0.1);
  // gr5->SetLineWidth(1);

  // TGraph* gr6 = new TGraph(cols, twod[0], twod[7]); /*Bext*/
  
  // gr6->SetLineColorAlpha(9, 0.1);
  // gr6->SetLineWidth(1);

  // TGraph* gr7 = new TGraph(cols, twod[0], twod[8]); /*Compl*/
  
  // gr7->SetLineColorAlpha(10, 0.1);
  // gr7->SetLineWidth(1);

  TGraph* gr8 = new TGraph(cols, twod[0], twod[9]); /*A_uscita*/
  gr8->SetLineColorAlpha(2, 0.1);
  gr8->SetLineWidth(1);  

  TGraph* gr9 = new TGraph(cols, twod[0], twod[10]); /*A_ingresso*/
  gr9->SetLineColorAlpha(3, 0.1);
  gr9->SetLineWidth(1);  

  // TGraph* gr10 = new TGraph(cols, twod[0], twod[11]); /*B_ingresso*/
  // gr10->SetLineColorAlpha(7, 0.1);
  // gr10->SetLineWidth(1);  

  // TGraph* gr11 = new TGraph(cols, twod[0], twod[12]); /*B_uscita*/
  // gr11->SetLineColorAlpha(9, 0.1);
  // gr11->SetLineWidth(1);  

  // mg->Add(gr); //A
  // mg->Add(gr1); //B
  // mg->Add(gr2); //C
  // mg->Add(gr3); //L

  //mg->Add(gr4);   //p
  //mg->Add(gr5);   //AExt
  //mg->Add(gr6);   //BExt
  //mg -> Add(gr7); //compl  goes to 10^3

  mg -> Add(gr8); //A_uscita
  mg -> Add(gr9); //A_ingresso
  // mg -> Add(gr10); //B_ingresso
  // mg -> Add(gr11); //B_uscita

  mg->Draw("AL C C");

  auto* legend = new TLegend(0.8,0.7,0.90,0.9);


   
  // TLegendEntry *le = legend->AddEntry(gr,"A","l");
  // le->SetTextColor(2);
  // TLegendEntry *le1 = legend->AddEntry(gr1,"B","l");
  // le1->SetTextColor(3);
  // TLegendEntry *le2 = legend->AddEntry(gr2,"C","l");
  // le2->SetTextColor(4);
  // TLegendEntry *le3 = legend->AddEntry(gr3,"L","l");
  // le3->SetTextColor(8);
  // TLegendEntry *le7 = legend->AddEntry(gr7,"Compl","l");
  // le7->SetTextColor(1);

  //graph A-ingresso  A-uscita B-ingresso B-uscita
  TLegendEntry *le8 = legend->AddEntry(gr8,"Aout","l");
  le8->SetTextColor(2);
  TLegendEntry *le9 = legend->AddEntry(gr9,"Ain","l");
  le9->SetTextColor(3);
  // TLegendEntry *le10 = legend->AddEntry(gr10,"Bin","l");
  // le10->SetTextColor(7);
  // TLegendEntry *le11 = legend->AddEntry(gr11,"Bout","l");
  // le11->SetTextColor(9);



  legend -> Draw();
}

inline void PlotSbmlModules(const char* filename) {
  // setup plot
  TCanvas c;
  c.SetGrid();

  TMultiGraph* mg = new TMultiGraph();
  mg->SetTitle("Elementare 7;Timestep;Number");

  Simulation::GetActive()->GetResourceManager()->ApplyOnAllElements(
      [&](SimObject* so) {
        auto* cell = static_cast<MyCell*>(so);
        const auto& bms = cell->GetAllBiologyModules();
        if (bms.size() == 1) {
          AddToPlot(mg, &static_cast<SbmlModule*>(bms[0])->GetResult());
        }
      });

  // finalize plot
  // TCanvas::Update() draws the frame, after which one can change it
  c.Update();
  c.GetFrame()->SetBorderSize(12);
  gPad->Modified();
  gPad->Update();
  c.Modified();
  c.cd(0);

  // c.BuildLegend(); // TODO position of legend
  c.SaveAs(filename);
}

inline int Simulate(int argc, const char** argv) {
  auto opts = CommandLineOptions(argc, argv);
  opts.AddOption<uint64_t>("n, num-cells", "10", "The total number of cells");
  uint64_t num_cells = opts.Get<uint64_t>("num-cells");

  // roadrunner options
  rr::SimulateOptions opt;
  opt.start = 0;
  opt.duration = 200;
  opt.steps = 2000;

  auto set_param = [&](Param* param) {
    param->simulation_time_step_ = opt.duration / opt.steps;
  };

  Simulation simulation(&opts, set_param);

  std::string sbml_file = "../src/sbml_model.xml";
  if (!FileExists(sbml_file)) {
    sbml_file = "src/sbml_model.xml";
    if (!FileExists(sbml_file)) {
      Log::Error("Could not find sbml_model.xml file.");
    }
  }

  // Define initial model
  auto construct = [&](const Double3& position) {
    auto* cell = new MyCell();
    cell->SetPosition(position);
    cell->SetDiameter(10);
    cell->AddBiologyModule(new SbmlModule(sbml_file, opt));
    return cell;
  };
  ModelInitializer::CreateCellsRandom(0, 200, num_cells, construct);

  // Run simulation
  auto start = Timing::Timestamp();
  simulation.GetScheduler()->Simulate(opt.steps);
  auto stop = Timing::Timestamp();
  std::cout << "RUNTIME " << (stop - start) << std::endl;

  PlotSbmlModules("sbml-modules.svg");

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // ELEMENTARE_8_H_
