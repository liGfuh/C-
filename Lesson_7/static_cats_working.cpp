#include <iostream>
#include <iomanip>

int main()
{
    char ch1(97);
    char ch2('a');
    int i = static_cast<int>(ch1);
    std::cout<<i<<"  "<<ch2<<" "<<static_cast<int>(ch1)<<std::endl;
/*
    В случае если число которое мы конвентируем через static_cast
    нарушет диапозон типа в который мы конвентируем, то произойдёт переполнение
 */
    std::cout<<std::fixed<<std::setprecision(10);
    std::cout<<static_cast<double>(ch2) / 5.6<<std::endl;

    int a = static_cast<int>(ch2);
    std::cout<<a - 45;

    return 0;
}
