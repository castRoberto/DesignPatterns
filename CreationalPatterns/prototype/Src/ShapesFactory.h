

#ifndef SHAPE_FACTORY_H_
#define SHAPE_FACTORY_H_

#include <map>

#include "interface/IShape.h"
#include "interface/TypesPrototypes.h"
#include "prototypes/Circle.h"
#include "prototypes/Rectangle.h"

class ShapesFactory {

private:

    std::map<types_prototypes, IShape*> shapes;
    
public:
    ShapesFactory();

    ~ShapesFactory();

    IShape* createCopyShape (types_prototypes type);
};


#endif SHAPE_FACTORY_H_ /* SHAPE_FACTORY_H_ */