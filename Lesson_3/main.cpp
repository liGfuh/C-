#include <iostream>

int getValueNumber(); //Полный прототип
int doubleNumber(int); //Краткий прототип

int doubleNumber(int Number /*- Параметр*/)
{
    return Number * 2;
}
/*
  Определение функции с идентификатором doubleNumber
*/

int main()
{
    int a = getValueNumber();
    std::cout<<"Result: "<< doubleNumber(a /*- Аргумент*/) <<std::endl;
    return 0;
}
