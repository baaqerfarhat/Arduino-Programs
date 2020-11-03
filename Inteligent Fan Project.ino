#include <LiquidCrystal.h>
#include <Servo.h> 

Servo MyServo;
int ThermistorPin = 0;
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
int BluePin = 8;
int GreenPin = 7;
int RedPin = 6;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
Serial.begin(9600);
MyServo.attach(9);
MyServo.write(180);
pinMode(RedPin, OUTPUT);
pinMode(GreenPin, OUTPUT);
pinMode(BluePin, OUTPUT);
}

void loop() {

  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15;
  T = (T * 9.0)/ 5.0 + 32.0; 

  lcd.print("Temp = ");
  lcd.print(T);   
  lcd.print(" F");
  
  delay(500);            
  lcd.clear();
  
  if (T < 80) {
  Serial.println("less than 80");
  digitalWrite(GreenPin, HIGH);
  delay(500);
  digitalWrite(GreenPin, LOW);
  
  } else {
  printf("%n");
  Serial.println("More than 80");
  digitalWrite(RedPin, HIGH);
  delay(350);
  digitalWrite(RedPin, LOW);
  MyServo.write(180);
  delay(150);
  MyServo.write(-180);
  delay(150);
  MyServo.write(180);
  delay(100);
  }
} 
  
