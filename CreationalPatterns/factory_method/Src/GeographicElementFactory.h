

#ifndef GEOGRAPHIC_ELEMENT_FACTORY_H_
#define GEOGRAPHIC_ELEMENT_FACTORY_H_

#include "enums/eGeographicElement.h"
#include "interfaces/IGeographicElement.h"

#include "geographical_elements/Point.h"
#include "geographical_elements/Circle.h"

/**
 * @brief Factory to create geographic elements
*/
class GeographicElementFactory {

public:

    GeographicElementFactory ();

    ~GeographicElementFactory();

    /**
     * @brief factory method
     * @param type type of geographic element to create
     * @return geographicalElement
    */
    static IGeographicElement* createGeographicElement (eGeographicElement type);

};

#endif GEOGRAPHIC_ELEMENT_FACTORY_H_    /* GEOGRAPHIC_ELEMENT_FACTORY_H_ */
