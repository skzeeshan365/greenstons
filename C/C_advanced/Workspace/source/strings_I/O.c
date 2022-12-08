#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fptr = NULL;
    char *c;
    char *ptr = NULL;
    size_t buff_size = 32;

    ptr = malloc(buff_size*sizeof(char));
    if (ptr == NULL)
    {
        exit(1);
    }
    

    if (argc > 1)
    {
        c = argv[1];

        if ((fptr = fopen(argv[2], "r")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", argv[2]);
            exit(EXIT_FAILURE);
        } else puts("File opened!\n");

        while (!feof(fptr))
        {
            getline(&ptr, &buff_size, fptr);
            if (strstr(ptr, c))
            {
                printf("%s", ptr);
            }
        }
    }
    fclose(fptr);
    free(ptr);
}