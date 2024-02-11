
#include "GeographicElementFactory.h"

GeographicElementFactory::GeographicElementFactory () {

}

GeographicElementFactory::~GeographicElementFactory () {

}

IGeographicElement* GeographicElementFactory::createGeographicElement (eGeographicElement type) {

    switch (type) {
        case eGeographicElement_POINT : {
            return new Point (); 
            break;
        }
        case eGeographicElement_CIRCLE : {
            return new Circle (); 
            break;
        }
        default: {
            return nullptr;
            break;
        }
    }

}