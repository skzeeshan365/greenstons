//Linear search
#include <stdio.h>

#define SIZE 10

int search(int data[], int n) {
    for (size_t i = 0; i < SIZE; i++)
    {
        if (data[i] == n)
        return i;
    }
    return -1;
}

int main() {
    int data[SIZE] = {1, 2, 3, 4, 5, 54, 323, 2, 54, 5};
    int n;

    scanf("%d", (printf("Enter to search: "), &n));

    int result = search(data, n);
    if (result == -1)
    printf("Element not found");
    else
    printf("Element found at index: %d", result);
}