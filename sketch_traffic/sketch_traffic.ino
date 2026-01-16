int red = 3;
int yellow = 4;
int green = 5;
int buzzer = 6;

void setup() {
  // put you'r setup code here, to run once:
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
pinMode(buzzer, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  // Example: cycle through the LEDs
 /* digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red, LOW);

  digitalWrite(yellow, HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  delay(1000);
  digitalWrite(green, LOW);
*/

 /*
 // RED
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(3000);

  // YELLOW (after RED)
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(1000);

  // GREEN
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(3000);

  // YELLOW (after GREEN)
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(1000);
  */
  // RED
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
 digitalWrite(buzzer, LOW);
  delay(3000);

  // YELLOW (after RED)
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(buzzer, LOW);
  delay(1000);

  // GREEN + BUZZER ON
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(buzzer, HIGH); // Buzzer activates with green
  delay(3000);
  for (int i = 0; i < 6; i++) {
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);
}

// YELLOW (after GREEN) + BUZZER OFF
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
 digitalWrite(buzzer, LOW); // Buzzer turns off
  delay(1000);
}
