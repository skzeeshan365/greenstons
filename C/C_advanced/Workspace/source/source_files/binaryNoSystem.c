#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n);

int decToBinary(int);

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
}

int binaryToDecimal(long long n)
{
    int i = 0, rem, dec = 0;

    while (n != 0)
    {
        rem = n%10;
        n /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}

int decToBinary(int n)
{
    int i = 1, binary = 0, rem;

    while (n != 0)
    {
        rem = n%2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}