#include <iostream>

#ifdef _WIN32
 #include <windows.h>
#endif // _WIN32

//void consol();

/*
void consol()
{
#ifdef _WIN32
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
#else
   setlocale(LC_ALL, '');
#endif
}
*/

struct Number_Oper
{
    int a{}, b{};
    char znak{};
};

int fun(Number_Oper);

int fun(Number_Oper y)
{
    switch(y.znak)
    {
        case '+':
            return y.a + y.b;
            break;
        case '-':
            return y.a - y.b;
            break;
        case '*':
            return y.a * y.b;
            break;
        case '/':
            if(y.b == 0)
                return -1;
            return static_cast<int>(y.a/y.b);
            break;
        case '%':
            return y.a%y.b;
            break;
        default:
            return -1;
            break;
    }
}

int main(void)
{
    //consol();
    Number_Oper x;
    std::cin >> x.a >> x.b >> x.znak;

    std::cout<<fun(x);

    return 0;
}
