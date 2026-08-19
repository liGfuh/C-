#include <iostream>
#include <cstdlib>

int main(void)
{
    std::cout<<5<<'\n';
    //exit(1); - полная остановка выполнения программы


// if() - условие ДА ? НЕТ
    int  num{};
    std::cin >> num;

    if(num & 1)
        std::cout<<6<<'\n';
    else if(num ^ 1)
        std::cout<<7<<'\n';

    if(num & 1)

    std::cout<<3<<'\n';

// swith() - условный оператор ветвления
    switch((num | num) & 1)
    {
        case 1:
        {
             std::cout<<"1";
             break; // заканчивает работу этой части кода
        }
        case 0:
             std::cout<<"0";
             break;
        default:
             std::cout<<-1;
    }
    std::cout<<-1;
    return 0;
}
