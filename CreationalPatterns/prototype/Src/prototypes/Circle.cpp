#include "Circle.h"

Circle::Circle (float radius, int x, int y, std::string color) :
    IShape (x = x, y = y, color = color),
    radius (radius)
{

}

Circle::~Circle() {

}

IShape* Circle::clone () const {

    return new Circle (*this);

}

float Circle::area () {

    return float (M_PI * this->radius * this->radius);

}