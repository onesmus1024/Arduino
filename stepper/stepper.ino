#include<Stepper.h>
int steps_per_revolution = 2048;
int motor_speed=10;
int delay_time =1000;
Stepper my_stepper(steps_per_revolution,8,9,10,11);

void setup() {
  // put your setup code here, to run once:
  my_stepper.setSpeed(motor_speed);

}

void loop() {
  // put your main code here, to run repeatedly:

  my_stepper.step(steps_per_revolution);
  delay(delay_time);
//  my_stepper.step(-steps_per_revolution/2);
  

}
