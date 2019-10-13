#ifndef PROTO_CLASS_H_
#define PROTO_CLASS_H_

#include "biodynamo.h"


/*
Definition of a custom cell that aims to emulate a protocell
*/
namespace bdm{

    // members: cell_color and can_divide
    class MyCell : public Cell {  // MyCell extends the Cell object
                                  // create the header with our new data member
    BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, can_divide_, cell_color_);

    public:
    MyCell() {}
    explicit MyCell(const Double3& position) : Base(position) {}

        /// If MyCell divides, daughter 2 copies the data members from the mother
        MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
            : Base(event, other, new_oid) {

            //inheritance of the color from mother cell to daughter    
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

        bool can_divide_;
        int cell_color_;
    };
} // namespace bdm

#endif //PROTO_CLASS_H_