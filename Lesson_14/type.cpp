#include <iostream>

int main()
{
    /*
    float x = 11/3;
    int a{11}, b{3};
    float y = a/b;

    Ошибка
    */

    // Конвертация C-style
    int i1 = 11;
    int i2 = 3;
    float x = (float)(i1/i2);
    float y = (float)(11/3);
    std::cout<<x<<"   :   "<<y<<"\n\n";


    // Оператор static_cast
    int l1 = 11;
    int l2 = 3;
    float z = static_cast<float>(l1/l2);
    std::cout<<z<<"\n";

    return 0;
}
