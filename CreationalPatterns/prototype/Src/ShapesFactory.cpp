
#include "ShapesFactory.h"

ShapesFactory::ShapesFactory () {

    int rectangleWidth         = 10;
    int rectangleHeight        = 20;
    int rectangleX             = 5;
    int rectangleY             = 25;
    std::string rectangleColor = "green";

    float circleRadius          = 42.0;
    int circleX                 = 5;
    int circleY                 = 25;
    std::string circleColor     = "red";

    this->shapes[E_RECTANGLE] = 
        new Rectangle (
            rectangleWidth,
            rectangleHeight,
            rectangleX,
            rectangleY,
            rectangleColor
        );

    this->shapes[E_CIRCLE] = 
        new Circle (
            circleRadius,
            circleX,
            circleY,
            circleColor
        );
}

ShapesFactory::~ShapesFactory () {

    delete this->shapes[E_RECTANGLE];
    delete this->shapes[E_CIRCLE];

}

IShape* ShapesFactory::createCopyShape (types_prototypes type) {

    return this->shapes[type]->clone ();

}