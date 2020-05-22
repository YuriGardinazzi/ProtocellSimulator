#ifndef CELL_H_
#define CELL_H_

#include "biodynamo.h"
namespace bdm{


    // Define my custom cell, which extends Cell by adding an extra
// data member compartment_, L_.
class MyCell : public Cell {
  BDM_SIM_OBJECT_HEADER(MyCell, Cell, 1, compartment_, L_,A_0_ ,B_0_, p_ ,C_ ,Compl_, isBornAfterDivision_,
                         A_EXT_, B_EXT_);

 public:
  MyCell() {}
  explicit MyCell(const Double3& position) : Base(position) {}

  /// Default event constructor
  MyCell(const Event& event, SimObject* other, uint64_t new_oid = 0)
      : Base(event, other, new_oid) {

        //TODO: inherit substances from mother and update RR
        if (auto* mother = dynamic_cast<MyCell*>(other)) {
          if(mother -> GetIsBornAfterDivision()){
            // std::cout << "I'm a new CELL :D " << std::endl;
            SetL(mother -> GetL());
            SetA(mother -> GetA());
            SetB(mother -> GetB());
            SetC(mother -> GetC());
            SetP(mother -> GetP());
            SetAExt(mother -> GetAExt());
            SetBExt(mother -> GetBExt());
            //SetCompartment(mother -> GetCompartment());
          }
        }
      }

  void SetCompartment(double volume) { compartment_ = volume; }
  double GetCompartment() const { return compartment_; }
  
  void SetL(int l) { L_ = l; }
  int GetL(){ return L_; }

  void SetA(int a) { A_0_ = a; }
  int GetA() const { return A_0_; }

  void SetB(int b) { B_0_ = b; }
  int GetB() const { return B_0_; }

  void SetC(int c) { C_ = c; }
  int GetC() const { return C_; }

  void SetP(double p) { p_ = p; }
  double GetP() const { return p_; }

  void SetCompl(int co) { Compl_ = co; }
  int GetCompl() const { return Compl_; }
  
  void SetIsBornAfterDivision(bool flag){ isBornAfterDivision_ = flag;}
  bool GetIsBornAfterDivision(){ return isBornAfterDivision_ ;}

  void SetAExt(int aext) { A_EXT_ = aext; }
  int GetAExt() const { return A_EXT_; }
  
  void SetBExt(int bext) { B_EXT_ = bext; }
  int GetBExt() const { return B_EXT_; }
  
  void PrintValues(){
    std::cout <<"L:  "<<GetL() <<"\n" 
              <<"A: "<<GetA() <<"\n"
              <<"B: "<<GetB() <<"\n"
              <<"C: "<<GetC() <<"\n"
              <<"p: "<<GetP() <<"\n" 
              <<"Compl: "<<GetCompl() <<"\n" 
              <<"is born after division: "<<GetIsBornAfterDivision()<<std::endl;


  }
 private:
  double compartment_ = 0;
  int L_ = 0;
  int A_0_ = 0;
  int B_0_ = 0;
  int C_ = 0;
  int Compl_ = 0;
  double p_ = 0;

  int A_EXT_ = 0;
  int B_EXT_ = 0;
  bool isBornAfterDivision_ = false;
};

}
#endif