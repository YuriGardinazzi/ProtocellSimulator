#ifndef PERSONALIZED_MODULES_H_
#define PERSONALIZED_MODULES_H_
#include "biodynamo.h"

namespace bdm{

    // Create list of substances
    enum Substances { kSubstance };

    struct PersonalizedCube {
        int value_;
        int dim_;
        double x0_;
        double y0_;
        double z0_;
        PersonalizedCube(int value, double x0, double y0, double z0) {
            dim_ = 50;
            value_ = value;
            x0_ = x0;
            y0_ = y0;
            z0_ = z0;
        }

        double operator()(double x, double y, double z) {
            //cube creation
            if( x >= -dim_ + x0_ and x <= dim_ + x0_ and 
                y >= -dim_ + y0_ and y <= dim_ + y0_ and
                z >= -dim_ + z0_ and z <= dim_ + z0_){
                return value_;
                }
            return 0;
        }
    }; //end personalized Cube

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