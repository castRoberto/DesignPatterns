

#ifndef IGREGRAPHICAL_ELEMENT_H_
#define IGREGRAPHICAL_ELEMENT_H_

#include <string>

class IGeographicElement {

public:

    IGeographicElement () {};

    ~IGeographicElement () {};
    
    /**
     * @brief Method to query the type of geographic element in string format
     * @return Geographic element type in string format
    */
    virtual std::string getStringType () = 0;

    virtual std::string toString () = 0;

};

#endif IGREGRAPHICAL_ELEMENT_H_ /* IGREGRAPHICAL_ELEMENT_H_ */