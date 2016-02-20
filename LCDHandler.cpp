/*
  LCDHandler.cpp - implemention file for LCDHandler.h.
  Created by Joan Ortega, jomaora@gmail.com Feb. 20, 2016.
  Released into the public domain.
*/

#include "LCDHandler.h"
#include "Arduino.h"
#include <LiquidCrystal.h>

void LCDHandler::init(String welcomeMessage1, String welcomeMessage2) {
  _lcd->clear();
  _lcd->begin(_columns, _rows);
  print(welcomeMessage2, 1);
  print(welcomeMessage1, 0);
  
}

void LCDHandler::print(String message, int row) {
  _lcd->setCursor(0, row);
  _lcd->print(message);
  int diffence = message.length() - _columns;
  if (diffence > 0) {
    printAndScroll(message, row);
  }
}

void LCDHandler::printAndScroll(String message, int row) {
  for (int i = 0; i < 4; i++) {
    for (int positionCounter = 0; positionCounter < (message.length() - _columns); positionCounter++) {
      if (i % 2 == 0) {
        _lcd->scrollDisplayLeft();  
      } else {
        _lcd->scrollDisplayRight();    
      }
      delay(_timeDelay);
    }  
  }
}

int LCDHandler::getTimeDelay() {
  return _timeDelay;
}

void LCDHandler::setTimeDelay(int timeDelay) {
  _timeDelay = timeDelay;
}

void LCDHandler::clear() {
  _lcd->clear();
}