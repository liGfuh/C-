#include <iostream>
#include <cmath>

#ifdef _WIN32
  #include <windows.h>
#endif // _WIN32

constexpr double pi = 3.1415;

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

int main()
{
    consol();
    bool num{0};
    while(num ^ 1)
        {
            std::cout<<"¬ы хотите прекратить работу цикла? 1 или 0"<<'\n';
            std::cin >> num;
        }

    std::cout<<"\n\n\n";

    constexpr int cx = 50 / 2;
    constexpr int cy = 50 / 2;

    for(int y{0}; y != cy*2; y++)
    {
        for(int x{0}; x != cx*2; x++)
        {
        if(x == 0 && y != 0)
        {
            std::cout<<"@ ";
            continue;
        }
        else if(x == 0 || y == 0)
        {
            std::cout<<"@ ";
            continue;
        }
        if(x == 49 || y == 49)
        {
            std::cout<<"@ ";
            continue;
        }

        if ((x-cx) == 0 && (y - cy) == 0)
        {
            std::cout << "# ";
            continue;
        }

        double r = std::sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));
        double phi = std::atan2((y - cy), (x - cx));

        if
        (
         std::abs(r - 0.8 *
                 (phi + 2.0 * pi *
                  std::floor((r / 0.8 - phi) /
                 (2.0 * pi) + 0.5))) < 0.5)
        {
            std::cout << "# ";
        }
        else
        {
            std::cout << "  ";
        }
        }
        std::cout<<'\n';
    }
    return 0;
}
