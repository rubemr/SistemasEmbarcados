#include <LiquidCrystal.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  lcd.setCursor(15, 1);
  
  float v = analogRead(0) * (5.0 / 1023.0);

  lcd.print(v);
}
