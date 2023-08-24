
#include "Point.h"

Point::Point () :
    latitude (0),
    longitude (0),
    type (eGeographicElement_POINT)
{
    
}

Point::Point (int latitude, int longitude) :
    latitude (latitude),
    longitude (longitude),
    type (eGeographicElement_POINT) 
{

}

Point::~Point () {

}

void Point::setLatitude (int latitude) {
    this->latitude = latitude;
}

void Point::setLongitude (int longitude) {
    this->longitude = longitude;
}

std::string Point::getStringType () {

    return eGeographicElement_toString (this->type);

}

std::string Point::toString () {

    std::string pointAsString = "->>[Point]: type: {";
    pointAsString.append (getStringType());
    pointAsString.append ("}, latitude: {");
    pointAsString.append (std::to_string(this->latitude));
    pointAsString.append ("}, longitude: {");
    pointAsString.append (std::to_string(this->longitude));
    pointAsString.append ("}");

    return pointAsString;

}