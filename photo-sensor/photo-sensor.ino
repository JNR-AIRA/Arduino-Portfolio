int ldr = A0;
int DO = 8;
void setup() {
  // put your setup code here, to run once:
      pinMode(DO,INPUT);
      Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
     int  analogValue = analogRead(ldr);
     int  digitalValue = digitalRead(DO);
     Serial.print("Analog Value: ");
     Serial.println (analogValue);
      delay(150);

     Serial.print("Digital Value: ");
     Serial.println (digitalValue);
     delay(150);
}
