#include <iostream>

enum Number
{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE = 189,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
};
// Значение даётся автоматически
// тип данных значения является
// int - 4 байт

enum Red
{
    Red_Color = 5,
};

int main(void)
{
    std::cout<<Number::ONE + Number::NINE<<'\n';

    std::cout<<Number::THREE + Number::NINE<<'\n';
    //std::cout<<sizeof(Number::EIGHT);
    //std::cout<<typeid(Number::ONE).name();

    std::cout<<Red::Red_Color<<'\n';

    Number zero{static_cast<Number>(6)};
    std::cout<<zero<<'\n';
    return 0;
}
