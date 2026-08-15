#include <iostream>
#include <string>
#include <iomanip>

int main(void)
{
    setlocale(LC_ALL, "RUS");
    std::cout<<"Введите свой ФИО: ";

    std::string FIO{};
    std::getline(std::cin, FIO);

    std::cout<<'\n'<<"Введите свой полный возраст: ";
    int age{};
    std::cin >> age;

    std::cout<<"На каждую букву и пробел в своём ФИО вы прожили: ";
    std::cout<<std::fixed<<std::setprecision(3);

    std::cout<<(double)(age)/(double)(FIO.length());
    return 0;
}
