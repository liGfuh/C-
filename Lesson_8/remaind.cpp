#include <iostream>

void isEven();

void isEven()
{
     std::cout<<"Привет, введи пожалуйста целое число: ";
      int a{};
      std::cin >>a;
    std::cout<<(a % 2 ? "Это число нечётное\n" : "Это число чётное\n");
}

int main()
{
    setlocale(LC_ALL, "RUS");
    isEven();
    return 0;
}
