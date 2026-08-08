#include <iostream>
#include <bitset>
#include <iomanip>

int main()
{
    std::bitset<8> myflags(0x00);
    //Стандартное объявление идентификатора с количеством 8 бит
    //Как и при обычном объявлении в () можно настроить какие биты будут включены
    //В <> настраивается количество выделяемых битов под идентификатор.

    std::cout<<myflags<<"\n";
    //Вывод в потоке cout выводит все биты в одну строку.

    myflags.set(0x01);
    std::cout<<myflags<<"\n";
    // Команда .set - включает биты по разряду ().

    myflags.flip(1).flip(0x07);
    std::cout<<myflags<<"\n";
    // Команда .flip - меняет бит () на противоположный.

    myflags.reset(0x07);
    std::cout<<myflags<<"\n";
    //Команда .reset - если бит () = 1 то он станет 0, если он 0, то он
    // и дальше будет 0.

    std::cout<<"Bit 0x07: "<<std::boolalpha<<myflags.test(0x07)<<"\n";
    std::cout<<"Bit 0x07: "<<std::noboolalpha<<myflags.test(0x07)<<"\n";
    //Команда .test - даёт узнать значение бита.


    std::bitset<8> bits(0x01 | 0x08);
    myflags |= bits;
    std::cout<<myflags<<"\n";
    return 0;
}
