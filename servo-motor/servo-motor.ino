//red to 5v
//brown to gnd
//orange to digital
#include<Servo.h>
Servo motor;
void setup() {
  // put your setup code here, to run once:
motor.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
  motor.write(180);

}
