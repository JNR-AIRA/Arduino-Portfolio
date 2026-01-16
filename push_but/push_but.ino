int PushButton = 7;
int buttonState = 0;
int led = 8;
void setup() {
  // put your setup code here, to run once:
pinMode(PushButton, INPUT_PULLUP);
pinMode (led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(PushButton);
Serial.println(buttonState);
if (buttonState == LOW){
 digitalWrite(led,HIGH);
  }
  else
     digitalWrite(led,LOW);
delay(500);
}
