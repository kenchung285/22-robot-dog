#ifndef _TRACE_H_
#define _TRACE_H_

#include "Radar.h"
#include "Leg.h"

// P control parameter*
// L and LL must < 0, R and RR must > 0
#define LL        -0.7
#define L         -0.50
#define C         0
#define R         0.5
#define RR        0.7

// kp for moving forward and backward
#define KP_FORWARD  0.5
#define KP_BACKWARD 2

// MIN VELOCITY for the wheel to rotate successfully 
// which depends on the weight of load and the friction between the dog and the floor
// has absolute value lower than 1.0
#define MIN_VEL 0.35

class Trace {
    public:
        Trace();
        ~Trace();

        // make radar to rotation for one period and ultra-sonic to detect
        // compute the left/right wheel velocity and write them to the servos of leg
        void Move();

        // set up
        void init();
    private:
        Leg leg;
        Radar radar;
};

#endif
