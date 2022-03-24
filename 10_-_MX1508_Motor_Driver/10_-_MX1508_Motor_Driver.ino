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
  // increase the LED brightness
  for(int dutyCycle = 0; dutyCycle <= 256; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(ledChannel1, dutyCycle);
    Serial.print("Menaik FWD: ");
    Serial.println(dutyCycle);
    delay(50);
  }

  // decrease the LED brightness
  for(int dutyCycle = 256; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel1, dutyCycle);
    Serial.print("Menurun FWD: ");
    Serial.println(dutyCycle);   
    delay(50);
  }

  // increase the LED brightness
  for(int dutyCycle = 0; dutyCycle <= 256; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(ledChannel2, dutyCycle);
    Serial.print("Menaik REV: ");
    Serial.println(dutyCycle);
    delay(50);
  }

  // decrease the LED brightness
  for(int dutyCycle = 256; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel2, dutyCycle);
    Serial.print("Menurun REV: ");
    Serial.println(dutyCycle);   
    delay(50);
  }
}
