
#ifndef EGEOGRAPHIC_ELEMENT_H_
#define EGEOGRAPHIC_ELEMENT_H_

#include <string>

/**
 * @brief Enumerated for geographic types
*/
typedef enum {

    eGeographicElement_POINT = 0,   // 0
    eGeographicElement_CIRCLE,      // 1

    eGeographicElement_

} eGeographicElement;


/**
 * @brief Method that converts a geographic element enumeration into its string equivalent
 * @param type
 * @return asString
*/
inline std::string eGeographicElement_toString (eGeographicElement type) {
    
    std::string asString;

    switch (type) {
        case eGeographicElement_POINT : { asString = "eGeographicElement_POINT"; break; }
        case eGeographicElement_CIRCLE : { asString = "eGeographicElement_CIRCLE"; break; }
    
        default: { asString = "Does not exist"; }
        break;
    }

    return asString;
}


#endif EGEOGRAPHIC_ELEMENT_H_   /* EGEOGRAPHIC_ELEMENT_H_ */