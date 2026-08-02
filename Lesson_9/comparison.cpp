#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int x{}, y{};
    std::cin >>x >>y;
    std::cout<< std::boolalpha<< (x >= y) <<"\n";

    //Это через оператор () в данной ситуации
    //Хотя по большему делу тут во всём виноват приоритет

    // Кстати чтобы отключить boolalpha нужно написать noboolalpha
    if(x >= y)
        std::cout<<"true"<<"\n";
    else
        std::cout<<"false"<<"\n";



    // Порой много проблем вызывает сравнение переменных типа double или float

    double d1 = 10.0f, d2 = 1e3;
    double f1{}, f2{};

    std::cin >>f1 >>f2;
   /*
      Порой много проблем вызывает сравнение переменных типа double или float
    if(d1 == d2)

     Если написать == то такой флаг как [-Werror=float-equal] выдаст ошибку
     Это связано с устройством памяти с плавающей запятой
     Где могут возникать неприятные моменты
     Когда ты написал d1 = 0.01, а оказывается d1 = 0.01+1e-16
     Поэтому при сравнении типов double прибегают к сравнению abs(a - b) < e-16

        std::cout<<"d1 == d2"<<"\n";
    else
        std::cout<<"d1 != d2"<<"\n";
   */

    if(fabs(d1 - d2) <= 1e-6)
        std::cout<<"d1 == d2"<<"\n";
    else
        std::cout<<"d1 != d2"<<"\n";

    if(fabs(f1 - f2) <= 1e-6)
        std::cout<<"f1 == f2"<<"\n";
    else
        std::cout<<"f1 != f2"<<"\n";

    return 0;
}
