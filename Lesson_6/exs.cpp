#include <iostream>
#include <iomanip>

int main()
{
    // Для double корректна запись вида 5200.0 = 5.2e3 или 1.05 = 105e-2
    // Для float корректна следующая копирующая инициализация
    float t;
    t = 0.00000345388845f;
    // Без f в конце компилятор попытается записать число 0.00000345388845
    // Как число типа double в переменную типа float
    std::cout<<std::endl<< t <<std::endl;
    std::cout<< std::setprecision(32);
    std::cout<< t <<std::endl;
    std::cout<< std::setprecision(14);
    std::cout<< t <<std::endl;

    double r;
    r = 0.00000345388845;
    std::cout<<std::fixed; //Функция переходящая из экспоненциального формата
                           //К фиксированному формату
    std::cout<< std::setprecision(19);
    std::cout<< r << std::endl;

    std::cout.unsetf(std::ios::floatfield);
    std::cout<< std::setprecision(6)<<std::endl;

    return 0;
}
