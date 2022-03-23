int blue = 2;
int red = 3;

void setup() {
  pinMode (blue, OUTPUT);
  pinMode (red, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(blue, HIGH);
  digitalWrite(red, LOW);
  Serial.println("ON");
  delay(100);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);
  Serial.println("OFF");
  delay(100);
}
