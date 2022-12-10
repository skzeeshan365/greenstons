#include <stdio.h>
#include <complex.h>

int main()
{
    #ifdef __STDC_NO_COMPLEX__
    printf("Complex arithmetic not supported\n");
    #else
    printf("Complex arithmetic supported\n");

    double complex cx = 2 - 3.0 * I;
    double complex cy = 4 + 6.0 * I;
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
}