/*
  LCDHandler.h - Library to handle LCD.
  Created by Joan Ortega, jomaora@gmail.com Feb. 20, 2016.
  Released into the public domain.
*/

#ifndef LCDHandler_h
#define LCDHandler_h

#include <LiquidCrystal.h>
#include "Arduino.h"

class LCDHandler
{
    public:
        LCDHandler(LiquidCrystal *lcd, int timeDelay = 500, int rows = 2, int columns = 16) 
          :_lcd(lcd), _rows(rows), _columns(columns), _timeDelay(timeDelay) {}

        void  init(String welcomeMessage1 = "Ready", String welcomeMessage2 = "");
        void  print(String message, int row = 0);
        int   getTimeDelay();
        void  setTimeDelay(int timeDelay);
        void  clear();
    private:

    	LiquidCrystal *_lcd;
      int _columns;
      int _rows;
      int _timeDelay;

      void  printAndScroll(String message, int row = 0);
};
#endif