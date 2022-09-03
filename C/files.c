#include <stdio.h>
#include <stdlib.h>

void write();
void read();

int main()
{
    char mode;
    printf("please enter mode of operation, r for read and w for write: ");
    scanf("%c", &mode);

    if (mode == 'r')
    {
        read();
    }
    else if (mode == 'w')
    {
        write();
    } else {
        printf("invalid input!");
    }
    
    return 0;
}

void write()
{
    int n;
    FILE *ptr;

    ptr = fopen("C:/Users/zeeshan/OneDrive/VSCode/Data/test.txt", "w");

    if (ptr == NULL)
    {
        printf("Error");
        exit(1);
    }

    printf("Enter a number: ");
    scanf("%d", &n);

    fprintf(ptr, "%d", n);
    fclose(ptr);
}

void read()
{
    int num;
    FILE *fptr;

    if ((fptr = fopen("C:/Users/zeeshan/OneDrive/VSCode/Data/test.txt", "r")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Value of n=%d", num);
    fclose(fptr);
}