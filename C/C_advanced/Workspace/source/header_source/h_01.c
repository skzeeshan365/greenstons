#include "h_01.h"
#include <stdarg.h>

double addNumbers(int numberOfArguments, ...)
{
    double sum = 0;

    va_list parg;
    va_start(parg, numberOfArguments);

    va_list parg1;
    va_copy(parg1, parg);

    for (int i = 0; i < numberOfArguments; i++)
    {
        sum += va_arg(parg, double);
    }
    va_end(parg);

    for (int i = 0; i < numberOfArguments; i++)
    {
        sum += va_arg(parg1, int);
    }
    va_end(parg1);

    return sum;
}