#include <stdio.h>

/* enum boolean {false, true} check; */

/* #define test() printf("jgnjng") */

int main()
{
    /* check = false;

    if (check)
    printf("true");
    else
    printf("false"); */

    /* test(); */

    /* FILE *fptr;
    int c;

    fptr = fopen(__FILE__, "r");

    do
    {
        c = getc(fptr);
        putchar(c);
    } while (c != EOF);

    fclose(fptr); */

    /* int year;
    printf("Enter new year: ");
    scanf("%d", &year);

    if (year % 400 == 0 )
    {
        printf("a leap year");
    } else if (year % 100 == 0)
    {
        printf("not a leap year");
    } else if (year % 4 == 0)
    {
        printf("a leap year");
    } else
        printf("not a leap year"); */

    /* int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (a != b)
    {
        if (a > b)
        a -= b;
        else 
        b -= a;
    }
    
    printf("%d", a);
    return 0; */

    int a, b, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /* max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("the LCM is: %d", max);
            break;
        }
        ++max;
    }
    return 0; */

    int gcd, lcm;

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
        
    }

    lcm = (a*b)/gcd;
    printf("LCM is: %d", lcm);
    
}