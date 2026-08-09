#include <iostream>

// Объявление глобальной переменной
int g_mode;

void doSomething()
{
    g_mode = 2; // присваиваем глобальной переменной g_mode значение 2
}

int main()
{
    g_mode = 1; // примечание: Здесь мы присваиваем глобальной переменной g_mode значение 1. Это не объявление локальной переменной g_mode!

    doSomething();

    // Программист по-прежнему ожидает, что g_mode будет 1.
    // Но функция doSomething() изменила значение этой переменной на 2!

    if (g_mode == 1)
        std::cout << "No threat detected.\n";
    else
        std::cout << "Launching nuclear missiles...\n";

    return 0;
}

/*

void boo()
{
    // Некоторый код

    if (g_mode == 4) // делаем что-нибудь полезное
}

*/
