#include <stdio.h>
#include <stdarg.h>
#include "h_01.h"

double addNumbers(int, ...);

int main()
{
    int a = 10;
    printf("result: %.2lf", addNumbers(3, 2.5, 4.0, 4.0));
}