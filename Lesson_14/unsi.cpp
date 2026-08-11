#include <iostream>
#include <typeinfo>

//using namespace std; - "using-директива"
// using-стэйтменты - нельзя отменить

int main(void)
{
    using std::cout; // "using - объявление"

    {
    setlocale(LC_ALL, "RUS");
    cout<<"Привет, мир"<<"\n";


    int a = (int)(3.14);
    unsigned long b = 0;
    cout<<typeid(3+3e-3).name()<<" "<<3 + 3e-3<<"\n";
    cout<<typeid(a + b).name()<<" "<<a + b<<"\n";
    }

    return 0;
}
