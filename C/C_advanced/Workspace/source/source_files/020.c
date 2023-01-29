//Program fibonacci series
#include <stdio.h>

//Method 1
int fib(int n) {
    int a = 0, b = 1;

    if (n == 0)
    return 0;
    else if (n == 1)
    return 1;
    else
    return (fib(n-1) + fib(n-2));
}

//Method 2
void fib1(int n) {
    int a = 0, b = 1;

    printf("%d\n%d\n", a, b);

    if (n == 1)
    printf("%d\n", 1);
    else {
        for (size_t i = 2; i < n; i++)
        {
            int c = a + b;
            a = b;
            b = c;
            printf("%d\n", c);
        }
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    //Method 1
    /* for (size_t i = 0; i < n; i++)
    {
        printf("%d\t", fib(i));
    } */

    //Method 2
    fib1(n);
}