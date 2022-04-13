#include <Servo.h>

int btn1 = 34;
int led1 = 15;
int pot = 27;
static const int servoPin = 19;

Servo servo1;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(pot, INPUT);
  servo1.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int state1 = digitalRead(btn1);
  int potVal = analogRead(pot);
  Serial.println(potVal);
  if (state1 == HIGH && potVal > 1000) {
    delay(500);
    while (1) {
      int state1 = digitalRead(btn1);
      int potVal = analogRead(pot);
      Serial.println(potVal);
      digitalWrite(led1, HIGH);
      servo1.write(180);
      delay(50);
      if (state1 == HIGH && potVal <= 1000) {
        servo1.write(0);
        delay(500);
        digitalWrite(led1, LOW);
        break;
      }
    }
  }
}
