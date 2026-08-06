#include <iostream>

int main()
{
    std::cout<<3<<"\n";
    std::cout<<(3 << 3)<<"\n";
    std::cout<<(static_cast<long long int>(3) << static_cast<int>(1e1))<<"\n";
    std::cout<<(3 >> 10); //Лучше не совершать выход за поле битов.

    std::cout<<"\n"<<~4<<"\n";
    std::cout<<(static_cast<unsigned int>(~4))<<"\n";
    std::cout<<~(static_cast<unsigned int>(4))<<"\n";

    std::cout<<(1 & 2)<<"\n";
    std::cout<<(13 & 6)<<"\n";
    std::cout<<(13 & (~6))<<"\n";

    std::cout<<(1 | 4 | 6)<<"\n";
    std::cout<<(1 | (4 | 6))<<"\n";


    std::cout<<(6 ^ 3)<<"\n\n";

    int y{0};
    std::cin >> y;
    std::cout<<(y <<= 3)<<"\n";
    std::cout<<(y >>= 3)<<"\n";
    std::cout<<(y |= 3)<<"\n";
    std::cout<<"y: "<<y<<"\n";
    std::cout<<(y &= 3)<<"\n";
    std::cout<<"y: "<<y<<"\n";
    std::cout<<(y ^= 9)<<"\n";
    std::cout<<"y: "<<y<<"\n";
    return 0;
}
