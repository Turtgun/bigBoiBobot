#pragma once

class PID {
    double kP;
    double kI;
    double kD;
    
    /*
        s = (2/T) * (z-1)/(z+1);
        y y[n] = x[n-1];

        p[n] = kP*e[n];
        i[n] = (kI*T)/2 * (e[n] + e[n-1]) + i[n-1];
        d[n] = ((2*kD) * (e[n] - e[n-1]) + (2*tau - T) * d[n-1]) / (2*tau+T);

        u[n] = p[n] + i[n] + d[n];

        Derivative filter! add 1/(s*tau + 1) to d[n]
    */
};