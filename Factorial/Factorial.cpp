
#include "include.h"
#include "Factorial.h"


int factorial::factorial(int value)
{
    for(int a = 1;a <= value; a++)
    {

        factorial=factorial*a;

    }
    return factorial;
}
