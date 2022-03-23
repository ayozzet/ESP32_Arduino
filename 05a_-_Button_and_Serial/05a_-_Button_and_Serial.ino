int sw1 = 34;
int blue = 2;

void setup() {
  pinMode (sw1, INPUT);
  pinMode (blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int data = digitalRead(sw1);
  if (data == LOW){
    Serial.println("GOOD");
    digitalWrite(blue, HIGH);
  }
  else{
    Serial.println("BAD");
    digitalWrite(blue, LOW);
  }
}
