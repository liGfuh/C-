#include <iostream>
#include <string>
//подключаем новую бибилиотеку - строковую


int main(void)
{
    std::string name = "ART";
    // строковый тип данных string
    // этот тип даных является массивом
    // поэтому арифметические операции должны быть написаны с
    // мыслью о том, что ты работаешь с массивом

    std::cout<<name<<"\n";

    name += 'T';
    std::cout<<name<<"\n";
    //name -= 'T';
    //std::cout<<name<<"\n";


    std::string ID{"3456"};
    std::cout<<ID<<"\n";
    // числа тут представляют из себя text

    std::string Text{};
    std::cin >> Text;
    std::cout<<Text<<"\n";
    return 0;
}
