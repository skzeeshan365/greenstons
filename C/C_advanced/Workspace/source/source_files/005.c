#include <stdio.h>
#include <stdlib.h>

int cmp (const void *, const void *);
int cmp1(const void *, const void *);

typedef int (* compare_ptr) (const void *, const void *);

int main ()
{
    compare_ptr comp;

    if (0)
    {
       comp = cmp1;
    } else
    {
       comp = cmp;
    }
    
    int x[5] = {1, 2, 5, 6, 3};

    qsort(x, 5, sizeof(int), comp);

    for (int i = 0; i < 5; i++)
    {
       printf("%d: %d\n", i+1, x[i]);
    }
    return 0;
}

int cmp (const void *x, const void *y)
{
    const int a1 = * (const int *) x;
    const int a2 = * (const int *) y;
    return a1 - a2;
}

int cmp1(const void *x, const void *y)
{
    const int a1 = *(const int *)x;
    const int a2 = *(const int *)y;
    return a1 + a2;
}