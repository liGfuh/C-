#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int a = 0;
    std::cin >> a;
    // Это объект бибилиотеки iostream который присваивает новое значение для a
    std::cout<<"You entered "<< a <<std::endl;
    return 0;
}

