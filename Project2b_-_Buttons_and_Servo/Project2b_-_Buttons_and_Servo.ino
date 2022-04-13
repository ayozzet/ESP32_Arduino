#include <Servo.h>

int btn1 = 34;
int led1 = 15;
int pot = 21;
static const int servoPin = 19;

Servo servo1;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(pot, INPUT);
  servo1.attach(servoPin);
}

void loop() {
  int state1 = digitalRead(btn1);
  int potVal = analogRead(pot);
  if (state1 == HIGH && potVal > 1000) {
    delay(500);
    while (state1 == LOW && potVal > 1000 || potVal <= 1000) {
      int state1 = digitalRead(btn1);
      int potVal = analogRead(pot);
      digitalWrite(led1, HIGH);
      servo1.write(180);
      delay(500);
      if (state1 == HIGH && potVal <= 1000) {
        digitalWrite(led1, LOW);
        servo1.write(0);
        delay(500);
        break;
      }
    }
  }
}
