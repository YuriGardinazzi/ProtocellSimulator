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
#include "core/substance_initializers.h"

namespace bdm {

// -----------------------------------------------------------------------------
// In this integration test we should how to make use of the 'substance
// initializers', in order to initialize the concentration of a particular
// substance. We create a gaussian distribution along each axis.
// -----------------------------------------------------------------------------

// Create list of substances
enum Substances { kSubstance };

struct PersonalizedCube {
  int value_;
  int dim_;
  PersonalizedCube(int value) {
    dim_ = 50;
    value_ = value;
  }

  double operator()(double x, double y, double z) {
    //cube creation
    if( x >= -dim_ and x <= dim_ and 
        y >= -dim_ and y <= dim_ and
        z >= -dim_ and z <= dim_){
          return value_;
        }
    return 0;
  }
};

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
    cell->SetDiameter(10);
    return cell;
  };

  std::vector<Double3> positions;
  positions.push_back({50, 50, 50});
  ModelInitializer::CreateCells(positions, construct);
  // Define the substances in our simulation
  // Order: substance id, substance_name, diffusion_coefficient, decay_constant,
  // resolution
  ModelInitializer::DefineSubstance(kSubstance, "Substance",0.5, 0.5, 15);

  // Order: substance id, substance name, initialization model, along which axis
  // (0 = x, 1 = y, 2 = z). See the documentation of `GaussianBand` for
  // information about its arguments
  ModelInitializer::InitializeSubstance(kSubstance, "Substance",PersonalizedCube(50));
  // ModelInitializer::InitializeSubstance(kSubstance, "Substance",
  //                                       Uniform(0,10,1,Axis::kXAxis));
  // ModelInitializer::InitializeSubstance(kSubstance, "Substance",
  //                                       Uniform(0,10,5,Axis::kYAxis));
  // ModelInitializer::InitializeSubstance(kSubstance, "Substance",
  //                                       Uniform(0,10,5,Axis::kZAxis));                                      


  // Run simulation for N timesteps
  simulation.GetScheduler()->Simulate(20);

  std::cout << "Simulation completed successfully!\n";
  return 0;
}

}  // namespace bdm

#endif  // SUBSTANCE_INITIALIZATION_H_
