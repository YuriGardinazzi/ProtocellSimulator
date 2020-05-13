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
#ifndef PERSONALIZED_DIFFUSION_H_
#define PERSONALIZED_DIFFUSION_H_

#include "biodynamo.h"
#include "personalized_models.h"

namespace bdm {



inline int Simulate(int argc, const char** argv) {
  
  //Initialize Biodynamo
  Simulation simulation(argc, argv);

  // Define initial model - in this example: single cell at origin
  auto* rm = simulation.GetResourceManager();


  auto construct = [](const Double3& position) {
    Cell* cell = new Cell(position);
    cell->SetDiameter(30);
    cell->SetMass(1.0);
    //cell->AddBiologyModule(new Chemotaxis());
    Double3 secretion_position = {{50, 50, 50}};
    if (position == secretion_position) {
      cell->AddBiologyModule(new ASecretion());
    }
    return cell;
  };

  std::vector<Double3> positions;
  positions.push_back({0, 0, 0});
  positions.push_back({100, 0, 0});
  positions.push_back({0, 100, 0});

  // The cell responsible for secretion
  positions.push_back({50, 50, 50});

  ModelInitializer::CreateCells(positions, construct);
  // Define the substances that cells may secrete
  ModelInitializer::DefineSubstance(Aspecie, "A", 0.4, 0, 25);



  // Run simulation 
  simulation.GetScheduler()->Simulate(1000);

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // PERSONALIZED_DIFFUSION_H_
