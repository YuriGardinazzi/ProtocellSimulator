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
#ifndef HELLO_WORLD_H_
#define HELLO_WORLD_H_

#include "biodynamo.h"

namespace bdm {

inline int Simulate(int argc, const char** argv) {
  Simulation simulation(argc, argv);

   auto construct = [](const Double3& position) {
    Cell* cell = new Cell(position);
    cell->SetDiameter(10);
    cell->SetMass(1.0);
    // primo parametro = threshold secondo= growthrate
    cell->AddBiologyModule(new GrowDivide(30, 20000, {gAllEventIds}));
    
    return cell;
   };


  //vector of cells positions 
  std::vector<Double3> positions;
  positions.push_back({0, 0, 0});
  positions.push_back({0, 100, 0});


  ModelInitializer::CreateCells(positions, construct);



  // Run simulation for 30 timestep
  simulation.GetScheduler()->Simulate(250);

  
  

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // HELLO_WORLD_H_
