#include <stdio.h>

int main()
{
    float a, b;
    char c;

    printf("Enter to calculate: ");
    scanf("%f %c %f", &a, &c, &b);

    switch (c)
    {
    case '+':
        printf("Result: %.1f", a + b);
        break;
    case '-':
        printf("Result: %.1f", a - b);
        break;
    case '*':
        printf("Result: %.1f", a * b);
        break;
    case '/':
        printf("Result: %.1f", a / b);
        break;
    case 'x':
        printf("Result: %.1f", a * b);
        break;
    default:
    printf("Invalid operator");
        break;
    }
}