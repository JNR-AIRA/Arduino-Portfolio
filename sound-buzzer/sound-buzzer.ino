void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 tone(6,1000);
 delay(500);
 noTone(6);

 tone(6,600);
 delay(500);
 noTone(6);


}
