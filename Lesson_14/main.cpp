#include <iostream>

namespace boo
{
    namespace doo
    {
      int doOperation(int a, int b);
    }
}


int main(void)
{
    int q{}, w{};

    std::cin >>q >>w;

    std::cout<< boo::doo::doOperation(q, w)<<"\n";

    return 0;
}
