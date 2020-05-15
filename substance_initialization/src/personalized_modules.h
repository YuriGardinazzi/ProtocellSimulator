#ifndef PERSONALIZED_MODULES_H_
#define PERSONALIZED_MODULES_H_
#include "biodynamo.h"

namespace bdm{

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

    struct MyBehaviour : public BaseBiologyModule {
    
    BDM_STATELESS_BM_HEADER(MyBehaviour, BaseBiologyModule, 1);

    MyBehaviour() : BaseBiologyModule(gAllEventIds) {}

    void Run(SimObject* so) override {
        auto* sim = Simulation::GetActive();
        auto* rm = sim->GetResourceManager();
        static auto* kDg = rm->GetDiffusionGrid(kSubstance);

        if (auto* cell = dynamic_cast<Cell*>(so)) {
          const auto& position = so->GetPosition();
          Double3 gradient;
          kDg->GetGradient(position, &gradient);
        //   std::cout << "gradient: "<< gradient << std::endl;
          gradient *= 0.5;
          cell->UpdatePosition(gradient);
          size_t i = kDg -> GetBoxIndex(position);

          //negative value, means that the cells ate something
          kDg -> IncreaseConcentrationBy(i,-5); 
        }
    }
    };

} //end namespace bdm

#endif