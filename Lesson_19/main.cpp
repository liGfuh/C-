#include <iostream>
#include <cstdlib>
#include <ctime>

#ifdef _WIN32
   #include <windows.h>
#endif // _WIN32

void consol();

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
    int a{};
    std::cout<<"Введите некоторое целое значение: "<<'\n';

    std::cin >> a;
    std::cout<<'\n';

    srand(static_cast<unsigned int>(time(NULL)));// устанавливаем начальное значение
                                    //1 января 1970 года
    std::cout<<"Вот ваше уникальное значение: ";
    std::cout<<rand()%11<<'\n';
    // %11 даёт диапозон генерации по формуле " от '+n' до 'N+1-n' "
    // то есть запись (rand()%95 + 6) даст диапозон от 6 до 100;

    consol();
    return 0;
}
