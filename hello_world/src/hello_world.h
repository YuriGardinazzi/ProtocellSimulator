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
struct GrowthModule : public BaseBiologyModule {
  BDM_STATELESS_BM_HEADER(GrowthModule, BaseBiologyModule, 1);

 public:
  GrowthModule() : BaseBiologyModule(gAllEventIds) {}

  /// Empty default event constructor, because GrowthModule does not have state.
  template <typename TEvent, typename TBm>
  GrowthModule(const TEvent& event, TBm* other, uint64_t new_oid = 0)
      : BaseBiologyModule(event, other, new_oid) {}

  void Run(SimObject* so) override {
      // code to be executed at each simulation step
    if (auto* cell = dynamic_cast<Cell*>(so)) {
      if (cell->GetDiameter() < 8) {
        cell->ChangeVolume(400);
      }
      else {
        cell->Divide();
      }
    }
  }
};
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

  size_t nb_of_cells = 2400; //number of cells in the simulation
  double x_coord, y_coord, z_coord;

  Cell* cell = new Cell({20, 50, 50});
  cell->SetDiameter(6);
  cell->AddBiologyModule(new GrowthModule());
  rm->push_back(cell);

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
  
  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // HELLO_WORLD_H_
