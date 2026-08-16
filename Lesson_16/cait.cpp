#include <iostream>

struct Advertising
{
    int obj{};
    double memer{};
    double mani{};
};

void dollar(Advertising);

void dollar(Advertising person)
{
    std::cout<<person.obj*(person.memer/100)*person.mani<<"$"<<'\n';
}

int main(void)
{
    Advertising ad = {
    (std::cin >> ad.obj, ad.obj),
    (std::cin >> ad.memer, ad.memer),
    (std::cin >> ad.mani, ad.mani)
    };

    dollar(ad);

    return 0;
}
