#include <Servo.h>

int led1 = 15;
int pot = 27;
static const int servoPin = 19;

Servo servo1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(pot, INPUT);
  servo1.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int potVal = analogRead(pot);
  //  int pose = map(potVal,0,4096,0,180);
  Serial.println(potVal);
  if (potVal < 1000) {
    while (1) {
      int potVal = analogRead(pot);
      int pose = map(potVal, 0, 4096, 0, 180);
      Serial.println(potVal);
      servo1.write(pose);
      digitalWrite(led1, LOW);
      if (potVal >= 1000) {
        break;
      }
    }
  }
  if (potVal >= 1000 && potVal < 2000) {
    while (1) {
      int potVal = analogRead(pot);
      int pose = map(potVal, 0, 4096, 0, 180);
      Serial.println(potVal);
      servo1.write(pose);
      digitalWrite(led1, HIGH);
      delay(350);
      digitalWrite(led1, LOW);
      delay(350);
      if (potVal >= 2000 || potVal < 1000) {
        break;
      }
    }
  }
  if (potVal >= 2000 && potVal < 3000) {
    while (1) {
      int potVal = analogRead(pot);
      int pose = map(potVal, 0, 4096, 0, 180);
      Serial.println(potVal);
      servo1.write(pose);
      digitalWrite(led1, HIGH);
      delay(50);
      digitalWrite(led1, LOW);
      delay(50);
      if (potVal >= 3000 || potVal < 2000) {
        break;
      }
    }
  }
  if (potVal >= 3000) {
    while (1) {
      int potVal = analogRead(pot);
      int pose = map(potVal,0,4096,0,180);
      Serial.println(potVal);
      servo1.write(pose);
      digitalWrite(led1, HIGH);
      if (potVal < 3000) {
        break;
      }
    }
  }
}
