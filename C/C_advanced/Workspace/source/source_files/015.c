#include <stdio.h>
#include <pthread.h>

int counter = 0, counter2 = 0;

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t cond = PTHREAD_COND_INITIALIZER;

void * check1()
{
    pthread_mutex_lock(&lock);

    for (size_t i = 0; i < 5; i++)
    {
        if (counter > 5)
        {
            counter++;
            printf("check2 sending signal counter: %d\n", counter);
            pthread_cond_broadcast(&cond);
        }
        else
        {
            printf("check2 waiting counter: %d\n", counter);
            pthread_cond_wait(&cond, &lock);
        }
    }
    pthread_mutex_unlock(&lock);
    pthread_exit(NULL);
}

void * check2()
{
    pthread_mutex_lock(&lock);

    if (counter > 5)
    {
        counter++;
        printf("check1 waiting counter: %d\n", counter);
        pthread_cond_wait(&cond, &lock);
    }
    else
    {
        counter++;
        printf("check1 sending signal counter: %d\n", counter);
        pthread_cond_broadcast(&cond);
    }

    pthread_mutex_unlock(&lock);
    pthread_exit(NULL);
}

int main()
{
    pthread_t thread1, thread2;

    for (size_t i = 0; i < 9; i++)
    {
    pthread_create(&thread1, NULL, check1, NULL);
    pthread_create(&thread2, NULL, check2, NULL);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    }
    return 0;
}
