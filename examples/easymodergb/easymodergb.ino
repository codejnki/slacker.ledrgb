#include <ledrgb.h>

// wire up a RGB LED to ports 9, 10, 11 simlar to this example
// https://learn.adafruit.com/adafruit-arduino-lesson-3-rgb-leds/overview
// This library will give you an LED object that you can turn off and on 
// and set the color.  
// You have to turn the led explicitly on if you want it steady. 

LedRGB _led(11, 10, 9);
int _timeDelay = 225;

void setup()
{
  _led.On();
}

void loop()
{
  _led.SetColor(255,255,255); // white
  delay(_timeDelay);
  _led.SetColor(250,150,0);   // yellow
  delay(_timeDelay);
  _led.SetColor(255,40,0);    // orange
  delay(_timeDelay);
  _led.SetColor(255,0,0);     // red
  delay(_timeDelay);
  _led.SetColor(10,10,255);   // blue
  delay(_timeDelay);
  _led.SetColor(255,0,100);   // pink
  delay(_timeDelay);
  _led.SetColor(200,0,255);   // purple
  delay(_timeDelay);
  _led.SetColor(0,255,0);     // green
  delay(_timeDelay);
}