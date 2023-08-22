#include "Rectangle.h"

Rectangle::Rectangle (int width, int height, int x, int y, std::string color) :
    IShape (x = x, y = y, color = color),
    width (width),
    height (height) 
{

}

Rectangle::~Rectangle() {

}

IShape* Rectangle::clone () const {

    return new Rectangle (*this);

}

float Rectangle::area () {

    return float (this->height * this->width);

}