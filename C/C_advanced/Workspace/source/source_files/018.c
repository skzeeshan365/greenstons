#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* int n = 2;

    int len = n * 2 - 1;
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            int min = i < j ? i : j;

            if (min < len - i)
                min = min;
            else
                min = len - i - 1;
                
            if (min < len - j - 1)
                min = min;
            else
                min = len - j - 1;
            printf("%d ", n - min);
        }
        printf("\n");
    } */

    int n = 4;
    int len = 2*n-1;
    int start = 0, end = len - 1;

    int data[len] [len];

    while (n != 0)
    {
    for (int i = start; i <= end; i++)
    {
        for (int j = start; j <= end; j++)
        {
            if (i == start || i == end || j == start || j == end)
            {
                data[i] [j] = n;
            }
        }
    }
    ++start;
    --end;
    --n;
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    } 

   /*  int n, sum = 0, *ptr = NULL;
    n = getchar();  
    
    ptr = (int *) malloc(n * sizeof(int));
    
    if (ptr == NULL) {
        perror("Memory not allocated");
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr+i);
    }
    
    for (int i = 0; i < n; i++) {
        sum += *(ptr+i);
    }
    free(ptr);
    printf("%d", sum); */
    
}