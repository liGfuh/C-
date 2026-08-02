#include <iostream>

int main()
{
    int x{};
    std::cin >>x;
    bool b {x > 100};
    std::cout<<((b) ? !true : false)<<"\n";

    if( !(x > 102) || ((x < 88) && b))
        std::cout<<"true";
    else
        std::cout<<"false";
    return 0;
}
