

#ifndef ISHAPE_H_
#define ISHAPE_H_

#include <string>

/**
 * Basic prototype
 */ 
class IShape {

private:

    int x;
    int y;
    std::string color;

public:

    IShape (int x, int y, std::string color) : 
        x (x), 
        y (y), 
        color (color) 
    {};

    ~IShape() {};

    virtual IShape* clone () const = 0;

    virtual float area () = 0;

};

#endif  /* ISHAPE_H_ */