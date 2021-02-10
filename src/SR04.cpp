#include "Arduino.h"
#include "SR04.h"

SR04::SR04(int tp, int ep)
{
	trig_pin = tp;
	echo_pin = ep;
	pinMode(trig_pin, OUTPUT);
	pinMode(echo_pin, INPUT);
}

float SR04::getDistance()
{
	digitalWrite(trig_pin, LOW);
	delayMicroseconds(2);
	digitalWrite(trig_pin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trig_pin, LOW);
	float distance = pulseIn(echo_pin, HIGH) / 58.00;
	return distance;
}