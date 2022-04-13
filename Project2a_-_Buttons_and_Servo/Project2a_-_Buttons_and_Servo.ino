#include <Servo.h>

static const int servoPin = 19;
int btn1 = 34;
int btn2 = 35;
int led1 = 15;

Servo servo1;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(led1, OUTPUT);
  servo1.attach(servoPin);
}

void loop() {
  int state1 = digitalRead(btn1);
  int state2 = digitalRead(btn2);
  if (state1 == HIGH) {
    while (state2 == LOW) {
      int state2 = digitalRead(btn2);
      digitalWrite(led1, HIGH);
      servo1.write(180);
      delay(500);
      if (state2 == HIGH) {
        digitalWrite(led1, LOW);
        servo1.write(0);
        delay(500);
        break;
      }
    }
  }
  if (state2 == HIGH) {
    digitalWrite(led1, LOW);
    servo1.write(0);
    delay(500);
  }
}
