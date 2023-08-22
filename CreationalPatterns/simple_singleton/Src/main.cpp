
#include "SimpleSingleton.h"


int main (int argc, char* argv[]) {

    SimpleSingleton& simpleSingleton_1 = SimpleSingleton::getInstance();

    SimpleSingleton& simpleSingleton_2 = SimpleSingleton::getInstance();

    simpleSingleton_1.doSomething();

    simpleSingleton_2.doSomething();

    return 0;
    
}