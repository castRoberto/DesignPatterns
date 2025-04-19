#ifndef _CAR_BUILDER_H_
#define _CAR_BUILDER_H_

#include <string>
#include <stdint.h>

#include "IBuilder.h"

template <class T_ConcreteBuilder, class T_Product>
class ICarBuilder : public IBuilder <T_Product> {

public:

    virtual ~ICarBuilder() = default;

    virtual T_ConcreteBuilder* mark (std::string mark) = 0;
    virtual T_ConcreteBuilder* tires (uint8_t tires) = 0;
    virtual T_ConcreteBuilder* doors (uint8_t doors) = 0;
    virtual T_ConcreteBuilder* capacity (uint16_t capacity) = 0;

    virtual std::string mark () const = 0;
    virtual uint8_t tires () const = 0;
    virtual uint8_t doors () const = 0;
    virtual uint16_t capacity () const = 0;
};

#endif /* _CAR_BUILDER_H_ */