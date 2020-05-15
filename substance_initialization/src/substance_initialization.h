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
#ifndef SUBSTANCE_INITIALIZATION_H_
#define SUBSTANCE_INITIALIZATION_H_

#include <vector>

#include "biodynamo.h"
#include "personalized_modules.h"
#include "core/substance_initializers.h"

namespace bdm {


inline int Simulate(int argc, const char** argv) {

  auto set_param = [](Param* param) {
    // Create an artificial bounds for the simulation space
    param->bound_space_ = true;
    param->min_bound_ = -100;
    param->max_bound_ = 100;
  };


  Simulation simulation(argc, argv, set_param);


  // Define initial model
  // Create one cell at a random position
  auto construct = [](const Double3& position) {
    Cell* cell = new Cell(position);
    cell -> AddBiologyModule(new MyBehaviour());
    cell->SetDiameter(10);
    
    return cell;
  };

  std::vector<Double3> positions;
  positions.push_back({50, 50, 50});
  positions.push_back({50,0,0});
  ModelInitializer::CreateCells(positions, construct);
  // Define the substances in our simulation
  // Order: substance id, substance_name, diffusion_coefficient, decay_constant,
  // resolution
  ModelInitializer::DefineSubstance(kSubstance, "Substance",0.5, 0, 15);


  ModelInitializer::InitializeSubstance(kSubstance, "Substance",PersonalizedCube(50));
                                     


  // Run simulation for N timesteps
  simulation.GetScheduler()->Simulate(500);

  std::cout << "Simulation completed successfully!\n";
  return 0;
}

}  // namespace bdm

#endif  // SUBSTANCE_INITIALIZATION_H_
