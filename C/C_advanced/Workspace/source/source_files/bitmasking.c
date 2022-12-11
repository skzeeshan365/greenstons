#include <stdio.h>
#include "binarysystem.h"

typedef struct bitmasking {
    unsigned short int :5;
    unsigned short int a:1;
    unsigned short int b:2;
    unsigned short int n:8;
} bitmask;

void check(int, int, char);

void bitfields()
{
    bitmask bitmask;
    bitmask.n = 8;
    printf("%d\n", bitmask.n);
    printf("%d", sizeof(bitmask));
}

int main()
{
    int a, b;
    int flag;
    int MASk;
    char c;

    scanf("%d", (printf("Enter flag value: "), &a));
    scanf("%d", (printf("Enter MASK value: "), &b));

    scanf(" %c", (printf("Enter operator: "), &c));

    flag = binaryToDecimal(a);
    MASk = binaryToDecimal(b);

    printf("flag: %lld\nMASK: %lld\n", decToBinary(flag), decToBinary(MASk));

    /* if ((flag & MASk) == MASk)
    {
        printf("REUSLT: true");
    } else
    {
        printf("REUSLT: false");
    } */

    /* bitfields(); */

    check(flag, MASk, c);
}

void check(int flag, int MASk, char c)
{
    switch (c)
    {
    case '|':
        flag = flag | MASk;
        break;
    case '&':
        flag = flag & MASk;
        break;
    case '^':
        flag = flag ^ MASk;
        break;
    case '-':
        flag = flag - MASk;
        break;
    default:
        printf("Invalid operator");
        break;
    }
    printf("REUSLT: %lld", flag);
}