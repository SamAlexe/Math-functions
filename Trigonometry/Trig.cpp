
#include "include.h"
#include "factorial.h"

float trig::funcsin(int value)
{
    sum = 0;
    //summation
    factorial fac;
    for(int i = 0; i < INFINITY; i++)
    {
        dom = pow(value, 2*i - 1); 
        num = 2 *i+ 1
        num = fac.factorial(num);
        sum += (dom/num);
    }
    return sum;
}
float trig::funccos(int value)
{
    factorial fac;
    sum = 0;
    for(int i = 0;i < INFINITY;i++)
    {
        dom = pow(value, 2*i);
        num = 2*i;
        num = fac.factorial(num);
        sum += pow((-1), i) * (dom/num);
    }
    return sum;
}
float trig::functan(int value)
{
    trig s;
    int sum = 0;
    for(int i = 0;i < INFINITY;i++)
    {   
        int sinx = s.funcsin(x);
        int cosx = s.funccos(x);
        sum = sinx/cosx;
    }
    return sum;
    
}
