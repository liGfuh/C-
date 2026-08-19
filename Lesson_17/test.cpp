#include <iostream>
#include <string>

struct ENEMY
{
    std::string NAME{};
    int HEALTH{};
    std::string RACE{};
};

void printSTAT(const ENEMY&);

void printSTAT(const ENEMY& bb)
{
   std::cout<<"This "<<bb.RACE;
   std::cout<<" is named "<<bb.NAME;
   std::cout<<" and has "<<bb.HEALTH;
   std::cout<<" health"<<'\a'<<'\n';
}

namespace ARRAYY
{
    ENEMY ogre;
    ENEMY goblin;
    ENEMY skeleton;
    ENEMY orc = {("James"), 35, ("Orc")};
    ENEMY troll;
};

int main(void)
{
    printSTAT(ARRAYY::orc);

    return 0;
}
