#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>

hd44780_I2Cexp lcd;

void setup() {
  lcd.begin(16, 2);

  lcd.backlight();
  lcd.print("hello, world!");
}

void loop() {}
