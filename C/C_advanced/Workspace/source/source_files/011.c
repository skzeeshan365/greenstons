#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

void parent()
{
    printf("From parent\n");
}

void child()
{
    printf("From child\n");
}

int main()
{
    pid_t id;

    id = fork();

    for (size_t i = 0; i < 5; i++)
    {
    if (id == 0)
    {
        child();
    } else if (id > 0)
    {
        parent();
    }
    }
}