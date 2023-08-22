
#include <iostream>

#include "interface/TypesPrototypes.h"
#include "interface/IShape.h"
#include "ShapesFactory.h"

#define LOG(x) std::cout << x << std::endl;

int main (int argc, char* argv[]) {

    ShapesFactory sf = ShapesFactory ();
    IShape* copyCircle = nullptr;
    IShape* copyRectangle = nullptr;

    copyCircle = sf.createCopyShape (E_CIRCLE);
    copyRectangle = sf.createCopyShape (E_RECTANGLE);

    LOG ("circle area: " + std::to_string(copyCircle->area ()));
    LOG ("rectangle area: " + std::to_string(copyRectangle->area ()));

    return 0;
}