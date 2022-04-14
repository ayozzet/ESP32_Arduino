#include <Servo.h>

int led1 = 15;
int ledState1 = LOW;
int pot = 27;
static const int servoPin = 19;

unsigned long previousMillis1 = 0;
const long interval1 = 500;

unsigned long previousMillis2 = 0;
const long interval2 = 100;

Servo servo1;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(pot, INPUT);
  servo1.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int potVal = analogRead(pot);
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
      unsigned long currentMillis1 = millis();
      if (currentMillis1 - previousMillis1 >= interval1) {
        previousMillis1 = currentMillis1;
        if (ledState1 == LOW) {
          ledState1 = HIGH;
        }
        else {
          ledState1 = LOW;
        }
        digitalWrite(led1, ledState1);
      }
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
      unsigned long currentMillis2 = millis();
      if (currentMillis2 - previousMillis2 >= interval2) {
        previousMillis2 = currentMillis2;
        if (ledState1 == LOW) {
          ledState1 = HIGH;
        }
        else {
          ledState1 = LOW;
        }
        digitalWrite(led1, ledState1);
      }
      if (potVal >= 3000 || potVal < 2000) {
        break;
      }
    }
  }
  if (potVal >= 3000) {
    while (1) {
      int potVal = analogRead(pot);
      int pose = map(potVal, 0, 4096, 0, 180);
      Serial.println(potVal);
      servo1.write(pose);
      digitalWrite(led1, HIGH);
      if (potVal < 3000) {
        break;
      }
    }
  }
}
