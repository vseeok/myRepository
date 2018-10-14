#ifndef TASK_BEGIN_H_INCLUDED
#define TASK_BEGIN_H_INCLUDED
#include <cmath>
#define PI 3.14

int perimeter(int a)
{
    return a*4;
}
int square(int a)
{
    return a*a;

}
int perimeter(int a,int b)
{
    return 2*a+2*b;
}
int square(int a,int b)
{
    return a*b;

}
double length(double deameter)
{
    return PI*deameter;
}
double cube_valume(double a)
{
    return pow(a,3);
}
double surface_area(double a)
{
    return square(a)*6;
}
double valume_parallelepiped(int a,int b,int c)
{
    return a*b*c;
}

#endif // TASK_BEGIN_H_INCLUDED
