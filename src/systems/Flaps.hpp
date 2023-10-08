#pragma once

#include "pros/adi.hpp"
#include "../Constants.hpp"

using namespace pros;
using namespace Constants;

class Flaps {
    private:
        ADIDigitalOut flaps = ADIDigitalOut(flaps_p, false);
        bool state = false;
    public:
        Flaps(){}
        void toggle(){state=!state; flaps.set_value(state);}
};