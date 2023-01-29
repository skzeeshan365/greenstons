#include <stdio.h>

int call_by_value(int n) {
    n++;
    return n;
}

void call_by_ref(int *n) {
    *n += 1;
}

int main() {
    int n;
    scanf("%d", (printf("Enter a positive integer: "), &n));

    printf("Call by value\nOriginal value: %d\tAfter increment: %d", n, call_by_value(n));

    call_by_ref(&n);
    printf("\n\nCall by ref\nOriginal value: %d\tAfter increment: %d", n, n);
}