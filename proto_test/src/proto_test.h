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
#ifndef PROTO_TEST_H_
#define PROTO_TEST_H_

#include "biodynamo.h"
#include "protocell.h"
#include "my_growth.h"

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

  size_t nb_of_cells = 50; //number of cells in the simulation
  double x_coord, y_coord, z_coord;

  for(size_t i = 0; i <= nb_of_cells; i++){
  // our modelling will be a cell cube of 100*100*100
  // random double between 0 and 100
    x_coord = random->Uniform(param->min_bound_, param->max_bound_);
    y_coord = random->Uniform(param->min_bound_, param->max_bound_);
    z_coord = random->Uniform(param->min_bound_, param->max_bound_);

    //Creates the cell at posizion x,y,z
    MyCell* cell = new MyCell({x_coord,y_coord,z_coord});
    //Set cells parameters
    cell->AddBiologyModule(new GrowthModule());
    cell->SetDiameter(7.5);
    cell->SetCellColor(1000);
    rm->push_back(cell); //put the create cell in the cell structure
  }

  //Simulate the model for 200 steps
  simulation.GetScheduler()->Simulate(200);
  
  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // PROTO_TEST_H_
