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

namespace bdm {
// 0. Define my custom cell MyCell, which extends Cell by adding extra data
// members: cell_color and can_divide
class MyCell : public Cell {  // our object extends the Cell object
                              // create the header with our new data member
  BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, can_divide_, cell_color_);

  public:
   MyCell() {}
  explicit MyCell(const Double3& position) : Base(position) {}

    /// If MyCell divides, daughter 2 copies the data members from the mother
    MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
        : Base(event, other, new_oid) {
      if (auto* mother = dynamic_cast<MyCell*>(other)) {
          cell_color_ = mother->cell_color_;
      }
    }

    /// If a cell divides, daughter keeps the same state from its mother.
    void EventHandler(const Event& event, SimObject* other1,
                      SimObject* other2 = nullptr) override {
      Base::EventHandler(event, other1, other2);
    }

    void SetCanDivide(bool d) { can_divide_ = d; }
    bool GetCanDivide() { return can_divide_; }

    void SetCellColor(int cell_color) { cell_color_ = cell_color; }
    int GetCellColor() const { return cell_color_; }

 private:
  // declare new data member and define their type
  // private data can only be accessed by public function and not directly
  bool can_divide_;
  int cell_color_;
};



//Definition of the growth module
struct GrowthModule : public BaseBiologyModule {
  BDM_STATELESS_BM_HEADER(GrowthModule, BaseBiologyModule, 1);

 public:
  GrowthModule() : BaseBiologyModule(gAllEventIds) {}

  /// Empty default event constructor, because GrowthModule does not have state.
  template <typename TEvent, typename TBm>
  GrowthModule(const TEvent& event, TBm* other, uint64_t new_oid = 0)
      : BaseBiologyModule(event, other, new_oid) {}

  void Run(SimObject* so) override {
    if (auto* cell = dynamic_cast<MyCell*>(so)) {
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
    cell->SetCellColor(250);
    rm->push_back(cell); //put the create cell in the cell structure
  }

  //Simulate the model for 200 steps
  simulation.GetScheduler()->Simulate(200);
  
  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // PROTO_TEST_H_
