#include "POP32.h"

int speed1 = 67;
int speed2 = 90;
int avgWB = 2000;
int found = 1500;

void setup() {
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  Serial.begin(9600);
}

void loop() {
  while(true){
    Serial.print(analog(A2));
    Serial.print(' ');
    Serial.print(analog(A3));
    Serial.print(' ');
    Serial.println(analog(A4));
    if(analog(A0) > avgWB || analog(A1) > avgWB){
      motor(0, 0, 0, 0);
      delay(5);
      motor(-speed2, -speed2, 0, 0);
      delay(300);
      motor(speed2, -speed2, 0, 0);
      delay(200);
    } else if(analog(A3)>found) {
      motor(speed2,speed2,0,0);
    } else if (analog(A2)>found) {
      motor(speed1,-speed1,0,0);
    } else if(analog(A4)>found) {
      motor(-speed1,speed1,0,0);
    } else {
      motor(speed1, speed1, 0, 0);
    }
  }
}

// void backSpinSL() {
//   motor(0, 0, 0, 0); delay(5);
//   motor(-speed2, -speed2,0,0); delay(200);
//   motor(speed2, -speed2,0,0); delay(500);
// }

// void backSpinSR() {
//   motor(0, 0, 0, 0); delay(5);
//   motor(-speed2, -speed2,0,0); delay(200);
//   motor(-speed2, speed2,0,0); delay(500);
// }

// void backSpin2SS() {
//   motor(0, 0, 0, 0); delay(5);
//   motor(-speed2, -speed2,0,0); delay(500);
//   motor(speed2, -speed2,0,0); delay(500);
// }

void stop() {
  motor(0, 0, 0, 0);
}