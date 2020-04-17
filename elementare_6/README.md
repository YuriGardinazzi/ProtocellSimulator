# Elementare 6 

* no random initialization of concentrations
* no random change of values after division

![graph](elementare_6.svg)


* random change on initialization default values (step 1 instead of 0) _is it correct?_
* random change of values after division

__random change__ is between [-10%; +10%]
![random change](random_change.svg)
### TO FIX
__UpdateSpecies()__ not implemented, still raises errors during runtime
```c++
  void UpdateSpecies(){
    float A = rr_ -> getValue("A_0");
    float B = rr_ -> getValue("B_0");
    float C = rr_ -> getValue("C");
    float p = rr_ -> getValue("p");
    float v = rr_ -> getValue("compartment");
    rr_ -> setValue("A_0",static_cast<int>(-v*1e-19*A*B+v*1e+17));
    rr_ -> setValue("B_0",static_cast<int>(-v*1e-19*A*B+v*1e+17));
    rr_ -> setValue("C",static_cast<int>(+v*1e-19*A*B));
    rr_ -> setValue("L",static_cast<int>(+v*1e-17*p*C));
  }
```