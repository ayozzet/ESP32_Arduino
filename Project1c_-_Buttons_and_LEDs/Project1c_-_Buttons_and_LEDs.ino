int btn1 = 34;
int led1 = 15;
int led2 = 2;
int led3 = 4;
int status = false;

void setup() {
  pinMode(btn1, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {

  if (digitalRead(btn1) == true) {
    status = !status;
    digitalWrite(led1, status);
    digitalWrite(led2, status);
    digitalWrite(led3, status);
  } while (digitalRead(btn1) == true);
  delay(50);
}
