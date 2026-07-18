#include <iostream>
#include "io.h"

int main()
{
    std::cout<<"Enter two number: ";
    int a = readNumber(), b = readNumber();
    std::cout<<std::endl<<"Sum number "<<a<<" + "<<b<<" = ";
    writeAnswer(a + b);
    return 0;
}
