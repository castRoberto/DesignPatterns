

#ifndef POINT_H_
#define POINT_H_

#include "../enums/eGeographicElement.h"
#include "../interfaces/IGeographicElement.h"

class Point : public IGeographicElement {

private:
    eGeographicElement type;
    int latitude;
    int longitude;
    
public:

    Point ();

    Point(int latitude, int longitude);

    ~Point();

    void setLatitude (int latitude);

    void setLongitude (int longitude);

    std::string getStringType () override;

    std::string toString () override;

};

#endif POINT_H_ /* POINT_H_ */