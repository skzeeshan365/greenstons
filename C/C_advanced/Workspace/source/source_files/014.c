#include <stdio.h>
#include <pthread.h>

void *fun_t(void *arg)
{
    printf("Jason\n"); //Executed 1st
    pthread_exit("Bye");
}

int main()
{
    pthread_t pt;

    if (pthread_create(&pt, NULL, fun_t, NULL) != 0)
        perror("pthread_create");

    printf("Fedin\n"); // Executed 2nd

    if (pthread_join(pt, NULL) != 0)
        perror("pthread_join");

    return 0;
}
