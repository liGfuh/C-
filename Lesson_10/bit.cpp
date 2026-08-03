#include <iostream>

unsigned long long int bitremember(unsigned long long int);
unsigned long long int rememberbit(unsigned long long int);
void printbit(unsigned long long int);
void printbitrec(unsigned long long int);

unsigned long long int bitremember(unsigned long long int a)
{
    unsigned long long int k{0};
    unsigned long long int half{1};
    while(a != 0)
    {
        k+=(a%10) * half;
        a/=10;
        half*=2;
    }
    return k;
}

unsigned long long int rememberbit(unsigned long long int a)
{
    if(a == 0)
    {
        //std::cout<<"0 0 0 0 \n\n";
        return 0;
    }
    //int half{0};
    unsigned long long int k{0};
    unsigned long long int dih{1};
    while(a != 0)
    {
        k = k + (a % 2)* dih;
        dih*=10;
        a/=2;
    }
    //std::cout<<half<<" "<<k<<"\n";
    /*half = 4-half%4;
    //std::cout<<half<<"\n";
    while(half != 0 && half != 4)
    {
        //std::cout<<"0 ";
        half--;
    }*/

    /*do
    {
       if(k%10 == 2)
       {
          std::cout<<" ";
       }
       if(k%10 == 3 || k%10 == 1)
       {
        std::cout<<"0 ";
       }
       else
       {
        std::cout<<"1 ";
        a*=10;
       }
       k/=10;
    }
    while(k != 0); */
    //std::cout<<"\n";
    return k;

}

void printbitrec(unsigned long long int a)
{
    if (a == 0)
    {
        return;
    }
    printbitrec(a / 2);
    std::cout << (a % 2);
}

void printbit(unsigned long long int a)
{
    if (a == 0)
    {
        std::cout << 0;
        return;
    }
    printbitrec(a);
}

//Функция для перевода числа в двоичных вид

int main()
{
    unsigned long long int b;
    //if(std::cin >>b)
    //{
    //   std::cout<<"\n\n"<<rememberbit(b)<<"\n\n"<<bitremember(rememberbit(b));
    //}
    //std::cout<<"\n\n";
    std::cin >>b;
    printbit(b);
    return 0;
}

// Пределом конвентора ялвяется 1.048.575
// Предел вывода 18.446.744.073.709.551.615
