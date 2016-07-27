#ifndef SR04_H
#define SR04_H

#include "Arduino.h"

class SR04 {
public:
	SR04(int TrigPin,int EchoPin);
	float GetDistance();

private:
	int Trig_pin;
	int Echo_pin;
	float distance;
};
#endif