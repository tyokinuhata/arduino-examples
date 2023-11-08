const int RED_LED_PIN = 2;
const int GREEN_LED_PIN = 3;
const int BLUE_LED_PIN = 5;

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(BLUE_LED_PIN, OUTPUT);
}

void loop() {
    // 赤から緑へ
  for (int i = 0; i < 256; i++) {
    analogWrite(RED_LED_PIN, 255 - i);
    analogWrite(GREEN_LED_PIN, i);
    delay(10);
  }
  
  // 緑から青へ
  for (int i = 0; i < 256; i++) {
    analogWrite(GREEN_LED_PIN, 255 - i);
    analogWrite(BLUE_LED_PIN, i);
    delay(10);
  }
  
  // 青から赤へ
  for (int i = 0; i < 256; i++) {
    analogWrite(BLUE_LED_PIN, 255 - i);
    analogWrite(RED_LED_PIN, i);
    delay(10);
  }
}
