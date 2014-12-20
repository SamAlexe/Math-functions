
#include "include.h"

float trig::funcsin(int value)
{
    sum = 0;
    //summation
    for(int i = 0; i < INFINITY; i++)
    {
        dom = pow(value, 2*i - 1); 
        num = 2 *i+ 1
        num = factorial(num);
        sum += (dom/num);
    }
    return sum;
}
float trig::funccos(int value)
{
    sum = 0;
    for(int i = 0;i < INFINITY;i++)
    {
        dom = pow(value, 2*i);
        num = 2*i;
        num = factorial(num);
        sum += pow((-1), i) * (dom/num);
}
float trig::functan()
{

}
