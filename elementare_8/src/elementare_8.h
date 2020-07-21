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
#include "cell.h"
#include "substances.h"
#include "biology_modules.h"

#include "core/util/io.h"
#include "core/util/timing.h"
#include "core/exporter.h"


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


inline int Simulate(int argc, const char** argv) {
   auto opts = CommandLineOptions(argc, argv);
   opts.AddOption<uint64_t>("n, num-cells", "10", "The total number of cells");
   uint64_t num_cells = opts.Get<uint64_t>("num-cells");

  std::ofstream outfile;
  outfile.open("volume.csv"); // append instead of overwrite
  outfile <<"id"<<";"  << "step" << ";" << "volume" << ";" <<
              "A_0"<<";" <<
              "B_0"  <<";" <<
               "C"    <<";" <<
               "L"    <<";" <<
               "p"    <<";" <<
              "Aext"  <<";" << 
               "Bext"  <<";" <<
             "Compl"  <<";" <<
              "A_uscita"  << ";" << 
              "A_ingresso"  <<";" <<
               "B_uscita" << ";" <<
               "B_ingresso" <<    std::endl;
  outfile.close();
  // roadrunner options
  rr::SimulateOptions opt;
  opt.start = 0;
  opt.duration = 100;
  opt.steps = 300;
  auto set_param = [&](Param* param) {
    param->simulation_time_step_ = opt.duration / opt.steps;
    param->bound_space_ = true;
    param->min_bound_ = -500;
    param->max_bound_ = 500;
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

  std::vector<Double3> positions;
  positions.push_back({100, 100, 100});
  positions.push_back({200,200,200});
  positions.push_back({110,110,110});
  positions.push_back({0,0,0});

  ModelInitializer::CreateCells(positions, construct);
  //Chiedere cosa intende per risoluzione (terzo parametro)
 //la risoluzione si basa sulla dimensione del Cubo della dimensione
 //Boxlength (lunghezza dei singoli cubi) = Lunghezza Cubo simulazione / resolution

  ModelInitializer::DefineSubstance(Bspecie, "Bspecie",0.0005, 0, 250);
  ModelInitializer::DefineSubstance(Aspecie, "Aspecie",0.0005, 0, 250);
  

  ModelInitializer::InitializeSubstance(Bspecie, "Bspecie",PersonalizedCube(180,50,50,50));
  ModelInitializer::InitializeSubstance(Aspecie, "Aspecie",PersonalizedCube(180,50,50,50));
  
  // Run simulation
  auto start = Timing::Timestamp();
  simulation.GetScheduler()->Simulate(opt.steps);
  auto stop = Timing::Timestamp();
  std::cout << "RUNTIME " << (stop - start) << std::endl;
  
 /*Export to file */

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // ELEMENTARE_8_H_
