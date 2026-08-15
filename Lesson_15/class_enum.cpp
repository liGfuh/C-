#include <iostream>

int main(void)
{
    enum class Fr
    {
        LE,
        RO,
        TY = 1,
    };

    enum class Po
    {
        El,
        Or,
        YTYT = -9,
    };

    // модификатор "class" помогает решить проблему уникальности
    // и также решает бесмыслицу с типами и конфликтами имён
    // данный модификатор запрещает неявное преобразования своих
    // перечислений


    if(static_cast<int>(Fr::TY) == static_cast<int>(Po::YTYT))
        std::cout<<"No";
    else
        std::cout<<"Yes";

    return 0;
}
