#include <iostream>

#ifdef _WIN32
    #include <windows.h>
#endif // _WIN32

void consol();

void consol()
{
    #ifdef _WIN32
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
    #else
        setlocale(LC_ALL, "RUS");
    #endif // _WIN32
}

int main(void)
{
    consol();

    {

    bool a{0};

        while(!a)
        {
            std::cout<<"Привет!"<<'\n';
            std::cout<<"1 или 0 ?"<<'\n';
            std::cin >> a;
        }

    }

    return 0;
}

//breake - оператор завершения работы.

//continue - позволяет сразу перейти в конец тела цикла.


