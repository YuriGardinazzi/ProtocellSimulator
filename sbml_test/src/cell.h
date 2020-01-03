
#ifndef CELL_H_
#define CELL_H_


#include "biodynamo.h"

//#include "sbml_integration.h"
//#include "graphic_visualization.h"

#include "rrException.h"
#include "rrExecutableModel.h"
#include "rrLogger.h"
#include "rrLogger.h"
#include "rrRoadRunner.h"
#include "rrUtils.h"
namespace bdm{
    // Define my custom cell, which extends Cell by adding an extra
    // data member s1_.
    class MyCell : public Cell {
    BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, s1_);

    public:
    MyCell() {}
    explicit MyCell(const Double3& position) : Base(position) {}

    /// Default event constructor
    MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
        : Base(event, other, new_oid) {}

    void SetS1(double s1) { s1_ = s1; }
    int GetS1() const { return s1_; }

    private:
    double s1_ = 100;
    };

    // Define SbmlModule to simulate intracellular chemical reaction network.
    struct SbmlModule : public BaseBiologyModule {
    SbmlModule(const std::string& sbml_file, const rr::SimulateOptions& opt)
        : BaseBiologyModule(gNullEventId, gNullEventId) {
        rr_ = new rr::RoadRunner(sbml_file);
        rr_->getSimulateOptions() = opt;
        // setup integrator
        rr_->setIntegrator("gillespie");
        dt_ = opt.duration / opt.steps;
        auto* integrator = rr_->getIntegrator();
        integrator->setValue("variable_step_size", false);
        integrator->setValue("initial_time_step", dt_);
        integrator->setValue("maximum_time_step", dt_);

        result_.resize(opt.steps, 4);
    }

    virtual ~SbmlModule() { delete rr_; }

    SbmlModule(const Event& event, BaseBiologyModule* other, uint64_t new_oid = 0)
        : BaseBiologyModule(event, other, new_oid) {}

    /// Create a new instance of this object using the default constructor.
    BaseBiologyModule* GetInstance(const Event& event, BaseBiologyModule* other,
                                    uint64_t new_oid = 0) const override {
        return new SbmlModule(event, other, new_oid);
    }

    /// Create a copy of this biology module.
    BaseBiologyModule* GetCopy() const override { return new SbmlModule(*this); }

    /// Default event handler (exising biology module won't be modified on
    /// any event)
    void EventHandler(const Event& event, BaseBiologyModule* other1,
                        BaseBiologyModule* other2 = nullptr) override {
        BaseBiologyModule::EventHandler(event, other1, other2);
    }

    void Run(SimObject* so) override {
        if (auto* cell = static_cast<MyCell*>(so)) {
        auto i = Simulation::GetActive()->GetScheduler()->GetSimulatedSteps();
        rr_->getIntegrator()->integrate(i * dt_, dt_);
        // FIXME model time not the same as
        const auto& partial_result = rr_->getFloatingSpeciesAmountsNamedArray();
        cell->SetS1(partial_result(0, 0));
        result_(i, 0) = i * dt_;
        for (unsigned j = 0; j < partial_result.numCols(); j++) {
            result_(i, j + 1) = partial_result(0, j);
        }

        if (cell->GetS1() < 30 && active_) {
            cell->Divide();
            active_ = false;
        }
        }
    }

    const ls::DoubleMatrix& GetResult() const { return result_; }

    private:
    ls::DoubleMatrix result_;
    bool active_ = true;
    rr::RoadRunner* rr_;
    double dt_;
    BDM_CLASS_DEF_OVERRIDE(SbmlModule, 1);
    };

}


#endif