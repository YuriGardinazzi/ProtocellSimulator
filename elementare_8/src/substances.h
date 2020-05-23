#ifndef SUBSTANCES_H_
#define SUBSTANCES_H_

namespace bdm{
    enum Substances { Aspecie, Bspecie };


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

}
#endif