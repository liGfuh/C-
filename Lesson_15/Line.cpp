#include <iostream>
#include <string>

int main(void)
{
    std::cout<<"Enter"<<'\n';
    std::string name{};
    std::cin >> name;
    //std::cin - является потоком данным который хранится в буффере весом
    // 1024 байт
    // Он как и всё в C++ не очищается самостоятельно
    // поэтому, когда функция getline начинает читать буффер
    // она читает с место где закончил cin то есть с Enter - \n
    // и отправляет нам \n
    // getline является строковой функцией

    std::cout<<"Ha: "<<name<<"\n";
    std::string age{};

    std::cin.ignore(32767, '\n');
    // Чтобы не происходило ошибки с вводом getline
    // мы просим поток cin игнорировать \n в новой строке
    // функция ignore прекратит свою работу как только она встретит
    // \n

    std::getline(std::cin, age);

    std::cout<<":"<<","<<age<<'\n';
    return 0;
}
