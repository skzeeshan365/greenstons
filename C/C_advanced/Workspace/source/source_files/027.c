#include <stdio.h>

int main() {
    int n;

    printf("Enter limit");
    scanf("%d", &n);

    int arr[n];

    printf("Enter data");
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Print data");
    for (size_t i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}