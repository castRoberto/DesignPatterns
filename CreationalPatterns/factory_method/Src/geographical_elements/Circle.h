

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "../enums/eGeographicElement.h"
#include "../interfaces/IGeographicElement.h"

struct Center {
    
    int latitude = 0;
    int longitude = 0;

};


class Circle : public IGeographicElement {

private:
    eGeographicElement type;
    Center center;
    int radius;
    
public:
    Circle ();

    Circle (Center center, int radius);
    
    ~Circle ();

    void setCenter (Center center);

    void setRadius (int radius);

    std::string getStringType () override;

    std::string toString () override;

};

#endif CIRCLE_H_ /* CIRCLE_H_ */