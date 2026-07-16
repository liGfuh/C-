#include <iostream>
#include "mathec.h"

int main()
{
    int a = 0;
    std::cout<<"Enter number: ";
    std::cin >> a;
    std::cout<<"The sum of 3 and "<<a<<" = "<< add(3,a) << std::endl;
    return 0;
}
