
#include <cstdint>
#include "Rectangle.h"

/*********************************
 * A simple class for a Rectangle, 
 * which knows it's width and height. 
 * And can calculate it's area.
 *********************************/

Rectangle::Rectangle() {
    bIsValid = false;
    setValues(0,0);
}

Rectangle::Rectangle(uint32_t x, uint32_t y) {
    bIsValid = false;
    setValues(x, y);
}

bool Rectangle::isValid() {
    return bIsValid;
}

void Rectangle::setValues (uint32_t x, uint32_t y) {
    width = x;
    height = y;
    
    if (width > 0 && height > 0) bIsValid = true;
}

void Rectangle::setX (uint32_t val) {
    width = val;
    
    if (width > 0 && height > 0) bIsValid = true;
}

void Rectangle::setY (uint32_t val) {
    height = val;
    
    if (width > 0 && height > 0) bIsValid = true;
}

uint32_t Rectangle::getArea() {
    return width*height;
}
