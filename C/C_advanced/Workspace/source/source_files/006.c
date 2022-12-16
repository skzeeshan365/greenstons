#include <stdio.h>
#include <stdlib.h>

typedef int (* func) (int, int);

int sub(int a, int b)
{
    return a - b;
}

int add(int a, int b)
{
    return a + b;
}

typedef struct check
{
    int a, b;
    func fuck;
} check;

int main()
{
    check test;
    test.a = 5;
    test.b = 10;

    test.fuck = add;
    test.fuck(test.a, test.b);

    printf("%d", test.fuck(test.a, test.b));

        return 0;
}