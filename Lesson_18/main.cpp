#include <iostream>
#include <iomanip>
#include <string>

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
    bool num{};
    std::string a;
tryi:
/*
goto - выполняет переход обратно к лейблу

Спаггети-код - это код, порядок выполнения которого напоминает тарелку со
спагетти

*/
    std::cout<<"Введите число которое хотите ввести: ";
    std::cin >> a;

    std::cout<<'\n'<<"Это то число которое вы хотели ввести?"<<'\n';
    std::cout<<"Введите 1 если да и 0 если нет"<<'\n';
    std::cin>> num;
    if(num ^ 1)
        goto tryi;
    std::cout<<'\n'<<"Хорошего дня: "<<a;
    if(a.find('.') != std::string::npos)
    {
      double b = std::stod(a);
      std::cout<<'\n'<<a<<" - 9 = "<<b - 9;
    }
    else
    {
      int x =  std::stoi(a);
      std::cout<<'\n'<<x<<" - 9 = "<<x - 9;
    }
    return 0;
}
