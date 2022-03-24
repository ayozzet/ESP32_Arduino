#include <Servo.h>

static const int servoPin = 19;

Servo servo1;

void setup() {
    Serial.begin(9600);
    servo1.attach(servoPin);
}

void loop() {
  if (Serial.available() > 0){
    int cond = Serial.read();
    if (cond == '1'){
      servo1.write(0);
      delay(1000);
    }
    if (cond == '2'){
      servo1.write(90);
      delay(1000);
    }
    if (cond == '3'){
      servo1.write(180);
      delay(1000);
    }
    else{
      servo1.write(45);
    }
  }
}
