/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  // Put your HSLAPixel class definition here.
  class HSLAPixel{
    public:
      double h; // hue: it's value ranges from 0 to 360 degrees
      double s; // saturation: It's value ranges from 0.0 to 1.0
      double l; // luminance: It's value ranges from 0.0 to 1.0
      double a; //  storing the alpha channel (blending opacity) 
      //as a decimal value between 0.0 and 1.0
  };
  // (Remember to end it with a semicolon!)


}
