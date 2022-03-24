void setup() {
    Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0){
    int val = Serial.read();
    Serial.print("Value now write: ");
    Serial.write(val);
    Serial.print("   Value now print: ");
    Serial.println(val);
    delay(500);
  }
}
