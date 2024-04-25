#pragma once

#include "../Constants.hpp"
#include "pros/adi.hpp"
#include "pros/motors.hpp"

using namespace Constants;
using namespace pros;

class Catapult {
    private:
        Motor cata = Motor(cata_p);
        ADIDigitalIn button = ADIDigitalIn(btn_p);
    public:
        Catapult(){}
        void cataMove(signed char voltage, bool restricted) {
            if (voltage > 0 && restricted && button.get_value()) {
                cata.move(0);
            return;}
            cata.move(voltage);
        }
        void move(signed char voltage) {
            cata.move(voltage);
        }
};