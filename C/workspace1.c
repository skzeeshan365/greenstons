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

    FILE *fptr;
    int c;

    fptr = fopen(__FILE__, "r");

    do
    {
        c = getc(fptr);
        putchar(c);
    } while (c != EOF);

    fclose(fptr);
    
}