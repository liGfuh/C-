#include <iostream>
#include <cstdint>
#include "constants.h"

using namespace myConstants;

int height();
void flywhell(int, double);

int height()
{
   std::cout<<"Enter the initial height of the tower in meters: ";
   int h{};
   std::cin >> h;
   return h;
}

void flywhell(int time, double heig)
{
    if(heig <= 0.0)
        std::cout<<"At "<<time<<" seconds, the ball is on the ground.";
    else
    {
        std::cout<<"At "<<time<<" seconds, the ball is at height: "<< heig <<" meters"<<std::endl;
        flywhell(time+1, heig - gravity*time - gravity/2);
    }

}

int main()
{
    int heig { height() };
    flywhell(0, heig);
    return 0;
}
