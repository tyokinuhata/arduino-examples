const int SPEAKER_PIN = 2;

const int NOTE_C4 = 261;
const int NOTE_D4 = 294;
const int NOTE_E4 = 329;
const int NOTE_F4 = 349;
const int NOTE_G4 = 392;
const int NOTE_A4 = 440;
const int NOTE_B4 = 493;
const int NOTE_C5 = 523;

void setup() {
  pinMode(SPEAKER_PIN, OUTPUT);

  tone(SPEAKER_PIN, NOTE_C4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_D4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_E4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_F4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_G4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_A4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_B4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_C5, 500);
  delay(550);

  tone(SPEAKER_PIN, NOTE_C5, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_B4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_A4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_G4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_F4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_E4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_D4, 500);
  delay(550);
  tone(SPEAKER_PIN, NOTE_C4, 500);
  delay(550);
}

void loop() {}
