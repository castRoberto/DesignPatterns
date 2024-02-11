#include "Car.h"
#include "CarManual.h"
#include "CarDirectorBuilder.h"


int main (int argc, char* argv[]) {

    Car::CarBuilder* carBuilder = new Car::CarBuilder ();
    CarManual::CarManualBuilder* manualBilder = new CarManual::CarManualBuilder ();
    CarDirectorBuilder carDirector;

    carDirector.manageBuild (carBuilder, eCarType_CLASIC);
    carDirector.manageBuild (manualBilder, eCarType_CLASIC);

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


/*
#include <iostream>

template <class T>
class IBase {

public:
    IBase () {};    
    ~IBase () {};

    virtual T* show (char val) = 0;
};

template <class X, class Y>
class ISuperBase : public IBase <Y> {

public:
    virtual ~ISuperBase () {};
    virtual X* hola () = 0;

};

class A {
public:

    class Derivated1 : public ISuperBase <A, Derivated1> {

    public:
        Derivated1 () { };
        ~Derivated1 () { };

        Derivated1* show (char val) override {
            Derivated1* deri1 = new Derivated1 ();
            std::cout << val << std::endl;
            return deri1;
        }

        A* hola () override {
            A* a1 = new A ();
            std::cout << "Soy Derivated 1" << std::endl;
            return a1;
        }
    };
};

class B {
public:
    class Derivated2 : public ISuperBase <B, Derivated2> {

    public:
        Derivated2 () { };
        ~Derivated2 () { };

        Derivated2* show (char val) override {
            Derivated2* deri2 = new Derivated2 ();
            std::cout << val << std::endl;
            return deri2;
        }

        B* hola () override {
            B* b1 = new B ();
            std::cout << "Soy Derivated 2" << std::endl;
            return b1;
        }
    };
};

class MyClass {
public:
    // Método de clase como plantilla
    template<typename T>
    void print(T* entity, char value) {
        delete entity->show (value);
        delete entity->hola ();
    }
};

int main() {

    A::Derivated1* d1 = new A::Derivated1 ();
    B::Derivated2* d2 = new B::Derivated2 ();

    MyClass myObj;

    myObj.print (d1, 'A');
    myObj.print (d2, 'B');

    return 0;
}*/