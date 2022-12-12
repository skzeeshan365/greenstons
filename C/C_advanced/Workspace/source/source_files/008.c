#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct stack
{
    int ITEMS[SIZE];
    int top;
} stack;

void createStack(stack * st)
{
    st->top = -1;
}

int isEmpty(stack *st)
{
    if (st->top == -1)
    return 1;
    else
    return 0;
}

int isFull(stack *st)
{
    if (st->top == SIZE-1)
    return 1;
    else
    return 0;
}

void push(stack *st, int item)
{
    if (isFull(st))
    {
       printf("Stack is full\n");
    } else
    {
       st->top++;
       st->ITEMS[st->top] = item;
    }
}

void pop(stack *st)
{
    if (isEmpty(st))
    {
       printf("Stack is empty!\n");
    } else
    {
       printf("\nItem popped= %d\n", st->ITEMS[st->top]);
       st->top--;
    }
}

void display(stack *st)
{
    printf("Stack: ");
    for (int i = 0; i <= st->top; i++)
    {
        printf(" %d ", st->ITEMS[i]);
    }
}

int main()
{
    stack *st = malloc(sizeof(stack));

    createStack(st);
    push(st, 10);
    push(st, 15);
    push(st, 1);
    display(st);
    pop(st);
    printf("After pop:\n");
    display(st);
}