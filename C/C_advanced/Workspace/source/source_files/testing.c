#include <stdio.h>

int fibonacci(int);

int main()
{

    int i, j;

    printf("Enter no. of values to print: ");

    scanf("%d", &i);

    printf("The Fibonacci series of these numbers are: \n");

    for (j = 0; j < i; j++)
    {

        printf("%d ", fibonacci(j));
    }
}

int fibonacci(int num)
{

    if (num == 0)
        return 0;

    else if (num == 1)
        return 1;

    else
        return (fibonacci(num - 1) + fibonacci(num - 2));
}