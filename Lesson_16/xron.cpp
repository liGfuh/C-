#include <iostream>

struct xron
{
    int a;
    int b;
};

void fun(xron, xron);

void fun(xron d1, xron d2)
{
    std::cout<<"\n"<<static_cast<int>((d1.a * d2.a)/(d1.b * d1.b))<<"\n";
}

int main(void)
{
    xron d1 = {
    (std::cin >> d1.a, d1.a),
    (std::cin >> d1.b, d1.b)
    };

    xron d2 = {
    (std::cin >> d2.a, d2.a),
    (std::cin >> d2.b, d2.b)
    };

    fun(d1,d2);
    return 0;
}
