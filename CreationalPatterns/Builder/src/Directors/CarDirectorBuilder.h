#ifndef _CAR_DIRECTOR_BUILDER_H_
#define _CAR_DIRECTOR_BUILDER_H_

#include "ICarBuilder.h"

/**
 * @brief Enumerated for car types
*/
typedef enum {

    eCarType_SPORT = 0,   // 0
    eCarType_CLASIC,      // 1

    eCarType_

} eCarType;


/**
 * Director Car class definition
*/
class CarDirectorBuilder {

public:

    CarDirectorBuilder ();

    ~CarDirectorBuilder ();

    template <class T_Builder, class T_Product>
    void manageBuild (ICarBuilder <T_Builder, T_Product>* builder, eCarType type) {
        
        switch (type) {
            case eCarType_CLASIC: {

                builder->capacity (200)->doors (4)->mark ("Mazda");
                break;

            }

            case eCarType_SPORT: {

                builder->capacity (120)->tires (2)->mark ("Ferrari");
                break;

            }
            
            default:
                break;
        }

    }

};

#endif /* _CAR_DIRECTOR_BUILDER_H_ */