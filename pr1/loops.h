#ifndef LOOPS_H_INCLUDED
#define LOOPS_H_INCLUDED
#include <iostream>

int sum_numbers(int first, int last)//for7
{
    int result=0;
    for(; first<last; ++first)
    {
        result=result+first;//result+=first
    }

    return result;
}
int multiply_numbers(int first, int last)//for7-multiply
 {
     int result=1;
     for(;first<last;++first)
     {
         result*=first;
     }
     return result;
 }
void print_price(int first,int last,int price)//for4
{
    for(; first<last; ++first)
    {
        std::cout<<first<<" kg "<<first*price<<" rub "<<std::endl;
    }
}
void print_price(int first,int last,int price,int step)//for4 second
{
    for(; first<last; first=first+step)
    {
        std::cout<<first<<" kg "<<first*price<<" rub "<<std::endl;
    }
}
void print_price(double first,double last,double price,double step)//for5-6
{
    for(; first<last; first+=step)
    {
        std::cout<<first<<" kg "<<first*price<<" rub "<<std::endl;
    }
}
void print_number(int number,int times)//for1
{
    for(int i=0;i<times;++i)
    {
        std::cout<<number<<"_";

    }
    std::cout<<std::endl;
}
void print_sequence(int first,int last)//for2
{
    int temp=first;
    for(;first<last;++first)
    {
        std::cout<<first<<" ";

    }
    std::cout<<std::endl;
    std::cout<<last-temp<<std::endl;
}
void print_reverse_sequence(int first, int last)//for3
{
    int temp=first;
    for(;first>last-1;--first)
    {
        std::cout<<first<<"_";
    }
    std::cout<<std::endl;
    std::cout<<temp-last<<std::endl;
}

#endif // LOOPS_H_INCLUDED
