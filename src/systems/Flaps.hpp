#pragma once

#include "pros/adi.hpp"
#include "../Constants.hpp"

using namespace pros;
using namespace Constants;

class Flaps {
    private:
        ADIDigitalOut fpL = ADIDigitalOut(flapsL_p, false);
        ADIDigitalOut fpR = ADIDigitalOut(flapsR_p, false);

        bool stateL = false;
        bool stateR = false;
    public:
        Flaps(){}
        void toggleL(){stateL=!stateL; fpL.set_value(stateL);}
        void toggleR(){stateR=!stateR; fpR.set_value(stateR);}
};