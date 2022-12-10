#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>

jmp_buf buf;

int main()
{
    int i = setjmp(buf);
    printf("%d\n", i);

    i != 0 ? exit(0) : printf("i = 0\n");
    

    longjmp(buf, 2);
    printf("Test");
}