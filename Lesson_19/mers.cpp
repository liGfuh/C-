#include <iostream>
#include <random>

void consol();

#ifdef _WIN32
    #include <windows.h>
#endif // _WIN32

void consol()
{
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    #else
        setlocale(LC_ALL, "");
#endif // _WIN32
}

int main(void)
{
    consol();

    std::random_device rd;
    std::mt19937 mersenne(rd());

    std::cout<<"Генератор 'Вихрь мерсена' :";
    std::cout<<mersenne();

    return 0;
}
