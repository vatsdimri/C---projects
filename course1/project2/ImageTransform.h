#pragma once

#include "uiuc/PNG.h"

using namespace uiuc;

PNG grayscale(PNG image);  
PNG createSpotlight(PNG image, int centerX, int centerY);
PNG illinify(PNG image);
PNG watermark(PNG firstImage, PNG secondImage);
double disPixels(int x1, int y1, int x2, int y2);
unsigned int min(unsigned int x, unsigned int y);
