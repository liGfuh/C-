#include <iostream>
#include <iomanip>
#include <cmath>

bool eps(float, float);

bool eps(float a, float b)
{
    return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * 1e-16);
}

int main()
{
    float d1{}, d2{};
    std::cin >>d1 >>d2;
    std::cout<<std::boolalpha<<eps(d1, d2);
    return 0;
}
