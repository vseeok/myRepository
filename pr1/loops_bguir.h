#ifndef LOOPS_BGUIR_H_INCLUDED
#define LOOPS_BGUIR_H_INCLUDED
#include <iostream>


double sum_values(int first,int last,int x)
{
    double result=0;
    for(;first<last;++first)
    {
        result+=f1(x,first);
    }
    return result;

}
void print_table_x(double n,double first,double last)
{
    double step=(last-first)/10.0;
    for(;first<last;first+=step)
    {
        std::cout<<sum_values(1,n,first)<<std::endl;
    }
}
#endif // LOOPS_BGUIR_H_INCLUDED
