
#ifndef CIRCLE_H_
#define CIRCLE_H_

#define _USE_MATH_DEFINES

#include <math.h>

#include "../interface/IShape.h"

class Circle : public IShape {

private:
    float radius;

public:
    Circle(float radius, int x, int y, std::string color);

    ~Circle();

    IShape* clone () const override;

    float area () override;

};

#endif  /* CIRCLE_H_ */