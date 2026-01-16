int echo = 11;
int trig = 12;
long duration;
int distance;
int led = 8;
int distance_threshold = 50;
void setup() {
  // put your setup code here, to run once:
//VCC TO 5V
//TRIG TO PIN NUMBER
//ECHO TO PIN NUMBER

pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delay(200);

  digitalWrite(trig,HIGH);
  delay(100);
  
  digitalWrite(trig,LOW);

  duration = pulseIn  (echo,HIGH);
  distance = duration*0.034/2;

  if(distance >= distance_threshold ){
    digitalWrite(trig,HIGH);
  }
  else{
    digitalWrite(trig,LOW);
  }

 Serial.print(distance);
 Serial.println("cm");
 if(distance >= distance_threshold ){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
 
 delay(150);
   

}
