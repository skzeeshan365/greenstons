#include <stdio.h>

int main()
{
    const int data[5] = {1, 2, 3, 4, 5};

    int i = 0, sum = 0;

    for (i = 0; i >= 0; i++)
    {
        sum += data[i];
    }

    printf("%d\n", sum);
    
}