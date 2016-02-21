# LCDHandler

## Overview

A basic library to handle a LCD screen on Arduino UNO.
It wrappes print with scroll, allowing delay modifications.

## Contents

- LCDHandler.h: the library definition file.
- LCDHandler.cpp: library implementation file
- examples: a basic example printing a message that is autoscrolled.

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

Prints a message on the LCD in the row given as parameter.

### int   getTimeDelay()

Returns the delay used by autoscroll

### void  setTimeDelay(int timeDelay)

Set up the delay used by autoscroll

### void  clear()

Cleans the LCD screen

### Example

The basic example uses a basic circuit described in Arduino basic skecthes, however potentiometer is not used to handle screen brightness. You can put V0 directly to GND.

![dsc_0026](https://cloud.githubusercontent.com/assets/7602475/13202263/ace65e5a-d894-11e5-9a60-2ce5055e684c.JPG)