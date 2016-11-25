#include "Arduino.h"
#include "ledrgb.h"

LedRGB::LedRGB(int redPin, int greenPin, int bluePin)
{
  _redPin = redPin;
  _greenPin = greenPin;
  _bluePin = bluePin;
  pinMode(_redPin, OUTPUT);
  pinMode(_greenPin, OUTPUT);
  pinMode(_bluePin, OUTPUT);
}

void LedRGB::SetColor(int red, int green, int blue)
{
  _redValue = red;
  _greenValue = green;
  _blueValue = blue;

  if(_ledState)
  {
    this->On();
  }
}

void LedRGB::On()
{
  analogWrite(_redPin, _redValue);
  analogWrite(_greenPin, _greenValue);
  analogWrite(_bluePin, _blueValue);
  _ledState = true;
}

void LedRGB::Off()
{
  analogWrite(_redPin, 0);
  analogWrite(_greenPin, 0);
  analogWrite(_bluePin, 0);
  _ledState = false;
}

bool LedRGB::GetState()
{
  return _ledState;
}

void LedRGB::Blink(int blinkRate)
{
  if(this -> checkMillis(blinkRate))
  {
    if(_ledState)
    {
      this->Off();
    }
    else
    {
      this->On();
    }
  }
}

bool LedRGB::checkMillis(int millisCheck)
{
  _blinkRate = millisCheck;
  unsigned long currentMillis = millis();

  if(currentMillis - _previousMillis >= _blinkRate)
  {
    _previousMillis = currentMillis;
    return true;
  }
  else
  {
    return false;
  }
}