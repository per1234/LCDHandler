# LCDHandler

## Overview

A basic library to handle a LCD screen on Arduino UNO.
It wrappes print with scroll, allowing delay modifications.

## Contents

- LCDHandler.h: the library definition file.
- LCDHandler.cpp: library implementation file
- examples: 
	- InitLCD: a basic example printing a message that is autoscrolled.
	- LCD_Ethernet: Basic exemple using a Ethernet shield to request and API and show result in LCD, using [schapiuino](https://github.com/jomaora/schapiuino) library.

## API

### Constructor: LCDHandler(LiquidCrystal *lcd, int timeDelay = 500, int rows = 2, int columns = 16)

* **lcd**: Pointer to an LiquidCristal object. You should initialize it to use the library
* **timeDelay**: Optional. Speed in ms to be used when autoscroll is needed. By default it's 500ms.
* **rows**: Optional. Rows of the LCD screen. By default it's 2.
* **columns**: Optional. Columns of the LCD screen. By default it's 16.

### void  init(String welcomeMessage1 = "Ready", String welcomeMessage2 = "")

Method to be called in setup function on main. Initialises LDC with a Welcome Message to be show in row 0.

* **welcomeMessage1**: Optional. Welcome message to show on row 0 after init. If no given value, "Ready" will be shown.
* **welcomeMessage2**: Optional. Welcome message to show on row 1 after init.

### void  print(String message, int row = 0)
### void  print(char* message, int row = 0)
### void  print(int message, int row = 0)

Prints a message on the LCD in the row given as parameter.

### int   getTimeDelay()

Returns the delay used by autoscroll

### void  setTimeDelay(int timeDelay)

Set up the delay used by autoscroll

### void  clear(int delayTime)

Cleans the LCD screen.

* **delayTime**: Optional. Time to wait before clear screen. Default value is 0ms.