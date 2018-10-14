#include <iostream>
#include <cmath>
#include "loops.h"
#include "task_begin.h"
#include "math_funcsions.h"
using namespace std;
int sum_pow(int first,int last)
{
    int result=0;
    for(;first<last;++first)
    {
        result=result+pow_2(first);
    }
    return result;
}
double sum_fructions(int first,int last)
{
    double  result=0;
    for(;first<last;++first)
    {
        result=result+(1.0/first);
    }
    return result;
}
int main()
{
    /*int res1=perimeter(6);
    int res2=perimeter(7,5);
    int res3=square(3,4);
    int res4=valume_parallelepiped(4,5,9);
    cout<<res4<<endl;
    cout<<res3<<endl;
    cout<<res1<<endl;
    cout<<res2<<endl;
    print_number(7,4);
    print_sequence(1,8);
    print_reverse_sequence(8,1);
    print_price(1,10,4);
    print_price(1,10,4,2);
    print_price(0.1,1.0,4.0,0.1);

    int res7=sum_numbers(1,10);
    std::cout<<res7<<std::endl;
    int res8=multiply_numbers(1,10);
    std::cout<<res8<<std::endl;

    print_table_x(5,1,10);*/
    int res10=sum_pow(1,10);
    std::cout<<res10<<std::endl;
    double res11=sum_fructions(1,4);
    std::cout<<res11<<std::endl;
    return 0;

}
