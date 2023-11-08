#include <Stepper.h>

const int MOTOR_PHASE_1 = 2;
const int MOTOR_PHASE_2 = 3;
const int MOTOR_PHASE_3 = 4;
const int MOTOR_PHASE_4 = 5;

const int MOTOR_STEPS = 2048;

Stepper my_stepper(MOTOR_STEPS, MOTOR_PHASE_1, MOTOR_PHASE_3, MOTOR_PHASE_2, MOTOR_PHASE_4);

void setup() {
  my_stepper.setSpeed(10);
}

void loop() {
  my_stepper.step(256);
}
