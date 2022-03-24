#include <Servo.h>

static const int servoPin = 2;
int SW1 = 34;
int SW2 = 35;
Servo servo1;

void setup() {
    Serial.begin(9600);
    pinMode (SW1, INPUT);
    pinMode (SW2, INPUT);
    servo1.attach(servoPin);
}

void loop() {
  int data1 = digitalRead(SW1);
  int data2 = digitalRead(SW2);
  if (data1 == HIGH){
    servo1.write(0);
    Serial.println("0");
    delay(100);
  }
  if (data2 == HIGH){
    servo1.write(180);
    Serial.println("180");
    delay(100);
  }
  else{
    servo1.write(90);
    Serial.println("90");
    delay(100);
  }
  
  
  
}
