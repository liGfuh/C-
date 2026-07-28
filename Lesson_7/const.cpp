#include <iostream>

void print(const int);

void print(const int number)
{
    std::cout<<number<<std::endl;
}

int main()
{
    const double gr {9.8};
    int const grid {6};
    // const - просто неизменяемое значение;
    print(static_cast<int>(gr));
    print(static_cast<int>(grid));
    print(6);

    constexpr double sum = 4 + 5;
    std::cout<<sum<<std::endl;
/*
  Суть constexpr состоит в том, чтобы убрать ту часть кода которую можно
  сразу заменить на констатный литерал, то есть:

    Зачем мне хранить в итоговой версии кода .exe 4 + 5
     Если я могу его заменить сразу на 9

   При этой замене процессор более не тратит время на операцию 4+5
   Самое главное правило при его использовании: constexpr - можно использовать
   только если переменная не будет менять своё значение на протяжении всего кода

*/
    return 0;
}
