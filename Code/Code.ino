#include <Servo.h> 

Servo SR;
Servo SL;
  
int PR = 1;
int PL = 0;
int potmeter;

void setup()
{
  SR.attach(9);
  SL.attach(10);
}

void loop()
{
  potmeter = analogRead(PR);
  potmeter = map(potmeter, 0, 1023, 0, 180);
  SR.write(potmeter);
  potmeter = analogRead(PL);
  potmeter = map(potmeter, 0, 1023, 0, 180);
  SL.write(potmeter);
  delay(20);
}
