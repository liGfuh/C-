#include <iostream>

int main()
{
    int  x = 7 ;
    int  y = 4 ;
    std::cout<<"double(x) / int(y) = "<<static_cast<double>(x) / y<<"\n";
    std::cout<<"int(x) / double(y) = "<<x / static_cast<double>(y)<<"\n";
    std::cout<<"int(x) / int(y) = "<<x / y<<"\n";
    std::cout<<"static_cast<double>(x / y) = "<< static_cast<double>(x / y)<<"\n";
    /* Если \n просто переносит ввод на следующую строку
       то std::endl сначала вставляет \n а потом вызывает
       std::flush для очистки буффера
    */
    //Интересно знать, static_cast<>() - это именованный оператор приведения тип
    return 0;
}
