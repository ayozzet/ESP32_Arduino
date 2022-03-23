void setup() {
  pinMode (2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(2, HIGH);
  Serial.println("ON");
  delay(100);
  digitalWrite(2, LOW);
  Serial.println("OFF");
  delay(100);
}
