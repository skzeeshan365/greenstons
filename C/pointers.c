#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fun();
void swap(int*, int*, int*);

int main() {
    fun();
    return 0;
}

void fun()
{
    // int *pc, c;
    // c = 5;
    // pc = &c;
    // printf("Address of c, %d", pc);
    // printf("\nValue of c, %d", *pc);
    // *pc = 0;
    // printf("\nValue of C after assigning value from pointer pc, %d", c);
    
    // Relation between pointers and arrays
    // int x[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("&x[%d] = %p\n", i, &x[i]);
    // }
    // printf("Address of array %p", x);

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

    // Memory allocation
    // Program to calculate the sum of n numbers entered by the user
    /* int *ptr, n, sum = 0;

    printf("Enter number of elemetns: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));
    
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    
    printf("Enter elements: ");
    for (int i = 0; i <n; i++) {
        scanf("%d", ptr+i);
        sum += *(ptr+i);
    }

    printf("Sum = %d", sum);
    free(ptr); */

    //ReAlloc
    // int *ptr, i, n1, n2;
    // printf("Enter size: ");
    // scanf("%d", &n1);

    // ptr = (int *)malloc(n1 * sizeof(int));

    // printf("Addresses of previously allocated memory:\n");
    // for (i = 0; i < n1; ++i)
    //     printf("%pc\n", ptr + i);

    // printf("\nEnter the new size: ");
    // scanf("%d", &n2);

    // // rellocating the memory
    // ptr = realloc(ptr, n2 * sizeof(int));

    // printf("Addresses of newly allocated memory:\n");
    // for (i = 0; i < n2; ++i)
    //     printf("%pc\n", ptr + i);

    // free(ptr);

    // Examples
    //Average
    /* int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1)
    {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg); */

    //Largest number in an array

    /* int n;
    int x[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (x[0] < x[i])
        {
           x[0] = x[i];
        }
    }
    
    printf("Largest element is: %d", x[0]); */

    //Standard deviation
    /* int terms;

    printf("Enter number of elements: ");
    scanf("%d", &terms);

    float ns[terms], sum;

    printf("Enter elements: ");
    for (int i = 0; i < terms; i++)
    {
        scanf("%f", &ns[i]);
    }

    for (int i = 0; i < terms; i++)
    {
        sum += ns[i];
    }

    float mean = sum/terms;
    double SD;

    for (int i = 0; i < terms; i++)
    {
        SD += pow(ns[i] - mean, 2);
    }
    printf("%.6f", sqrt(SD/terms)); */

    //ADDITION OF 2 MATRICES OF ORDER n*n

    /* int m1 [10] [10], m2 [10] [2], result [10] [10], r, c;

    printf("Enter rows and columns of Matrices\n");
    scanf("%d %d", &r, &c);


    printf("Enter elements of Matrix 1\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
        printf("Enter element %d%d ", i + 1, j +1);
        scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter element %d%d ", i + 1, j + 1);
            scanf("%d", &m2[i][j]);
        }
    }

    //Adding the matrices
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = m1[i][j] * m2[i][j];
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", result[i][j]);
            if (j == 2)
        printf("\n");
        }
    } */
    
    //Access elements of an Array using Pointers
    //Example 1
    
    /* int x[100], *ptr, n;

    ptr = x;
    printf("Enter number of elements in Array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Print elements %d: %d\n", i+1, *(ptr+i));
    } */

    //Example 2

    /* int x[100], n;

    printf("Enter number of elements in Array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", x+i);
    }

    printf("You entered: \n");
    for (int i = 0; i < n; ++i)
        printf("%d\n", *(x + i)); */


    //Swap numbers in cyclic order with Call by reference

    /* int a, b, c;

    printf("Enter numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    swap(&a, &b, &c);

    printf("After swapping: %d %d %d", a, b, c); */

    //Find the largest number using memory allocation

    int n, *data;

    printf("Enter total number of elements: ");
    scanf("%d", &n);

    data = (int*) calloc(n, sizeof(int));

    if (data == NULL)
    {
        printf("Memory allocation failed");
        exit(0);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", data + i);
    }

    for (int i = 0; i < n; i++)
    {
        if (*data < *(data + i))
        {
            *data = *(data+i);
        }
    }
    
    printf("Largest value: %d", *data);
}
/* void swap(int *a, int *b, int *c) {
    int temp;

    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
} */