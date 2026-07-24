#include <iostream>
#include <cmath>

int main()
{
     //nan - не число
    //inf - бесконечность (+/-)
    //ind - неопределЄнность

    //std::cout<<5/0<<std::endl; - ошибка выполнени€
    double zero = 0.0;
    double posinf = 5.0 / zero;
    std::cout<< posinf <<std::endl;

    double neginf = -5.0 / zero;
    std::cout<< neginf <<std::endl;

    double nan = zero / zero;
    std::cout<< std::isnan(nan)<<" or "<< nan <<std::endl;

    //std::isnan() - функци€ определ€ющее наличие nan
    //если nan то 1 если нет nan то 0

    return 0;
}
