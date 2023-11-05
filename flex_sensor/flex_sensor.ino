const int FLEX_SENSOR_PIN = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int val = analogRead(FLEX_SENSOR_PIN);
  Serial.println(val);
}
