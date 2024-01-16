#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16,2);

void setup() {
  lcd.init();
}

void loop() {
  lcd.backlight();
  lcd.setCursor(5,0);
  lcd.print("Hello");
  delay(1000);
  lcd.setCursor(5,1);
  lcd.print("World");
  delay(3000);
  lcd.clear();
  delay(3000);
}
