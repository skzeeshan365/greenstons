#include <stdio.h>
#include <stdlib.h>

struct students
{
    int roll_no;
    char name[100];
};

void write();
void read();

int main()
{
    read();
}

void read()
{
    FILE *fptr;

    fptr = fopen("test.txt", "rb");

    if (fptr == NULL)
    {
        printf("\nError to open the file\n");
        exit(1);
    }

    struct students student;

    while (fread(&student, sizeof(struct students), 1, fptr))
    {
        puts(student.name);
        printf("Roll no: %d\n", student.roll_no);
    }
}


void write()
{
    FILE *fptr;

    fptr = fopen("test.txt", "ab");

    if (fptr == NULL)
    {
        printf("\nError to open the file\n");
        exit(1);
    }

    struct students student;

    printf("Enter name: ");
    fgets(student.name, sizeof(struct students), stdin);
    printf("Enter Roll no: ");
    scanf("%d", &student.roll_no);

    fwrite(&student, sizeof(struct students), 1, fptr);
    fclose(fptr);
}

