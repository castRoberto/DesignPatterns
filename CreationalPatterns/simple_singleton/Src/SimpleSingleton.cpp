
#include "SimpleSingleton.h"

SimpleSingleton::SimpleSingleton () {
    /**
     * Asing some resources
     */
}

SimpleSingleton::~SimpleSingleton () {
    /**
     * remove some resources
     */
}

/**
 * Returns a single instance of this same object
 */
SimpleSingleton& SimpleSingleton::getInstance () {

    static SimpleSingleton instance;

    return instance; 

}

void SimpleSingleton::doSomething () {

    LOG ("... make some logic ...");

}

