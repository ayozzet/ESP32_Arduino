int ir = 5;

void setup() {
  pinMode (ir, INPUT);
  Serial.begin(9600);
}

void loop() {
  int data = digitalRead(ir);
  Serial.println(data);
}
