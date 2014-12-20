
#include "include.h"
#include "Factorial.h"


int factorial::factorial(int value)
{
    int factorial = 1;
    for(int a=1;a<=value;a++)
    {
        factorial = factorial*a;
    }
    return factorial;
}
