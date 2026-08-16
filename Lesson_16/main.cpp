#include <iostream>
#include <string>
#include <cstdint>

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

struct info
{
    std::string name{};
    int age{};
    /* static */ double heigth{};
    double mass = 1.0;
};

//double info::heigth{};

int main(void)
{
    std::cout<<" "<<sizeof(info)<<'\n'<<'\n';
    consol();
   static info information = {"", 0, 0.0, 0.0};
    using std::cout;

    cout<<"Yes, or No?"<<'\n';
    cout<<"Cout 1 или 0: "<<'\n';

    if(bool num; std::cin >> num && (num & 1))
    {
        cout<<"Ok"<<'\n';
        cout<<"Пожалуйста свои данные|"<<'\n';

        ((cout<<"Имя: "),(std::cin.ignore(347, '\n')),(std::getline(std::cin,information.name)));
        ((cout<<"Возраст: "),(std::cin >> information.age));
        ((cout<<"Рост: "),(std::cin >> information.heigth));
        ((cout<<"Вес: "),(std::cin >> information.mass));

        cout<<information.name<<'\n';
        cout<<information.age<<'\n';
        cout<<information.heigth<<'\n';
        cout<<information.mass<<'\n';
    }
    else
        cout<<"Oh";

    return 0;
}
