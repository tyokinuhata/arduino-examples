#include <Servo.h>

const int SERVO_PIN = 2;

Servo my_servo;

void setup() {
  my_servo.attach(SERVO_PIN);
}

void loop() {
  for (int angle = 0; angle <= 180; angle++) {
    my_servo.write(angle);
    delay(30);
  }
  delay(1000);
}
