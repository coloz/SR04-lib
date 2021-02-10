#ifndef SR04_H
#define SR04_H

#include "Arduino.h"

class SR04 {
public:
	SR04(int tp,int ep);
	float getDistance();

private:
	int trig_pin;
	int echo_pin;
	float distance;
};
#endif