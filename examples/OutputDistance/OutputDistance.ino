#include <SR04.h>

SR04 ultrasonic = SR04(2,3);
void setup()
{
  Serial.begin(9600); 
}
void loop()
{
  float distance=ultrasonic.GetDistance();
  Serial.print(distance);
  Serial.print("cm");
  Serial.println(); 
}