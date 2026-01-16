int SensorAO =A0; // FOR 4 PINS
int SensorDO = 7;
int led = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode (SensorAO, INPUT);
  pinMode (SensorDO, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorData = digitalRead(SensorDO);
  int sensorValue = analogRead(SensorAO);


  Serial.println(sensorData);
  Serial.println(sensorValue);

  Serial.print("Digital: ");
  Serial.print(sensorData);
  Serial.print(" | Analog: ");
  Serial.println(sensorValue);

   
 if (sensorData == HIGH){
        digitalWrite(led,HIGH); //LED ON
        }else { digitalWrite(led,LOW);}

  delay(100);

   if (sensorValue <= 9){
        digitalWrite(led,HIGH); //LED ON
        }else { digitalWrite(led,LOW);}

  delay(200);

  
  

}
