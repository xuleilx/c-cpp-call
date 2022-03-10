#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#include "cinc.h"

class A
{
public:
    static void funcA(void *object)
    {
        std::cout <<__PRETTY_FUNCTION__ << std::endl;
        if (object)
        {
            A *ptr = static_cast<A *>(object);
            ptr->funcB();
        }
    }
    void funcB()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
};

int main(int argc, char *argv[])
{
    MyType *ptr = (MyType *)malloc(sizeof(MyType));
    ptr->myfunc = A::funcA;
    auto ptrA = new A();

    std::cout<<"======= TEST1 ======="<<std::endl;
    registerCallbak(A::funcA, ptrA);
    std::cout<<"======= TEST2 ======="<<std::endl;
    registerType(ptr);
    std::cout<<"======= TEST3 ======="<<std::endl;
    test();
    delete ptr;
    delete ptrA;
    return 0;
}
