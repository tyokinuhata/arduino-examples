#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128, 64, &Wire);

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0,0);

  display.println("hello, world!");

  display.drawRect(10, 15, 50, 30, SSD1306_WHITE);

  display.drawCircle(90, 40, 10, SSD1306_WHITE);

  display.display();
}

void loop() {}
