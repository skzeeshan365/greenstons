#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Employee
{
    char name[100];
    int age;
};


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
    
    return 0;
}