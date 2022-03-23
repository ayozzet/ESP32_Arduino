int pot = 34;

void setup() {
  pinMode (pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  int data = analogRead(pot);
  Serial.println(data);
}
