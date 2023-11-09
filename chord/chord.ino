#include <MozziGuts.h>
#include <Oscil.h>
#include <tables/square_no_alias_2048_int8.h>

const int NOTE_C4 = 261;
const int NOTE_E4 = 329;
const int NOTE_G4 = 392;

Oscil<SQUARE_NO_ALIAS_2048_NUM_CELLS, AUDIO_RATE> oscilC(SQUARE_NO_ALIAS_2048_DATA);
Oscil<SQUARE_NO_ALIAS_2048_NUM_CELLS, AUDIO_RATE> oscilE(SQUARE_NO_ALIAS_2048_DATA);
Oscil<SQUARE_NO_ALIAS_2048_NUM_CELLS, AUDIO_RATE> oscilG(SQUARE_NO_ALIAS_2048_DATA);

void setup() {
  startMozzi();
  oscilC.setFreq(NOTE_C4);
  oscilE.setFreq(NOTE_E4);
  oscilG.setFreq(NOTE_G4);
}
void updateControl() {}

int updateAudio() {
  return (oscilC.next() + oscilE.next() + oscilG.next()) / 2;
}
void loop() {
  audioHook();
}
