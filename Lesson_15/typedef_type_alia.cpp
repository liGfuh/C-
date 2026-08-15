#include <iostream>

typedef int t;
//typedef - это ключевое слово которое создаёт псевдоним
// для чего угодно

int main(void)
{
    typedef double d;
    using time_time = d;
    time_time kol = 1.9f;
    t ed{};
    std::cin >> ed;

    std::cout<<ed/static_cast<t>(kol);

    return 0;
}
