#ifndef _BUILDER_H_
#define _BUILDER_H_

template <class T>
class IBuilder {

public:

    virtual T* build () = 0;

};

#endif /* _BUILDER_H_ */