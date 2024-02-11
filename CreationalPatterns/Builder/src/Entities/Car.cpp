
#include "Car.h"

Car::Car () {

}

Car::Car (CarBuilder* carBuilder) :
    mark (carBuilder->mark ()),
    tires (carBuilder->tires ()),
    doors (carBuilder->doors ()),
    capacity (carBuilder->capacity ())
{

}

Car::~Car () {

}

void Car::run () {
    std::cout << "Runing!" << std::endl;
}

Car::CarBuilder::CarBuilder () {

}

Car::CarBuilder::~CarBuilder () {

}

Car::CarBuilder* Car::CarBuilder::mark (std::string mark) {
    this->_mark = mark;
    return this;
}

Car::CarBuilder* Car::CarBuilder::tires (uint8_t tires) {
    this->_tires = tires;
    return this;
}

Car::CarBuilder* Car::CarBuilder::doors (uint8_t doors) {
    this->_doors = doors;
    return this;
}

Car::CarBuilder* Car::CarBuilder::capacity (uint16_t capacity) {
    this->_capacity = capacity;
    return this;
}
       
std::string Car::CarBuilder::mark () {
    return this->_mark;
}

uint8_t Car::CarBuilder::tires () {
    return this->_tires;
}

uint8_t Car::CarBuilder::doors () {
    return this->_doors;
}

uint16_t Car::CarBuilder::capacity () {
    return this->_capacity;
}

Car* Car::CarBuilder::build () {
    return new Car (this);
}