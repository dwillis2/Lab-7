#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

//Test
/*
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello World");
}
void loop() {}
*/

int voltageV = A0;

void setup() {
  pinMode (voltageV, INPUT);
  lcd.init();
  lcd.backlight();
}

void loop() {
  int VoltageMsmt = analogRead(voltageV);
  float Vcalc = (5.0/1023)*VoltageMsmt;
  lcd.setCursor(0, 0);
  lcd.print("Voltage: ");
  lcd.print(Vcalc);
  lcd.print("V");
  delay(1000);
}