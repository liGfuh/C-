#include <iostream>
#include <cstdlib>

int main()
{
    bool b1 = true;
    // bool b1(false);
    // bool b1{ true };
    b1 = false;
    b1 = !false;
    //bool b1(!false);
    // оператор НЕ '!'

    std::cout<< std::endl<< b1<<" "<<std::boolalpha<< b1<<std::endl<<std::endl;
    // Функция


    //if() - else - функция условие, если () - выполнено то if, если нет то else
    if(true)
       std::cout<< "The condition is true!" <<std::endl;
    else
       std::cout<< "The condition is false" <<std::endl;

    if(!b1)
       std::cout<<" b1 is false"<< std::endl;
    else
       std::cout<<" b1 is true"<<std::endl;

    int x = 4;
    if(x == 0)
        std::cout<<"4"<<std::endl;
    else
        std::cout<<"0"<<std::endl;
    return 0;
}
