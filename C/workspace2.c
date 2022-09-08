/* #include <stdio.h>
#define MULTIPLY(a, b) (a) * (b)
int main()
{
    // The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
    printf("%d", MULTIPLY(2 + 3, 3 + 5));
    return 0;
} */

/* #include <stdio.h> */

/* float div(float, float);
#define div(x, y) x / y */

/* int main()
{
    // use of macro div
    // Note: %0.2f for taking two decimal value after point
    printf("%0.2f", div(10.0, 5.0));
// removing defined macro div
#undef div
    // function div is called as macro definition is removed
    printf("\n%0.2f", div(10.0, 5.0));
    return 0;
}

// div function definition
float div(float x, float y) { return y / x; } */

#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // read string
    printf("Name: ");
    puts(name); // display string
    return 0;
}