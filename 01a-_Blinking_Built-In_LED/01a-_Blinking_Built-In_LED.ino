int blue = 2;

void setup() {
  pinMode (blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(blue, HIGH);
  Serial.println("ON");
  delay(100);
  digitalWrite(blue, LOW);
  Serial.println("OFF");
  delay(100);
}
