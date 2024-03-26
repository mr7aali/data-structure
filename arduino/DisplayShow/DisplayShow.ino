#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

  void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop() {
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("Hello, From");
  lcd.setCursor(0, 1);
  lcd.print("Arduino_uno_guy");
}
