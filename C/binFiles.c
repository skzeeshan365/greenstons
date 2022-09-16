#include <stdio.h>
#include <stdlib.h>

typedef struct nums
{
    int a, b, c;
} nums;

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
    }
    else
    {
        printf("invalid input!");
    }

    return 0;
}

void write()
{
    nums num_struct;
    FILE *fptr;

    fptr = fopen("C:/Users/zeeshan/OneDrive/VSCode/Data/test.bin", "wb");

    if (fptr == NULL)
    {
        printf("Error");
        exit(1);
    }

    for (int i = 0; i < 3; i++)
    {
        
        num_struct.a = i;
        num_struct.b = i*3;
        num_struct.c = i*3+1;
        fwrite(&num_struct, sizeof(struct nums), 1, fptr);
    }
    fclose(fptr);
}

void read()
{
    nums num_struct;
    FILE *fptr;

    if ((fptr = fopen("C:/Users/zeeshan/OneDrive/VSCode/Data/test.bin", "rb")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    for (int i = 0; i < 3; ++i)
    {
        fread(&num_struct, sizeof(struct nums), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num_struct.a, num_struct.b, num_struct.c);
    }
    fclose(fptr);
}