//Queue implementation

#include <stdio.h>

void enQueue(int);
void deQueue();
void display();

#define DATA_SIZE 5

int dataList[DATA_SIZE], front = -1, rear = -1;

int main()
{
    enQueue(54);
    enQueue(43);
    enQueue(22);
    enQueue(4);
    enQueue(6);

    display();

    deQueue();

    display();
}

void enQueue(int data)
{
    if (rear == DATA_SIZE - 1)
    {
        printf("Queue is full\n");
    } else
    {
        if (front == -1)
        front = 0;

        rear++;
        dataList[rear] = data;
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    } else
    {
        front++;
        if (front > rear)
        {
            front = rear = -1;
        }
        
    }
}

void display()
{
    for (size_t i = front; i < rear; i++)
    {
        printf("%d\t", dataList[i]);
    }
    printf("\n");
}