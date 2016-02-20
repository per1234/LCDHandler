/*
  LCDHandler.cpp - implemention file for LCDHandler.h.
  Created by Joan Ortega, jomaora@gmail.com Feb. 20, 2016.
  Released into the public domain.
*/

#include "LCDHandler.h"
#include "Arduino.h"
#include <LiquidCrystal.h>

void LCDHandler::init(int rows, int columns) {
  //_lcd = LiquidCrystal(rs, enable, d4, d5, d6, d7);
  _lcd->begin(columns, rows);
  _lcd->print("Ask me and then");
  _lcd->setCursor(0, 1);
  _lcd->print("shake :)");
}

void LCDHandler::ask() {
  int reply = random(8);
  _lcd->clear();
  _lcd->setCursor(0, 0);
  _lcd->print("The ball says");
  _lcd->setCursor(0, 1);
  switch(reply) {
    case 0:
      _lcd->print("Yes");
      break;
    case 1:
      _lcd->print("Most likely");
      break;
    case 2:
      _lcd->print("Ask again");
      break;
    case 3:
      _lcd->print("Certainly");
      break;
    case 4:
      _lcd->print("Outlook good");
      break;
    case 5:
      _lcd->print("Unsure");
      break;
    case 6:
      _lcd->print("Doubtful");
      break;
    case 7:
      _lcd->print("No");
      break;
  }
}