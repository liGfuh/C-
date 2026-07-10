#include <iostream>

void doPrint();
int return7();
void returnNo();
int getValueNumber();


void doPrint(void)
{
    std::cout<<"In doPrint()"<< std::endl;
}
// Слово перед названием функции имеет смысл в том
// что это данные которые ожидаются в обязательном порядке
// после окончания работы функции

int return7(void)
{
    return 7;
    return 8;
}

void returnNo(void)
{
    std::cout<<"No";
}

int getValueNumber(void)
{
    std::cout<<"an integer: ";
    int x = return7();
    return x;
}

int main()
{
    std::cout<<"Starting main()"<<std::endl;
    doPrint();
    /*
      Вызов функции doPrint
    */
    std::cout<<"Ending main()"<<std::endl;

    std::cout<<std::endl<<std::endl<< return7()<<std::endl;
    std::cout<<return7() + 3<<std::endl;


    int a = getValueNumber();
    std::cout<<a<<std::endl;
    returnNo();
    return 0;
}
