#include <iostream>
#include <string>

int main(void)
{
    std::string name{};
    std::getline(std::cin, name);

    std::cout<<name<<" has "<<name.length()<<'\n';
    // узнаём длинну строки которую ввели


    return 0;
}
