#include <stdio.h>

int main()
{
    FILE *fptr;
    int c;

    fptr = fopen(__FILE__, "r");

    //Using NULL statement ";"
    for (; (c = getc(fptr)) != EOF; putchar(c));
    
    //Using normal loop
    do
    {
        c = getc(fptr);
        putchar(c);
    } while (c != EOF);

    fclose(fptr);
}