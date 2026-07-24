#include <iostream>
#include <cstdint>
#include <iomanip>

int main()
{
    /*std::int8_t g = 65;
      std::cout <<g;

      В зависимости от архитектуры компьютера стэйтмент std::intN_t может быть
      воспринят как тип char

    */

    setlocale(LC_ALL, "Russian");
    std::cout<<"long long: "<< sizeof(long long)<<" byte"<< std::endl;
    std::cout<<"long : "<< sizeof(long )<<" byte"<< std::endl;
    std::cout<<"int: "<< sizeof(int)<<" byte"<< std::endl;
    std::cout<<"long int: "<< sizeof(long int)<<" byte"<< std::endl;
    std::cout<<"int16_t: "<< sizeof(int16_t)<<" byte"<< std::endl;
    std::cout<<"uint16_t: "<< sizeof(uint16_t)<<" byte"<< std::endl;
    std::cout<<"int32_t: "<< sizeof(int32_t)<<" byte"<< std::endl;
    std::cout<<"int64_t: "<< sizeof(int64_t)<<" byte"<< std::endl;
    std::cout<<"int8_t: "<< sizeof(int8_t)<<" byte"<< std::endl;
    std::cout<<"bool: "<< sizeof(bool)<<" byte"<< std::endl;
    std::cout<<"short: "<< sizeof(short)<<" byte"<< std::endl;
    std::cout<<"unsigned int: "<< sizeof(unsigned int)<<" byte"<< std::endl;
    std::cout<<"float: "<< sizeof(float)<<" byte"<< std::endl;
    std::cout<<"double: "<< sizeof(double)<<" byte"<< std::endl;
    std::cout<<"long double: "<< sizeof(long double)<<" byte"<< std::endl;
    std::cout<<"void: 0 byte"<< std::endl;
    std::cout<<"char: "<< sizeof(char)<<" byte"<< std::endl;
    std::cout<<"wchar_t: "<< sizeof(wchar_t)<<" byte"<< std::endl;
    std::cout<<"char16_t: "<< sizeof(char16_t)<<" byte"<< std::endl;
    std::cout<<"char32_t: "<< sizeof(char32_t)<<" byte"<< std::endl<< std::endl;


    // Оператор sizeof() - унарный оператор определеяющий размер переменной или
    // типа дыннх в байтах
    return 0;
}
