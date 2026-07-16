#include <iostream>
//#define PRINT
/*
 #include <filename> - сообщает препроцессору искать файл в системных путях
 #include "filename" - cообщает препроцессору искать файл в текущей директории
                                                                        проекта
*/

int add(int x, int y);

int add(int x, int y)
{
  #ifdef PRINT
   std::cout<< "Good Job ;) ";
  #endif // PRINT
    return x+y;
}
