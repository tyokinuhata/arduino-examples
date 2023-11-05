const int SPEAKER_PIN = 2;

const int KEY_C4_PIN = 3;
const int KEY_D4_PIN = 4;
const int KEY_E4_PIN = 5;
const int KEY_F4_PIN = 6;
const int KEY_G4_PIN = 7;
const int KEY_A4_PIN = 8;
const int KEY_B4_PIN = 9;
const int KEY_C5_PIN = 10;

const int NOTE_C4 = 261;
const int NOTE_D4 = 294;
const int NOTE_E4 = 329;
const int NOTE_F4 = 349;
const int NOTE_G4 = 392;
const int NOTE_A4 = 440;
const int NOTE_B4 = 493;
const int NOTE_C5 = 523;

void setup() {
  Serial.begin(115200);

  pinMode(SPEAKER_PIN, OUTPUT);

  pinMode(KEY_C4_PIN, INPUT_PULLUP);
  pinMode(KEY_D4_PIN, INPUT_PULLUP);
  pinMode(KEY_E4_PIN, INPUT_PULLUP);
  pinMode(KEY_F4_PIN, INPUT_PULLUP);
  pinMode(KEY_G4_PIN, INPUT_PULLUP);
  pinMode(KEY_A4_PIN, INPUT_PULLUP);
  pinMode(KEY_B4_PIN, INPUT_PULLUP);
  pinMode(KEY_C5_PIN, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(KEY_C4_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_C4, 100);
    delay(100);
  }
  else if (digitalRead(KEY_D4_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_D4, 100);
    delay(100);
  }
  else if (digitalRead(KEY_E4_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_E4, 100);
    delay(100);
  }
  else if (digitalRead(KEY_F4_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_F4, 100);
    delay(100);
  }
  else if (digitalRead(KEY_G4_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_G4, 100);
    delay(100);
  }
  else if (digitalRead(KEY_A4_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_A4, 100);
    delay(100);
  }
  else if (digitalRead(KEY_B4_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_B4, 100);
    delay(100);
  }
  else if (digitalRead(KEY_C5_PIN) == LOW) {
    tone(SPEAKER_PIN, NOTE_C5, 100);
    delay(100);
  }
  else {
    digitalWrite(SPEAKER_PIN, LOW);
  }
}
