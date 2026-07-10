#include <iostream>

int main()
{
 /*
    int a; // Целое число с названием a
    a = 8; // Присваение значения числу а значение 8
       a - является l - values
       8 - является r - values
    std::cout<<a; // Вывод числа с помощью стэйтмента вывода cout
*/

    int a = 6;
    a = a - 3;
    int b = a;
    std::cout<<b<<std::endl;
    std::cout<<a+b<<std::endl;
    std::cout<<a<<std::endl;
    int c;
    std::cout<<c<<std::endl; //Неиницилизированная переменная, может быть ошибкой
    return 0;
}
