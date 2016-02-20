#include <LiquidCrystal.h>
#include <LCDHandler.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LCDHandler lcdHandler(&lcd, 300);
bool hasAlreadyPrintAfterInit = false;

void setup() {
  Serial.begin(9600);
  lcdHandler.init("This is a welcome message", ":) :)");
}

void loop() {
  if (!hasAlreadyPrintAfterInit) {
    lcdHandler.clear();
    lcdHandler.print("I'm ready");
    lcdHandler.print("To work", 2);
    hasAlreadyPrintAfterInit = true;
  }
}