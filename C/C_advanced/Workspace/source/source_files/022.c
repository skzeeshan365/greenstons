//Structure program
#include <stdio.h>

typedef struct data
{
    char *name;
    int age;
} data;

int main() {
    data user;
    printf("Enter name: ");
    scanf("%s", user.name);
    printf("Enter age: ");
    scanf("%d", &user.age);

    printf("Entered data\nUsername: %s\tAge: %d", user.name, user.age);
}
