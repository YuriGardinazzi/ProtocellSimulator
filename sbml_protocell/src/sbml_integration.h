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

namespace bdm {

// Define my custom cell, which extends Cell by adding an extra
// data member a_.
class MyCell : public Cell {
  BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, a_);

 public:
  MyCell() {}
  explicit MyCell(const Double3& position) : Base(position) {}

  /// Default event constructor
  MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
      : Base(event, other, new_oid) {}

  void SetA(double s1) { a_ = s1; }
  int GetA() const { return a_; }

 private:
 //FIX ME: valore da 100 a 0,001
  double a_ = 0.001;
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
  // FIX ME: da 4 a 6 perché ci sono 6 specie
    result_.resize(opt.steps, 7);
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
      // FIXME model time not the same as
      const auto& partial_result = rr_->getFloatingSpeciesAmountsNamedArray();
      //std::cout <<"NU COLS: "<< partial_result.numCols()<<std::endl;
      cell->SetA(partial_result(0, 0));
      result_(i, 0) = i * dt_;
      for (unsigned j = 0; j < partial_result.numCols(); j++) {
        result_(i, j + 1) = partial_result(0, j);
        //std::cout <<"PARTIAL RESULT: "<< j<<" :" <<partial_result(0,j) << std::endl;
      }

      if (cell->GetA() < 30 && active_) {
        cell->Divide();
        active_ = false;
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
  //Structure
  // rows: species
  // cols timestep
  auto** twod = foo.get2DMatrix(rows, cols);

  TGraph* gr = new TGraph(cols, twod[0], twod[1]);
  //gr->SetFillStyle(0);
  gr->SetTitle("A");

  gr->SetLineColorAlpha(2, 0.1); //RED
  gr->SetLineStyle(9);
  gr->SetLineWidth(3);
  TGraph* gr1 = new TGraph(cols, twod[0], twod[2]);
  gr1->SetTitle("Astar");
  gr1->SetLineStyle(3);

  gr1->SetLineColorAlpha(3, 0.1);
  gr1->SetLineWidth(2);

  TGraph* gr2 = new TGraph(cols, twod[0], twod[3]);
  gr2->SetTitle("B");
  gr2->SetLineColorAlpha(4, 0.1); //BLUE
  gr2->SetLineStyle(10);
  gr2->SetLineWidth(3);

  TGraph* gr3 = new TGraph(cols, twod[0], twod[4]);
  gr3->SetTitle("Bstar");

  gr3->SetLineStyle(2);
  gr3->SetLineColorAlpha(9,0.1);
  gr3->SetLineWidth(2);

  TGraph* gr4 = new TGraph(cols, twod[0], twod[5]);
  gr4->SetTitle("AB");
  gr4->SetLineColorAlpha(8, 0.1); //GREEN
  gr4->SetLineWidth(3);

  mg->Add(gr);
  mg->Add(gr1);
  mg->Add(gr2);
  mg->Add(gr3);
  mg->Add(gr4);
  mg->Draw("AL C C");
}

inline void PlotSbmlModules(const char* filename) {
  // setup plot
  TCanvas c;
  c.SetGrid();

  TMultiGraph* mg = new TMultiGraph();
  mg->SetTitle("Gillespie;Timestep;Concentration");

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
  //c.BuildLegend(); // TODO position of legend
  c.SaveAs(filename);
}

inline int Simulate(int argc, const char** argv) {
  auto opts = CommandLineOptions(argc, argv);
  opts.AddOption<uint64_t>("n, num-cells", "10", "The total number of cells");
  uint64_t num_cells = opts.Get<uint64_t>("num-cells");

  // roadrunner options
  rr::SimulateOptions opt;
  opt.start = 0;
  opt.duration = 500;
  opt.steps = 500;

  auto set_param = [&](Param* param) {
    param->simulation_time_step_ = opt.duration / opt.steps;
  };

  Simulation simulation(&opts, set_param);

  std::string sbml_file = "../src/mv_RAF_ok.xml";

  if (!FileExists(sbml_file)) {
    sbml_file = "src/mv_RAF_ok.xml";
    if (!FileExists(sbml_file)) {
      Log::Error("Could not find mv_RAF_ok.xml file.");
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

  PlotSbmlModules("sbml-my_RAF_ok.svg");

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // SBML_INTEGRATION_H_
