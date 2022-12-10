#include <stdio.h>
#include <stdarg.h>

double average(double v1, double v2, ...);

int main()
{
    double v1 = 10.5, v2 = 2.5;
    printf("Average = %.2lf\n", average(v1, 3.5, v2, 4.5, 0.0));
}

double average(double v1, double v2, ...)
{
    va_list parg;

    double sum = v1 + v2;
    double values = 0.0;
    int count = 2;

    va_start(parg, v2);

    while ((values = va_arg(parg, double) != 0.0))
    {
       sum += values;
       printf("%d\n", count);
       ++count;
    }

    va_end(parg);
    return sum/count;
}