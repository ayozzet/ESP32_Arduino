int sw1 = 34;

void setup() {
  pinMode (sw1, INPUT);
  Serial.begin(9600);
}

void loop() {
  int data = digitalRead(sw1);
  if (data == HIGH){
    Serial.println("GOOD");
  }
  else{
    Serial.println("BAD");
  }
}
