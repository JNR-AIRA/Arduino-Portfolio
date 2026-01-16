int potPin = A0;
int potValue = 0;
int led = 9;
int ledValue= 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  ledValue = map(potValue,0, 1023, 0,255);
  analogWrite(led,ledValue);
  Serial.print("LEDVALUE:");
  Serial.println(ledValue);
  delay (400);
}
