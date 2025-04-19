#ifndef _CAR_MANUAL_H_
#define _CAR_MANUAL_H_

#include <string>
#include <stdint.h>
#include <iostream>

#include "ICarBuilder.h"

class CarManual {

private:
    
    std::string mark;
    uint8_t tires;
    uint8_t doors;
    uint16_t capacity;

public:
    
    /**
     * Constructor class definition
    */
    class CarManualBuilder : public ICarBuilder <CarManualBuilder, CarManual> {
    
    private:

        std::string _mark;
        uint8_t _tires;
        uint8_t _doors;
        uint16_t _capacity;

    public:
        CarManualBuilder ();
        ~CarManualBuilder ();

        CarManualBuilder* mark (std::string mark) override;
        CarManualBuilder* tires (uint8_t tires) override;
        CarManualBuilder* doors (uint8_t doors) override;
        CarManualBuilder* capacity (uint16_t capacity) override;

        std::string mark () const override;
        uint8_t tires () const override;
        uint8_t doors () const override;
        uint16_t capacity () const override;

        CarManual* build () override;

    };

    CarManual ();
    CarManual (CarManualBuilder* carManualBuilder);
    ~CarManual ();

    void showFeatures ();
};

#endif /* _CAR_MANUAL_H_ */