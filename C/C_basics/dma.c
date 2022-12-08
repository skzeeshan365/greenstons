#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5, n1 = 7, *ptr1, *ptr;
    
    ptr = (int *) malloc(5 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        *(ptr+i) = i;
        printf("Previous value: %d\n", *(ptr+i));
    }

    ptr1 = (int *) realloc(ptr, n1 * sizeof(int));

    printf("Previous addr: %d\n", ptr);
    printf("Current addr: %d\n", ptr1);

    for (int i = 0; i < n1; i++)
    {
        printf("Current value: %d\n", *(ptr + i));
    }
    

    free(ptr);
    return 0;
}