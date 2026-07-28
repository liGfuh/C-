#include <iostream>

int main()
{
    int i = -5U;
    unsigned int nValue = -5U;
// Суффиксы можно указывать и неверные, к примеру как
//  unsigned int nValue = -5L;
//  Суффикс влияет лишь на чтение даннах но никак не влияет на их исправление
//  для определённого типа
//
// То есть, если я напишу стэйтмент unsigned int nValue и использую копирующую
// инициализацию констатного литера 5.78 и использую для него суффикс L
// то суффикс не исправит ошибку инициализации целочисленного через
// рациональный констатный литерал и выдаст ошибку

    std::cout<<i<<std::endl;
    std::cout<<nValue<<std::endl;

    float f = 5.0f;
    double d = 6.02e23;

    std::cout<<f<<"    "<<d<<std::endl;

    std::cout<<"Hello, world!"<<std::endl;
    std::cout<<"Hello," "world!"<<std::endl;
    return 0;
}
