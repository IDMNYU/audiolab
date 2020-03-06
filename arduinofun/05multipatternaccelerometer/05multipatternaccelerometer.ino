#include "CurieIMU.h"

bool pattern1[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0};
bool pattern2[] = {1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1};
int ptr1 = 0;
int ptr2 = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // tell arduino that pin #2 is an OUTPUT
  pinMode(3, OUTPUT); // tell arduino that pin #3 is an OUTPUT

  CurieIMU.begin();
  CurieIMU.setAccelerometerRange(2); // $%@!#!@
}

void loop() {
  // put your main code here, to run repeatedly:
  float ax, ay, az;   //scaled accelerometer values
  // read accelerometer measurements from device, scaled to the configured range
  CurieIMU.readAccelerometerScaled(ax, ay, az);
  int del = (int)((ay+1.)/2.* 500.);

  digitalWrite(2, pattern1[ptr1]);
  digitalWrite(3, pattern2[ptr2]);
  delay(10);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(del);
  ptr1 = (ptr1+1)%16;
  ptr2 = (ptr2+1)%16;
}
