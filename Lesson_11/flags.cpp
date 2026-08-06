#include <iostream>

int main()
{
    // Давно хотелось затронуть тему связанную с флагом-ошибки
    // [-Werror=unused-variable]
    // Он ругается на те случаи когда, что-то объявлено но не используется
    // Чтобы его решить надо написать в начале объявления либо
    // [[maybe_unused]]..
    // Либо ниже объявить в локальном поле функцию фида
    // (void)optional1; ну в общем (void) и после пишем.

    // идентификатор который мы никак не используем
    const unsigned char option1 = 0x01;
    (void)option1;
    const unsigned char option2 = 0x02;
    (void)option2;
    const unsigned char option3 = 0x04;
    (void)option3;
    const unsigned char option4 = 0x08;
    (void)option4;
    const unsigned char option5 = 0x10;
    (void)option5;
    const unsigned char option6 = 0x20;
    (void)option6;
    const unsigned char option7 = 0x40;
    (void)option7;
    const unsigned char option8 = 0x80;
    (void)option8;

    unsigned char myflags = 0;
    // Это всё отдельные биты в одном байте.

    myflags |= option7;
    std::cout<<myflags<<"\n";

    myflags = ((myflags & ~option7) | option1) | option8;
    std::cout<<myflags<<"\n";

    (myflags &= ~0x40) &= ~0x01;
    std::cout<<myflags;
    return 0;
}
