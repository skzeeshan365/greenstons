#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void read(char keyword[20]);
void write();
void viewAll();
void redirect();

typedef enum
{
    false,
    true
} bool;

struct students
{
    char student_name[20];

    struct student_data
    {
        int roll_no;
        int marks;
    } emp;
};

int main()
{
    char c, name[20];

    printf("1 View All students\n");
    printf("2 Search students\n");
    printf("3 Add students\n");

    printf("Choose your operation: ");

    scanf(" %c", &c);

    switch (c)
    {
    case '1':
        viewAll();
        break;
    case '2':
        printf("Enter name of the student: ");
        scanf("%s", name);
        read(name);
        break;
    case '3':
        write();
        break;
    default:
        printf("Invalid input\n");
        printf("Would you like to retry? ");
        scanf("%c", &c);
        break;
    }
    return 0;
}

void write()
{
    struct students student;

    printf("Enter student name: ");
    scanf("%s", student.student_name);

    printf("        Enter Roll no: ");
    scanf("%d", &student.emp.roll_no);

    printf("        Enter marks: ");
    scanf("%d", &student.emp.marks);

    FILE *fptr;

    fptr = fopen("C:/Users/zeeshan/OneDrive/VSCode/Data/structOrg.bin", "ab");

    if (fptr == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    bool written;

    written = fwrite(&student, sizeof(struct students), 1, fptr);
    fclose(fptr);

    if (written)
    {
        printf("%s", "Data written");
        redirect();
    }
    else
    {
        printf("%s", "Data not written");
        redirect();
    }
}
void read(char keyword[20])
{
    int studentExist = 0;

    FILE *fptr;

    fptr = fopen("C:/Users/zeeshan/OneDrive/VSCode/Data/structOrg.bin", "rb");

    if (fptr == NULL)
    {
        printf("\nError to open the file\n");
        exit(1);
    }

    struct students student;

    while (fread(&student, sizeof(struct students), 1, fptr))
    {
        if (!strcmp(keyword, student.student_name))
        {
            printf("\nStudent name: %s\n", student.student_name);
            printf("Student roll no: %d\n", student.emp.roll_no);
            printf("Student marks: %d\n\n", student.emp.marks);
            studentExist++;
        }
    }
    if (studentExist == 0)
    {
        printf("\nStudent not found\n");
    }
    fclose(fptr);
    redirect();
}

void viewAll()
{
    FILE *fptr;

    fptr = fopen("C:/Users/zeeshan/OneDrive/VSCode/Data/structOrg.bin", "rb");

    if (fptr == NULL)
    {
        printf("\nError to open the file\n");
        exit(1);
    }

    struct students student;
    int i = 1;
    while (fread(&student, sizeof(struct students), 1, fptr))
    {
        printf("%d: Student name: %s\n", i, student.student_name);
        i++;
    }
    fclose(fptr);
    redirect();
}

void redirect()
{
    char c;

    printf("\nWant to redirect to home? y/n: ");
    scanf(" %c", &c);

    switch (c)
    {
    case 'y':
        main();
        break;
    case 'n':
        
        break;
    default:
        break;
    }
}