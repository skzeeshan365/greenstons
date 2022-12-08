#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* struct Employee
{
    char name[100];
    int age;
}; */

/* struct Students
{
    char name[100];
    int Roll_no;
}; */

/* struct Distance
{
    int feet;
    float inch;
}; */

typedef struct complex
{
    float a;
    float b;
} complex;

complex add(complex a, complex b)
{
    complex temp;
    temp.a = a.a + b.a;
    temp.b = a.b + b.b;
    return temp;
}

void Examples();

int main()
{
    //Structures
    /* struct Employee emp1, emp2;

    strcpy(emp1.name, "ydx");
    emp1.age = 20;

    strcpy(emp2.name, "Dms");
    emp2.age = 21;

    printf("name: %s\n", emp2.name);
    printf("Age: %d\n", emp2.age); */

    // Structures and pointers
    /* struct Employee *emp_ptr, emp;

    emp_ptr = &emp;

    printf("Enter name: ");
    scanf("%s", &emp_ptr->name);
    printf("print name: %s", emp_ptr->name); */

    // Structures and memory allocation

    /* struct Employee *ptr, emp;
    int n;
    printf("Enter no of objects for structure: ");
    scanf("%d", &n);

    ptr = (struct Employee *)malloc(n * sizeof(struct Employee));
    if (ptr != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter name for %d: ", i+1);
            scanf("%s", (ptr+i)->name);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("name: %s\n", (ptr+i)->name);
    } */
    
    Examples();

    return 0;
}

void Examples()
{
    //Store information of a student using structures

    /* struct Students s1;

    printf("Enter student information: ");
    scanf("%s", s1.name);
    s1.Roll_no = 1;

    printf("Entered information\n");
    printf("Name: %s\n", s1.name);
    printf("Name: %d", s1.Roll_no); */

    // Program to add two distances in the inch-feet system

    /* struct Distance d1, d2, result;

    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("Enter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch >= 12.0)
    {
        result.inch = result.inch - 12.0;
        ++result.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch); */
    
    // Add two complex numbers using structures and funtions
    /* complex a, b, result;

    printf("Enter your 1st complex number");
    printf("Enter Real and imaginary parts: ");
    scanf("%f %f", &a.a, &a.b);

    printf("Enter your 2nd complex number");
    printf("Enter Real and imaginary parts: ");
    scanf("%f %f", &b.a, &b.b);

    result = add(a, b);

    printf("Result: %.f + %.fi ", result.a, result.b); */
}