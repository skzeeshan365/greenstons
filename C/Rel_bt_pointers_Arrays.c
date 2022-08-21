#include <stdio.h>

void fun();

int main () {
    // int x[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("&x[%d] = %p\n", i, &x[i]);
    // }
    // printf("Address of array %p", x);
    fun();
  return 0;
}

void fun() {
    /* int i, x[6], sum = 0;
    printf("Enter 6 numbers: ");
    for(i = 0; i < 6; ++i) {
        // Equivalent to scanf("%d", &x[i]);
        scanf("%d", x+i);
        // Equivalent to sum += x[i]
        sum += *(x+i);
    }
    printf("Sum = %d", sum); */

    // int x[4] = {1, 2, 3, 4};
    // int *p;

    // p = x+2;

    // printf("Address of X: %d\n", x);
    // printf("Value of x[2] from p: %d, %d\n", *(p+1), p+1);
    // printf("Address of X: %d, %d\n", x[3], &x[3]);
}