#include <iostream>

int main()
{
    setlocale(LC_ALL, "RUS");

    int a{}, b{};

    std::cout<<"Введите два числа через пробел: ";
    std::cin >>a >>b;

    if(a < b)
    {
        int c = b;
        b = a;
        a = c;
    }

    std::cout<<"Меньщее число: "<<b<<"\n";
    std::cout<<"Большее число: "<<a<<"\n";

    return 0;
}
