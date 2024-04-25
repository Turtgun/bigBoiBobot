#pragma once
#include "../Constants.hpp"
#include "pros/motors.hpp"

using namespace Constants;
using namespace pros;

class Elevation {
    private:
        Motor ele = Motor(ele_p);
    public:
        void move(signed char voltage) {
            ele.move(voltage);
        }
};