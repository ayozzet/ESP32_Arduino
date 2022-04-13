int btn1 = 34;
int btn2 = 35;
int led1 = 15;
int led2 = 2;
int led3 = 4;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  int state1 = digitalRead(btn1);
  int state2 = digitalRead(btn2);
  if (state1 == HIGH) {
    while (state2 == LOW) {
      int state2 = digitalRead(btn2);
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      if (state2 == HIGH) {
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        break;
      }
    }
  }
  if (state2 == HIGH) {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(250);
  }
  else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
}
