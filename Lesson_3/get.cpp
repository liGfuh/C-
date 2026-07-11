#include <iostream>
// Лучше всего писать многофайловые проекты через .h
// Это будет вдальнейшем
int getValueNumber();

int getValueNumber()
{
    int Number = 0;
    std::cout<<"Enter integer: ";
    std::cin >>Number;
    return Number;
}
