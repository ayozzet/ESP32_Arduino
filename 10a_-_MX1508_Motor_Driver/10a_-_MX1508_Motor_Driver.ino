// the number of the LED pin
const int ledPin1 = 15;  
const int ledPin2 = 2;
// setting PWM properties
const int freq = 10000;
const int ledChannel1 = 0;
const int ledChannel2 = 1;
const int resolution = 4;
 
void setup(){
  // configure LED PWM functionalitites
  ledcSetup(ledChannel1, freq, resolution);
  ledcSetup(ledChannel2, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin1, ledChannel1);
  ledcAttachPin(ledPin2, ledChannel2);
  Serial.begin(9600);
}
 
void loop(){
    ledcWrite(ledChannel1, 256);
    Serial.println("FWD ");
    delay(3000);

    ledcWrite(ledChannel1, 0);
    Serial.println("STOP ");
    delay(3000);
  
    ledcWrite(ledChannel2, 256);
    Serial.println("REV ");
    delay(3000);

    ledcWrite(ledChannel2, 0);
    Serial.println("STOP ");
    delay(3000);
}
