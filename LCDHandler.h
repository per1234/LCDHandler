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
        LCDHandler(LiquidCrystal *lcd) {
          _lcd = lcd;
        }

        /*LCDHandler(int rs, int enable, int d4, int d5, int d6, int d7, int rows = 2, int columns = 16) {
          init(rs, enable, d4, d5, d6, d7, rows, columns);
          _lcd.print("Ask me and then");
          _lcd.setCursor(0, 1);
          _lcd.print("shake :)");
        }*/

        void ask();
        void init(int rows = 2, int columns = 16);
    private:

    	LiquidCrystal *_lcd;
};
#endif