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
#ifndef SBML_INTEGRATION_H_
#define SBML_INTEGRATION_H_

#include "biodynamo.h"
#include "core/util/io.h"
#include "core/util/timing.h"

#include <TAxis.h>
#include <TCanvas.h>
#include <TFrame.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TPad.h>

#include "rrException.h"
#include "rrExecutableModel.h"
#include "rrLogger.h"
#include "rrLogger.h"
#include "rrRoadRunner.h"
#include "rrUtils.h"

#include "omp.h"

namespace bdm {

// Define my custom cell, which extends Cell by adding extra
// data members specie L: spL_.
class MyCell : public Cell {
  BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, spL_, A_, B_, AB_, COMP_, PL_);

 public:
  MyCell() {}
  explicit MyCell(const Double3& position) : Base(position) {}

  /// Default event constructor
  MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
      : Base(event, other, new_oid) {
     /* if (auto* mother = dynamic_cast<MyCell*>(other)) {
        cell_color_ = mother->cell_color_;
        if (event.GetId() == CellDivisionEvent::kEventId) {
          // the daughter will be able to divide
          can_divide_ = true;
        } else {
          can_divide_ = mother->can_divide_;
        }

      } */
    }

  void setA(double a) { A_ = a; }
  double getA() const { return A_; }

  void setB(double b) { B_ = b; }
  double getB() const { return B_; }

  void setAB(double ab) { AB_ = ab; }
  double getAB() const { return AB_; }

  void setPL(double pl) { PL_ = pl; }
  double getPL() const { return PL_; }

  void setCOMP(double comp) { COMP_ = comp; }
  double getCOMP() const { return COMP_; }

  void setL(double l) { spL_ = l; }
  double getL() const { return spL_; }
 private:
  double COMP_ = 0;
  double PL_ = 0;
  double A_ = 0;
  double B_ = 0;
  double AB_ = 0;
  double spL_= 1.00201e-16;
};

