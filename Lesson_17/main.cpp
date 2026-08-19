#include <iostream>
#include <typeinfo>

auto fun(int, int) -> int;

auto fun(int a,int b) -> int
// trailing - синтаксис
// когда компилятор делает вывод о типе возращаемого значения прототипа функции

{
    return a + b;
}

int main(void)
{
    //auto int bool1 = 1; - это сработает только на 98 стандарте и ниже
    // использовалось для присвоения автоматической продолжительности жизни
    auto bool2 = 2.2345345678;


    std::cout<<typeid(bool2).name()<<'\n';
    std::cout<<fun(3,4)<<'\n';

    return 0;
}
