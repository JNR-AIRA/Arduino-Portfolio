#include <Servo.h>
Servo motor;

void setup() {
  motor.attach(7);  // Connect servo signal wire to pin 7
}

void loop() {
  // Sweep from 0° to 180°
  for (int pos = 0; pos <= 180; pos++) {
    motor.write(pos);
    delay(10);  // Controls sweep speed
  }

  delay(500);  // Pause at 180°

  // Sweep back from 180° to 0°
  for (int pos = 180; pos >= 0; pos--) {
    motor.write(pos);
    delay(10);
  }

  delay(500);  // Pause at 0°
}
