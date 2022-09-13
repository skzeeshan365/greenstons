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
#include <conio.h>
#include <stdlib.h>

/* struct tech
{
    int n;
}; */

void main()
{
    /* char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // read string
    printf("Name: ");
    puts(name); // display string */

    // int a = 10;
    // int x = 6;

    // int c;
    // scanf("%d", (printf("huhbhb\n"), &c));

    // printf("%d\n", c);
    // int a = 4565;

    // printf("%d", scanf("%d", &a));
    // printf("%d\n", sizeof(b));
    // printf("%d\n", sizeof(c));

    /* char c;
    c = getch();
    putch(c); */

    int *addr, n;
    char c;

    scanf("%d", (printf("Enter number of elements: "), &n));

    if (addr = (int *)calloc(n, sizeof(int)))
    {
        printf("Enter elements\n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (printf("Enter element %d: ", i + 1), addr + i));
        }
        printf("Elements of previous alloc:\n");
        for (int i = 0; i < n; i++)
        {
            printf("Element %d: %d\n", i + 1, *(addr + i));
        }

        printf("Do you want to add more elements? if yes Enter y else n:\n");
        scanf(" %c", &c);

        if (c == 'y')
        {
            scanf("%d", (printf("Enter number of elements: "), &n));
            addr = realloc(addr, n*sizeof(int));
            printf("Enter elements\n");
            for (int i = 0; i < n; i++)
            {
                scanf("%d", (printf("Enter element %d: ", i + 1), addr + i));
            }
            printf("Entered elements are:\n");
            for (int i = 0; i < n; i++)
            {
                printf("Element %d: %d\n", i + 1, *(addr + i));
            }
        } else {
            // printf("Entered elements are:\n");
            // for (int i = 0; i < n; i++)
            // {
            //     printf("Element %d: %d\n", i + 1, *(addr + i));
            // }
        }
        
    } else {
        printf("Error! memory not allocated.");
        exit(0);
    }
    free(addr);
    

    // struct tech tech, *tech_ptr;

    // tech_ptr = &tech;
    // tech_ptr->n = 7;
    // printf("%d", tech_ptr->n);
}