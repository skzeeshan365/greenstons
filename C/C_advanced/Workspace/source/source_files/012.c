#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

int counter = 0;

void * check()
{
    pthread_mutex_lock(&lock);

    printf("%d: modifiying counter: %d\n", pthread_self(), counter);
    counter++;
    printf("%d: modified counter: %d\n", pthread_self(), counter);
    pthread_mutex_unlock(&lock);
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread1 = 0, thread2 = 0;
    int myID;

    myID = pthread_create(&thread1, NULL, check, NULL);
    myID = pthread_create(&thread2, NULL, check, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    return 0;
}