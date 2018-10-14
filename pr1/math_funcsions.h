#ifndef MATH_FUNCSIONS_H_INCLUDED
#define MATH_FUNCSIONS_H_INCLUDED
#include <cmath>

double f1(int x,int i)
{
    return std::sin(i*x)+std::pow(std::cos(i),2);
}
int pow_2(int a)
{
    return a*a;
}
#endif // MATH_FUNCSIONS_H_INCLUDED
