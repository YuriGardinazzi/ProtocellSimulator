

#ifndef PERSONALIZED_MODELS_H_
#define PERSONALIZED_MODELS_H_

#include "biodynamo.h"

namespace bdm{

enum Substances{ Aspecie };

//Definition of the secretion behaviour

struct ASecretion : public BaseBiologyModule{
  
  BDM_STATELESS_BM_HEADER(ASecretion, BaseBiologyModule, 1);

  ASecretion() : BaseBiologyModule() {}

  void Run(SimObject* so) override {
      auto* sim = Simulation::GetActive();
      auto* rm = sim->GetResourceManager();
      static auto* aDg = rm->GetDiffusionGrid(Aspecie);
      double amount = 4;
      aDg->IncreaseConcentrationBy(so->GetPosition(), amount);
  }

};

}

#endif //PERSONALIZED_MODELS_H_