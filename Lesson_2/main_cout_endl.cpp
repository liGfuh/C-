#include <iostream>

int main()
{
    std::cout<<"Hellow, world!"; //Является объектом библиотеки iostream
                                 // Cимволы << являются операторами вывода

    int a = 7;
    std::cout<<"a is"<< a;
    /*
       Как можно увидеть из-за отсуствия std::endl - нету переноса надписи
       "a is 7" на новую строку
    */
    std::cout<<std::endl<<"a is"<< a; // С добавлением std::endl появился перенос
    return 0;
}
