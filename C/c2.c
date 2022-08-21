#include <stdio.h>

int main()
{
    int n, n1;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter terms in table: ");
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++)
    {
        printf("%d X %d = %d \n", n, i, n*i);
    }

    return 0;
}