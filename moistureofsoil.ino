#include <LiquidCrystal.h>
LiquidCrystal lcd(8,7,6,5,4,3);

int sensorpin = A0;
int sensorValue = 0;
int percentValue = 0;

void setup() {
 
 
 lcd.print(16,2);

}

void loop() {
  
  sensorValue = analogRead(sensorpin);

  Serial.print("\n\nAnalogValue:");
  Serial.print(sensorValue);
  percentValue = map(sensorValue,1023,200,0,100);
  Serial.print("\nPercentValue: ");
  Serial.print(percentValue);
  

  lcd.setCursor(0,0);

  lcd.print("Percentage: ");

  lcd.print(percentValue);

  lcd.print("%");


  delay(1000);

  lcd.clear();

}
