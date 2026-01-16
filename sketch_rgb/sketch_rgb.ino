int red = 3;
int green = 5;
int blue = 6; 
// int buzzer = 9;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  // pinMode(buzzer, OUTPUT);
}

void loop() {
  rgbColors(255, 255, 255); // WHITE
  delay(100);

  rgbColors(255, 0, 0);     // RED
  delay(500);

  rgbColors(0, 255, 255);   // CYAN (BLUE + GREEN)
  delay(500);

  rgbColors(255, 0, 100);   // PINK
  delay(500);

  rgbColors(255, 255, 0);   // YELLOW
  delay(500);

  rgbColors(0, 0, 255);     // BLUE
  delay(500);

  rgbColors(150, 0, 150);   // PURPLE
  delay(500);

}

void rgbColors(int redValue, int greenValue, int blueValue ){
  analogWrite(red,redValue);
  analogWrite(green,greenValue);
  analogWrite(blue,blueValue);
  }
