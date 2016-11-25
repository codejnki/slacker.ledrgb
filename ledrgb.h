/*
  ledrgb.h - Library for controlling a RGB LED 
  Created by Patrick Stockton
*/

#ifndef ledrgb_h
#define ledrgb_h

#include "Arduino.h"

class LedRGB
{
  public:
    LedRGB(int redPin, int greenPin, int bluePin);
    void SetColor(int red, int green, int blue);
    void On();
    void Off();
    void Blink(int blinkRate);
    bool GetState();
  private:
    bool checkMillis(int millisCheck);
    int _redPin;
    int _greenPin;
    int _bluePin;
    int _redValue;
    int _greenValue;
    int _blueValue;
    int _blinkRate;
    bool _ledState;
    unsigned long _previousMillis;
};


#endif