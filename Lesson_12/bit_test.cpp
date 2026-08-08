#include <iostream>
#include <bitset>

int bitcon(int);

int bitcon(int a)
{
    if(a == 0)
      return 0;
    int b{};
    int half{};
    while (a != 0)
    {
        b |= (a & 1) << half++;
        a/=10;
    }
    return b;
}

int main()
{
    std::cout<<(5 > 3 && 4 < 8)<<"\n";
    std::cout<<(4 > 6 && true)<<"\n";
    std::cout<<(3 >= 3 || false)<<"\n";
    std::cout<<((true || false) ? (4) : (5))<<"\n";

    std::cout<<static_cast<double>(7)/static_cast<double>(4)<<"\n";
    std::cout<<14 % 5<<"\n\n\n";

    std::cout<<bitcon(1101)<<"\n";
    std::cout<<bitcon(101110)<<"\n";


    return 0;
}
