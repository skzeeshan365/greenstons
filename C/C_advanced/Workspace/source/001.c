#include <stdio.h>
#include <stdarg.h>
#include "h_01.h"

int main()
{
    printf("result: %.2lf\n", addNumbers(3, 2.5, 4.0, 4.0));
    warning("h %d", 5);
}