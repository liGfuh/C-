#include <iostream>

int readNumber();
void writeAnswer(int);

int readNumber()
{
    int x = 0;
    std::cin >> x;
    return x;
}

void writeAnswer(int Answer)
{
    std::cout<< Answer;
}

