int pot = 34;
int blue = 2;

void setup() {
  pinMode (pot, INPUT);
  pinMode (blue, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int data = analogRead(pot);
  if (data > 450){
    Serial.println("OVER 450");
    digitalWrite(blue, HIGH);
  }
  else{
    Serial.println("LESS THAN 450");
    digitalWrite(blue, LOW);
  }
}
