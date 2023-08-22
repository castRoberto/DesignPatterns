

#ifndef SIMPLE_SINGLETON_H_
#define SIMPLE_SINGLETON_H_

#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class SimpleSingleton {

private:

    /**
     * Private default constructor
     */
    SimpleSingleton ();

public:

    /**
     * Remove the copy constructor
     */
    SimpleSingleton (const SimpleSingleton& other) = delete;

    /**
     * Remove the copy assignment operator
     */
    void operator = (const SimpleSingleton& other) = delete;

	~SimpleSingleton ();

    static SimpleSingleton& getInstance ();

    void doSomething ();

};


#endif /* SIMPLE_SINGLETON_H_ */