
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "../interface/IShape.h"

class Rectangle : public IShape {

private:
    int width;
    int height;

public:
    Rectangle(int width, int height, int x, int y, std::string color);

    ~Rectangle();

    IShape* clone () const override;

    float area () override;

};

#endif  /* RECTANGLE_H_ */