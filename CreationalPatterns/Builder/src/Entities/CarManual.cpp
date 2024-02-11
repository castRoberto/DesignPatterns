
#include "CarManual.h"

CarManual::CarManual () {

}

CarManual::CarManual (CarManualBuilder* carManualBuilder) :
    mark (carManualBuilder->mark ()),
    tires (carManualBuilder->tires ()),
    doors (carManualBuilder->doors ()),
    capacity (carManualBuilder->capacity ())
{

}

CarManual::~CarManual () {

}

void CarManual::showFeatures () {
    std::string out = "[FEATURES]: ";
    out.append ("mark: {" + this->mark + "}, ");
    out.append ("tires: {" + std::to_string (this->tires) + "}, ");
    out.append ("doors: {" + std::to_string (this->doors) + "}, ");
    out.append ("capacity: {" + std::to_string (this->capacity) + "}");

    std::cout << out << std::endl;
}

CarManual::CarManualBuilder::CarManualBuilder () {

}

CarManual::CarManualBuilder::~CarManualBuilder () {

}

CarManual::CarManualBuilder* CarManual::CarManualBuilder::mark (std::string mark) {
    this->_mark = mark;
    return this;
}

CarManual::CarManualBuilder* CarManual::CarManualBuilder::tires (uint8_t tires) {
    this->_tires = tires;
    return this;
}

CarManual::CarManualBuilder* CarManual::CarManualBuilder::doors (uint8_t doors) {
    this->_doors = doors;
    return this;
}

CarManual::CarManualBuilder* CarManual::CarManualBuilder::capacity (uint16_t capacity) {
    this->_capacity = capacity;
    return this;
}
       
std::string CarManual::CarManualBuilder::mark () {
    return this->_mark;
}

uint8_t CarManual::CarManualBuilder::tires () {
    return this->_tires;
}

uint8_t CarManual::CarManualBuilder::doors () {
    return this->_doors;
}

uint16_t CarManual::CarManualBuilder::capacity () {
    return this->_capacity;
}

CarManual* CarManual::CarManualBuilder::build () {
    return new CarManual (this);
}