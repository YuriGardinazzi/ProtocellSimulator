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
  



  auto set_param = [](Param* param){
    param->bound_space_ = true;
    param->min_bound_ = 0;
    param->max_bound_ = 100;  //cube of 100*100*100
  };

  Simulation simulation(argc, argv, set_param);

  auto* rm = simulation.GetResourceManager(); //it stores the simulation objects
  auto* random = simulation.GetRandom(); //random number 
  auto* param = simulation.GetParam(); //simulation parameters

  size_t nb_of_cells = 1000; //number of cells in the simulation
  double x_coord, y_coord, z_coord;

  for(size_t i = 0; i <= nb_of_cells; i++){
  // our modelling will be a cell cube of 100*100*100
  // random double between 0 and 100
    x_coord = random->Uniform(param->min_bound_, param->max_bound_);
    y_coord = random->Uniform(param->min_bound_, param->max_bound_);
    z_coord = random->Uniform(param->min_bound_, param->max_bound_);

    //Creates the cell at posizion x,y,z
    Cell* cell = new Cell({x_coord,y_coord,z_coord});
    //Set cells parameters
    cell->SetDiameter(7.5);

    rm->push_back(cell); //put the create cell in the cell structure
  }

  //Simulate the model for 200 steps
  simulation.GetScheduler()->Simulate(200);


/*  
   auto construct = [](const Double3& position) {
    Cell* cell = new Cell(position);
    cell->SetDiameter(10);
    cell->SetMass(1.0);
    // primo parametro = threshold secondo= growthrate
    cell->AddBiologyModule(new GrowDivide(30, 20000, {gAllEventIds}));
    
    return cell;
   };
  
  std::vector<Double3> positions;
  positions.push_back({0, 0, 0});
  positions.push_back({0, 100, 0});
  
  ModelInitializer::CreateCells(positions, construct);
  // Run simulation for 30 timestep
  simulation.GetScheduler()->Simulate(250);
*/
  
  

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // HELLO_WORLD_H_
