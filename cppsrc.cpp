#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#include "cinc.h"

class A
{
public:
    static int funcA(int a, int b) {
        std::cout<<"Hi: "<<a + b<<std::endl;
        return a + b;
    }
};


int main(int argc, char* argv[]) {
    MyType *ptr = (MyType*)malloc(sizeof(MyType));
    ptr->add = A::funcA;

    registerCallbak(A::funcA);
    registerType(ptr);
    test();

    return 0;
}