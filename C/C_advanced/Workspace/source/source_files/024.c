#include <stdio.h>
#include <stdlib.h>

#define SIZE 24

int main() {
    int *data = NULL;

    data = malloc(SIZE*sizeof(int));
    if (data == NULL)
    {
        fprintf(stderr, "Failed to allocate memory");
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", (printf("Enter %d: ", i+1), data+i));
    }
    
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%d: %d\n", i+1, *(data+i));
    }
    

    free(data);
}