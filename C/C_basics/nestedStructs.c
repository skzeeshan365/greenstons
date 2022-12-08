#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/********** Example 1 *********/

/* struct Employee
{
    char name[20];
    int employee_id;
    int salary;
};

struct organization
{
    char organisation_name[20];

    struct Employee emp;
};


int main()
{
    struct organization org;

    printf("Size of org: %d\n", sizeof(org.emp));

    org.emp.employee_id = 545;
    strcpy(org.emp.name, "zeeshan");
    org.emp.salary = 100;

    strcpy(org.organisation_name, "fhgbhbg");

    printf("Organization name: %s\n", org.organisation_name);
    printf("Employee name: %s\n", org.emp.name);
    printf("Employee name: %d\n", org.emp.employee_id);
    printf("Employee name: %d\n", org.emp.salary);
} */

/********** Example 2 *********/
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
        printf("Invalid input\n");
        printf("Would you like to retry? ");
        scanf("%c", &c);
    default:
        break;
    }
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
    bool studentExist;

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
        }
        else
        {
            studentExist = false;
        }
    }
    if (!studentExist)
    {
        printf("\nStudent not found\n");
    }

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
    int i = 0;
    while (fread(&student, sizeof(struct students), 1, fptr))
    {
        printf("%d: Student name: %s\n", i, student.student_name);
        i++;
    }
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
        /* code */
        break;
    default:
        break;
    }
}