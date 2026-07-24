#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int a(8), b(5);
    std::cout<<"Деление через выражение: 8/7 = "<< 8/7 <<std::endl;
    std::cout<<"Деление переменный типa int: "<< a <<"/"<< b <<" = "<< a/b <<std::endl;
    double c(8), d(5);
    std::cout<<"Деление с переменными типа double: "<< c <<"/"<< d <<" = "<< c/d <<std::endl;

    return 0;
}
