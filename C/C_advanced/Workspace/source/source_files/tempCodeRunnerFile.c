/* #include <stdio.h>
#include <malloc.h> */

/* typedef struct
{
    int arrSize;
    int array[];
} myArray; */

/* int main()
{
    int size, size1;
    myArray *ptr;

    printf("Enter length of array: ");
    scanf("%d", &size);

    ptr = malloc(sizeof(myArray) + size * sizeof(int));

    for (size_t i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", ptr+i);
    }

    for (size_t i = 0; i < size; i++)
    {
       printf("Element %d: %d\n", i+1, *(ptr+i));
    }
    
    
    free(ptr);
    return 0;
} */

/* int main()
{
    #include <complex.h>
    #ifdef __STDC_NO_COMPLEX__
    printf("Complex arithmetic not supported\n");
    #else
    printf("Complex arithmetic supported\n");

    double complex cx = 1.0 + 3.0*I;
    double complex cy = 1.0 - 4.0*I;
    double complex sum;

    sum = cx + cy;
    printf("Sum: (%.1f%+.1f) + (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    sum = cx - cy;
    printf("Difference: (%.1f%+.1f) - (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    sum = cx * cy;
    printf("Product: (%.1f%+.1f) X (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    sum = cx / cy;
    printf("Division: (%.1f%+.1f) / (%.1f%+.1f) = %.1f%+.1f\n", creal(cx), cimag(cx), creal(cy), cimag(cy), creal(sum), cimag(sum));

    double complex conjugate_CX = conj(cx);
    double complex conjugate_CY = conj(cy);
    printf("Conjugate CX: %.1f%+.1f\nConjugate CY: %.1f%+.1f\n", creal(conjugate_CX), cimag(conjugate_CX), creal(conjugate_CY), cimag(conjugate_CY));
#endif
} */

#include <stdio.h>
#include <stdlib.h>
/* #include "binarysystem.h" */

int main(int argc, char **argv)
{
    /* int a[100] = {1, 2, 3, [3 ... 9] = 10};

    printf("%d ", a[3]); */
    /* unsigned int a;
    scanf("%d", (printf("Enter a decimal no: "), &a));

    printf("%lld\n", decToBinary(a));
    a = ~a;
    printf("%d\n", a); */

    /* int a = 1;

    if (a == 1)
    {
        goto test;
    }

    test:
    printf("test"); */

    /* int i;
    char ch;

    printf("%c\n", 77);

    for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
        printf("%c", ch);
    return 0; */

    /* for (int i = 0; i < 10; i++)
    {
        printf("%c", getc(stdin));
    } */

    /* int ch;

    // reads characters from the stdin and show
    // them on stdout until encounters '1'
    while ((ch = getchar()) != '1')
        putchar(ch);

    // ungetc() returns '1' previously
    // read back to stdin
    ungetc(ch, stdin);

    // getchar() attempts to read
    // next character from stdin
    // and reads character '1' returned
    // back to the stdin by ungetc()
    ch = getchar();

    // putchar() displays character
    putchar(ch); */

    /* char ch = 0;

    while (isspace(ch = (char) getchar()));
    ungetc(ch, stdin);

    printf("char is: %c\n", getchar()); */

    /* printf("%d: %s\n", argc, argv[0]);

    for (int i = 0; i < argc; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    } */

    /* char *ptr = NULL;
    size_t size = 10;
    size_t chars;

        ptr = malloc(size * sizeof(char));

    if (ptr == NULL)
    {
        exit(1);
    }
    

    // chars = getline(&ptr, &size, stdin);

    // printf("read: %zu\n", chars);
    printf("typed: %s", ptr);
    free(ptr); */

    // putchar(getchar());
}