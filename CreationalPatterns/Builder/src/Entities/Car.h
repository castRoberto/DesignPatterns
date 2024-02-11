#ifndef _CAR_H_
#define _CAR_H_

#include <string>
#include <stdint.h>
#include <iostream>

#include "ICarBuilder.h"

class Car {

private:
    
    std::string mark;
    uint8_t tires;
    uint8_t doors;
    uint16_t capacity;

public:
    
    /**
     * Constructor class definition
    */
    class CarBuilder : public ICarBuilder <CarBuilder, Car> {
    
    private:

        std::string _mark;
        uint8_t _tires;
        uint8_t _doors;
        uint16_t _capacity;

    public:
        CarBuilder ();
        ~CarBuilder ();

        CarBuilder* mark (std::string mark) override;
        CarBuilder* tires (uint8_t tires) override;
        CarBuilder* doors (uint8_t doors) override;
        CarBuilder* capacity (uint16_t capacity) override;

        std::string mark () override;
        uint8_t tires () override;
        uint8_t doors () override;
        uint16_t capacity () override;

        Car* build () override;

    };

    Car ();
    Car (CarBuilder* carBuilder);
    ~Car ();

    void run ();
};

#endif /* _CAR_H_ */