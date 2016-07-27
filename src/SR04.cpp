#include "Arduino.h"
#include "SR04.h"
 
SR04::SR04(int TP, int EP)
{
   pinMode(TP,OUTPUT);
   pinMode(EP,INPUT);
   Trig_pin=TP;
   Echo_pin=EP;
}
 
float SR04::GetDistance()
{
	digitalWrite(Trig_pin, LOW); 
	delayMicroseconds(2); 
	digitalWrite(Trig_pin, HIGH); 
	delayMicroseconds(10);
	digitalWrite(Trig_pin, LOW); 
	float distance = pulseIn(Echo_pin, HIGH) / 58.00;
	return distance;
}