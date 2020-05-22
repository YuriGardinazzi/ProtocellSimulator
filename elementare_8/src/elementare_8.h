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
#include "biology_modules.h"
#include "output_modules.h"

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

  

  struct PersonalizedCube {
    int value_;
    int dim_;
    double x0_;
    double y0_;
    double z0_;
    PersonalizedCube(int value, double x0, double y0, double z0) {
        dim_ = 50;
        value_ = value;
        x0_ = x0;
        y0_ = y0;
        z0_ = z0;
    }

    double operator()(double x, double y, double z) {
        //cube creation
        if( x >= -dim_ + x0_ and x <= dim_ + x0_ and 
            y >= -dim_ + y0_ and y <= dim_ + y0_ and
            z >= -dim_ + z0_ and z <= dim_ + z0_){
            return value_;
            }
        return 0;
    }
  }; //end personalized Cube

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
  opt.steps = 200;

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
  // positions.push_back({120,120,120});
  // positions.push_back({120,120,120});
  // positions.push_back({120,120,120});


  ModelInitializer::CreateCells(positions, construct);
  ModelInitializer::DefineSubstance(Aspecie, "Aspecie",0.5, 0, 15);
  ModelInitializer::DefineSubstance(Bspecie, "Bspecie",0.5, 0, 15);

  ModelInitializer::InitializeSubstance(Aspecie, "Aspecie",PersonalizedCube(200,50,50,50));
  ModelInitializer::InitializeSubstance(Bspecie, "Bspecie",PersonalizedCube(200,60,50,50));
  // Run simulation
  auto start = Timing::Timestamp();
  simulation.GetScheduler()->Simulate(opt.steps);
  auto stop = Timing::Timestamp();
  std::cout << "RUNTIME " << (stop - start) << std::endl;

  PlotSbmlModules("sbml-modules.svg");
 /*Export to file */

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // ELEMENTARE_8_H_
