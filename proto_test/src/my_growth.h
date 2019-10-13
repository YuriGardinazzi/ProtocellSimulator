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
                cell->ChangeVolume(400);
            }
            else {
                cell->Divide();
            }
            }
        }

    };
}

#endif //MY_GROWTH_H_