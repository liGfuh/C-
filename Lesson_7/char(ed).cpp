#include <iostream>

int main()
{
    char ch1 = 97;
    char ch2('a');
    std::cout<<ch1<<"  "<<ch2<<std::endl;
    std::cout<<'a'; // Запись где между '' больше одново символа является
                    // не правильной


    int i(ch1);
    std::cout<<std::endl<<i<<std::endl;
    return 0;
}
