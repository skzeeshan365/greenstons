#include <stdio.h>

char location[50] = {"C:/Users/zeeshan/OneDrive/VSCode/Data/"};
char *filename;

int main()
{
    FILE *fptr;

    filename = "testing.txt";
    fptr = fopen(strcat(location, filename), "w+");

    if (fptr == NULL)
    {
        printf("File not opened");
        exit(1);
    }

    fprintf(fptr, "%s", "sdfdafasf");
    rewind(fptr);
    do
    {
        char c = fgetc(fptr);
        putchar(c);
    } while (!feof(fptr));
}