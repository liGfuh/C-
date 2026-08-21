
#include <iostream>
#include <string>
#include <sstream>

#ifdef _WIN32
    #include <windows.h>
#endif // _WIN32

auto vvod() -> int;
auto consol() -> void;

void consol()
{
    #ifdef _WIN32
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);
    #else
        setlocale(LC_ALL, "");
    #endif // _WIN32
}

auto vvod() -> int
{
    std::string input;
    int a{};

    while(true)
    {
        std::cout << "Введите целое значение: ";
        std::getline(std::cin, input);

        std::stringstream ss(input);

        char remain;
        if (ss >> a && !(ss >> remain))
        {
            return a;
        }
        else
        {
            std::cout << "Ошибка! Это не целое число. Попробуйте снова.\n";
        }
    }
}

int main(void)
{
    consol();

    int a = vvod();
    std::cout << "Вы ввели целое число: "<<a;

    return 0;
}
