#include <LiquidCrystal.h>
#include <LCDHandler.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LCDHandler lcdHandler(&lcd);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;

void setup() {
  pinMode(switchPin, INPUT);
  lcdHandler.init();
}

void loop() {
  switchState = digitalRead(switchPin);
  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      lcdHandler.ask();
    }
  }
  prevSwitchState = switchState;
}
