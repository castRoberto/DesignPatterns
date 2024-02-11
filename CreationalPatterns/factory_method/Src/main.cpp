
#include <iostream>

#include "enums/eGeographicElement.h"
#include "interfaces/IGeographicElement.h"
#include "geographical_elements/Point.h"
#include "geographical_elements/Circle.h"
#include "GeographicElementFactory.h"


#define LOG(x) std::cout << x << std::endl;

int main (int argc, char* argv[]) {

    Point* egeoPoint = 
            (Point*) GeographicElementFactory::createGeographicElement (eGeographicElement_POINT);
    egeoPoint->setLatitude (23);
    egeoPoint->setLongitude (48);

    Circle* egeoCircle = 
            (Circle*) GeographicElementFactory::createGeographicElement (eGeographicElement_CIRCLE);
    egeoCircle->setCenter ((Center){.latitude=33, .longitude=56}); // designated inicializer
    egeoCircle->setRadius (120);

    LOG (egeoPoint->toString ());

    LOG (egeoCircle->toString ());

    delete egeoPoint;
    delete egeoCircle;


    return 0;
}