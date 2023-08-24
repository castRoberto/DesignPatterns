

#include "Circle.h"

Circle::Circle () :
    type (eGeographicElement_CIRCLE),
    center ({}),
    radius (0)
{

}

Circle::Circle (Center center, int radius) :
    type (eGeographicElement_CIRCLE),
    center (center),
    radius (radius) 
{

}

Circle::~Circle () {

}

void Circle::setCenter (Center center) {
    this->center = center;
}

void Circle::setRadius (int radius) {
    this->radius = radius;
}

std::string Circle::getStringType () {

    return eGeographicElement_toString (this->type);

}

std::string Circle::toString () {

    std::string pointAsString = "->>[Circle]: type: {";
    pointAsString.append (getStringType());
    pointAsString.append ("}, center: { latitude: {");
    pointAsString.append (std::to_string(this->center.latitude));
    pointAsString.append ("}, longitude: {");
    pointAsString.append (std::to_string(this->center.longitude));
    pointAsString.append ("} }, radius: {");
    pointAsString.append (std::to_string(this->radius));
    pointAsString.append ("}");

    return pointAsString;

}