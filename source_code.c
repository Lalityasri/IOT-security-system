#include <LiquidCrystal.h>
#include <Wire.h>

int z=0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void receiveEvent(int howMany)
 {
  int x = Wire.read(); 
  z=x;
 }

void setup() 
 {
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  Wire.begin(4);                
  Wire.onReceive(receiveEvent); 
  lcd.begin(16, 2);  
 }

void loop() 
 {
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  lcd.clear();
  while (z==50)
   { 
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);
    lcd.setCursor(0, 0);
    lcd.print("WELCOME");
    lcd.setCursor(0, 1);
    lcd.print("HOME");
    delay(500);
   }
  while (z==60)
   { 
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
    lcd.setCursor(0, 0);
    lcd.print("INVALID");
    lcd.setCursor(0, 1);
    lcd.print("CREDENTIALS");
    delay(500);
   }
 }
