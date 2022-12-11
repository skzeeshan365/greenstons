// Pointers

#include <stdio.h>

/* void check(int *ptr, int *b){
    int a = 5;
    b = &a;
    ptr = b;
    printf("value of passed: %lld\nAddr: %lld\n", *ptr, ptr);
}

int main()
{
    int a = 10, *ptr2 = NULL;
    ptr2 = &a;

    check(ptr2, &a);;
    printf("value of after: %lld\nAddr: %lld\n", *ptr2, ptr2);
} */

void check(int **ptr)
{
    int a = 5;
    *ptr = &a;
    printf("value of passed: %lld\nAddr: %lld\n", **ptr, ptr);
}

int main()
{
    int a = 10, *ptr2 = NULL;
    ptr2 = &a;

    check(&ptr2);
    ;
    printf("value of after: %lld\nAddr: %lld\n", *ptr2, ptr2);
}