#include "Car.h"
#include "CarManual.h"
#include "CarDirectorBuilder.h"


int main (int argc, char* argv[]) {

    Car::CarBuilder* carBuilder = new Car::CarBuilder ();
    CarManual::CarManualBuilder* manualBilder = new CarManual::CarManualBuilder ();
    CarDirectorBuilder carDirector;

    carDirector.manageBuild (carBuilder, eCarType::eCarType_CLASIC);
    carDirector.manageBuild (manualBilder, eCarType::eCarType_CLASIC);

    Car* car = carBuilder->build ();
    CarManual* manual = manualBilder->build ();

    car->run ();
    manual->showFeatures ();
    

    delete carBuilder;
    delete manualBilder;
    delete car;
    delete manual;

    carBuilder = nullptr;
    manualBilder = nullptr;
    car = nullptr;
    manual = nullptr;

    return 0;
}
