#include <LiquidCrystal.h>
#include <SPI.h>
#include <WiFi.h>
#include <WiFiUdp.h>

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

void setup() {
  analogWrite(10, 255);
  lcd.begin(16, 2);
  
  lcd.print("BrickOS");
  lcd.setCursor(0, 2);
  lcd.print("V5.0");
}

void loop() {
  // put your main code here, to run repeatedly:

}
