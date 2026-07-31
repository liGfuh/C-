#include <iostream>
#include <cmath>
#include <iomanip>

constexpr double powi(double, long long);
constexpr double powi(int, long long);
constexpr double powi(int, int, long long);

constexpr double powi(double base, long long exp)
{
    if(exp < 0)
        return 1.0/powi(base, -exp);

    if(exp == 0)
        return 1.0;
    if(exp == 1)
        return base;

    double half = powi(base, exp/2);

    if(exp % 2 == 0)
       return half * half;
    else
       return base * half * half;
}

// Если вариант целочисленный то можно сделать следующую перегрузку powi()

constexpr double powi(int result, int base, long long exp)
{
    if (exp == 0)
        return result;
    return powi(
    (exp & 1) ? (result * base) : result,
     base * base,
     exp >> 1
    );
}

constexpr double powi(int base, long long exp)
{
    if (exp < 0)
        return 1.0 /powi(1, base, -exp);
    else
        return powi(1, base, exp);
}

static_assert(fabs(powi(2, -3) - 0.125) < 1e-16, "Ошибка: отрицательная степень посчитана неверно!");
//static_asserts является отладчиком ошибки
//В случае не выполнении условия будет выведенно сообщение


int main()
{
    std::cout<<std::fixed<<std::setprecision(16);
    constexpr double x = __builtin_pow(3.5, 4.0);
    /// Функция pow() компилятором заменяется на собственную __builtin_pow
    /// которая совместима с constexpr

    std::cout<<"3.5^4 = "<<x<<"\v";
    constexpr double y = powi(3.5, static_cast<long long >(4.0));
    //constexpr double z = y;
    std::cout<<"\a3.5^4 = "<<y<<std::endl;
    return 0;
}