// Define SbmlModule to simulate intracellular chemical reaction network.
struct SbmlModule : public BaseBiologyModule {
  SbmlModule(const std::string& sbml_file, const rr::SimulateOptions& opt)
      : BaseBiologyModule(gNullEventId, gNullEventId) {
    rr_ = new rr::RoadRunner(sbml_file);
    rr_->getSimulateOptions() = opt;
    // setup integrator
    rr_->setIntegrator("cvode");
    dt_ = opt.duration / opt.steps;
    auto* integrator = rr_->getIntegrator();
    integrator->setValue("variable_step_size", false);
    integrator->setValue("initial_time_step", dt_);
    integrator->setValue("maximum_time_step", dt_);

    result_.resize(opt.steps,9);
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

  void Run(SimObject* so) override {
    if (auto* cell = static_cast<MyCell*>(so)) {
      auto i = Simulation::GetActive()->GetScheduler()->GetSimulatedSteps();    

      
      
      rr_->getIntegrator()->integrate(i * dt_, dt_);

      if (rr_ -> getValue("L") > 2e-16 && active_) {
        // rr_ -> setValue("L", cell -> getL()/2);
        // rr_ -> setValue("A", cell -> getA()/2);
        rr_ -> setValue("L", rr_ -> getValue("L")/2);
        rr_ -> setValue("A", rr_ -> getValue("A")/2);
        rr_ -> setValue("B", rr_ -> getValue("B")/2);
        rr_ -> setValue("AB", rr_ -> getValue("AB")/2);
        rr_ -> setValue("Comp1", rr_ -> getValue("Comp1")/2);
        rr_ -> setValue("pL", rr_ -> getValue("pL")/2);
        rr_ -> setValue("Astar", rr_ -> getValue("Astar")/2);
        rr_ -> setValue("Bstar", rr_ -> getValue("Bstar")/2);
        // rr_ -> setValue("B", cell -> getB()/2);
        // rr_ -> setValue("AB", cell -> getAB()/2);
        // rr_ -> setValue("pL", cell -> getPL()/2);
        // rr_ -> setValue("Comp1", cell -> getCOMP()/2);
        cell->Divide();
        active_ = false;
      }      
      // FIXME model time not the same as    
      const auto& partial_result = rr_->getFloatingSpeciesAmountsNamedArray();

      cell->setL(partial_result(0, 6)); //L is at position 6
      cell->setA(partial_result(0, 0)); //L is at position 6
      cell->setB(partial_result(0, 2));
      cell->setAB(partial_result(0, 4));
      cell->setCOMP(partial_result(0, 5));
      cell->setPL(partial_result(0, 7));
     // std::cout<< "Cell GetL: "<< cell->GetL()<< std::endl; 
      result_(i, 0) = i * dt_;
      for (unsigned j = 0; j < partial_result.numCols(); j++) {
        result_(i, j + 1) = partial_result(0, j);
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
  //position twod[0] contains just the time_step number

  TGraph* gr = new TGraph(cols, twod[0], twod[1]);
  //gr->SetFillStyle(0);
  gr->SetLineColorAlpha(2, 0.5);
  gr->SetLineWidth(3);
  gr->SetTitle("A");

  TGraph* gr1 = new TGraph(cols, twod[0], twod[2]);
  gr1->SetTitle("Astar");
  gr1->SetLineColorAlpha(3, 0.1);
  gr1->SetLineWidth(1);

  TGraph* gr2 = new TGraph(cols, twod[0], twod[3]);
  gr2->SetTitle("B");
  gr2->SetLineColorAlpha(4, 0.5);
  gr2->SetLineWidth(3);
 
  //
  TGraph* gr3 = new TGraph(cols, twod[0], twod[4]);
  gr3->SetTitle("Bstar");
  gr3->SetLineColorAlpha(42, 0.1);
  gr3->SetLineWidth(3);

  TGraph* gr4 = new TGraph(cols, twod[0], twod[5]);
  gr4->SetTitle("AB");
  gr4->SetLineColorAlpha(8, 0.5);
  gr4->SetLineWidth(3);

  TGraph* gr5 = new TGraph(cols, twod[0], twod[6]);
  gr5->SetTitle("Comp1");
  gr5->SetLineColorAlpha(7, 0.1);
  gr5->SetLineWidth(1);

  TGraph* gr6 = new TGraph(cols, twod[0], twod[7]);
  gr6->SetTitle("L");
  gr6->SetLineColorAlpha(28, 0.1);
  gr6->SetLineWidth(5);

  TGraph* gr7 = new TGraph(cols, twod[0], twod[8]);
  gr7->SetTitle("pL");
  gr7->SetLineColorAlpha(9, 0.1);
  gr7->SetLineWidth(1);
  //

  //mg->Add(gr); //A
  //mg->Add(gr1);
  //mg->Add(gr2); //B
  //mg->Add(gr3);
  //mg->Add(gr4); //AB
  //mg->Add(gr5);
  mg->Add(gr6); //L
  //mg->Add(gr7);
  //mg->Draw("AL C C");
  mg->Draw("ACP");
}

inline void PlotSbmlModules(const char* filename) {
  // setup plot
  TCanvas c;
  c.SetGrid();

  TMultiGraph* mg = new TMultiGraph();
  mg->SetTitle("Standard;Timestep;Concentration");

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
  opts.AddOption<uint64_t>("n, num-cells", "1", "The total number of cells");
  uint64_t num_cells = opts.Get<uint64_t>("num-cells");

  // roadrunner options
  rr::SimulateOptions opt;
  opt.start = 0;
  opt.duration = 100;
  opt.steps = 200;

  auto set_param = [&](Param* param) {
    param->simulation_time_step_ = opt.duration / opt.steps;
  };

  Simulation simulation(&opts, set_param);

  std::string sbml_file = "../src/sbml-model.xml";
  if (!FileExists(sbml_file)) {
    sbml_file = "src/sbml-model.xml";
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

#endif  // SBML_INTEGRATION_H_
