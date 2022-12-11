#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char x[] = "20005040 this is test 4544", *ptr;

    printf("%ld\n", strtol(x, &ptr, 10));
    printf("%s", ptr);
}