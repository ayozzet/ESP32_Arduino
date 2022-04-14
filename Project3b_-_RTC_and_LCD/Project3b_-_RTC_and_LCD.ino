#include <LiquidCrystal_I2C.h>
#include "Arduino.h"
#include "uRTCLib.h"

LiquidCrystal_I2C lcd(0x27,16,2);
uRTCLib rtc(0x68);

void setup() {
  delay (2000);
  Serial.begin(9600);
  Serial.println("Serial OK");

  #ifdef ARDUINO_ARCH_ESP8266
    URTCLIB_WIRE.begin(0, 2); 
  #else
    URTCLIB_WIRE.begin();
  #endif
  
  lcd.init();                       
  lcd.backlight();
}

void loop() {
  rtc.refresh();
  String masa = String(rtc.hour())+":"+String(rtc.minute())+":"+String(rtc.second());
  String tarikh = String(rtc.day())+"."+String(rtc.month())+"."+String(rtc.year());
  lcd.setCursor(0,0);
  lcd.print(masa);
  lcd.setCursor(0,1);
  lcd.print(tarikh);
  delay(10);
  lcd.clear();
}
