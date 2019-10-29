#ifndef MY_GROWTH_H_
#define MY_GROWTH_H_

#include "biodynamo.h"

namespace bdm{
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
					auto* random = Simulation::GetActive()->GetRandom(); 
					// Here 400 is the speed and the change to the volume is based on the
					// simulation time step.
					// The default here is 0.01 for timestep, not 1.
					cell->ChangeVolume(400);   
						
						
					// create an array of 3 random numbers between -2 and 2
					Double3 cell_movements = random->template UniformArray<3>(-2, 2);
					// update the cell mass location, ie move the cell
					cell->UpdatePosition(cell_movements);
								
					}else {
					/*	//FIXME: 
					 	//at the moment the core dumps while running the simulation with
						//this snippet of code
						//TODO: find a more effective way to delete cells randomly
						auto* rm = Simulation::GetActive()-> GetResourceManager();
						int rand = std::rand() % 100;
						
						if (rand <80){
							
							rm->Remove(so->GetUid());
						}else{
							cell->Divide();
						}*/
						cell ->Divide();
					}
            }
        }

    };
}

#endif //MY_GROWTH_H_
