#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct listNode
{
    int data;
    struct listNode *nextPtr;
} listNode;

void insertAtBeginning(int data);
void insertAtEnd(int data);
int insertAtPos(int, int);

int deleteAtStart();
int deleteAtEnd();
int deleteAtPos(int);

int searchList(int);

int sortList();

int getLenth();
void display();
void displayInRange(int lower, int upper);

void freeList();

int emptyList_error();

listNode *temp = NULL;
listNode *head = NULL;

int main()
{
    srand(time(NULL));
    insertAtBeginning(5);
    for (size_t i = 0; i < 10; i++)
    {
        insertAtEnd((rand() % 100 - 50) + 50);
    }
    display();
    printf("\n");
    displayInRange(2, 5);
    freeList();
}

void insertAtBeginning(int data)
{
    listNode *new_node = malloc(sizeof(listNode));
    new_node->data = data;
    new_node->nextPtr = head;
    head = new_node;
}

void insertAtEnd(int data)
{
    listNode *new_node = malloc(sizeof(listNode));
    new_node->data = data;
    new_node->nextPtr = NULL;
    temp = head;
    while (temp->nextPtr != NULL)
    {
        temp = temp->nextPtr;
    }
    temp->nextPtr = new_node;
}

int insertAtPos(int pos, int data)
{
    if (head == NULL)
    {
        emptyList_error();
    }
    else
    {

        listNode *new_node = malloc(sizeof(listNode));
        new_node->data = data;

        int i = 1;
        temp = head;
        while (i < pos)
        {
            temp = temp->nextPtr;
            i++;
        }
        new_node->nextPtr = temp->nextPtr;
        temp->nextPtr = new_node;
        return 1;
    }
}

int deleteAtStart()
{
    if (head == NULL)
    {
        emptyList_error();
    }
    else
    {
        temp = head;
        head = head->nextPtr;
        free(temp);
        return 1;
    }
}

int deleteAtEnd()
{
    if (head == NULL)
    {
        emptyList_error();
    }
    else
    {
        temp = head;
        listNode *pre;
        while (temp->nextPtr != NULL)
        {
            pre = temp;
            temp = temp->nextPtr;
        }
        if (temp == head)
        {
            free(temp);
        }
        else
        {
            pre->nextPtr = NULL;
            free(temp);
        }
        return 1;
    }
}

int deleteAtPos(int pos)
{
    if (head == NULL)
    {
        emptyList_error();
    }
    else
    {
        temp = head;
        listNode *nextNode;
        int i = 1;
        while (i < pos - 1)
        {
            temp = temp->nextPtr;
            i++;
        }
        nextNode = temp->nextPtr;
        temp->nextPtr = nextNode->nextPtr;
        free(nextNode);
        return 1;
    }
}

int searchList(int data)
{
    if (head == NULL)
    {
        emptyList_error();
    }
    else
    {
        temp = head;

        while (temp->nextPtr != NULL)
        {
            if (data == temp->data)
            {
                return 1;
            }

            temp = temp->nextPtr;
        }
    }
}

int sortList()
{
    if (head == NULL)
    {
        emptyList_error();
    }
    else
    {
        temp = head;
        listNode *nextNode;
        int temporary;

        while (temp != NULL)
        {
            nextNode = temp->nextPtr;

            while (nextNode != NULL)
            {
                if (temp->data > nextNode->data)
                {
                    temp->data = temp->data - nextNode->data;
                    nextNode->data = temp->data + nextNode->data;
                    temp->data = nextNode->data - temp->data;
                }
                nextNode = nextNode->nextPtr;
            }
            temp = temp->nextPtr;
        }
        return 1;
    }
}
void display()
{
    temp = head;
    while (temp != NULL)
    {
        printf(" %d ", temp->data);
        temp = temp->nextPtr;
    }
}

void displayInRange(int lower, int upper)
{
    listNode *lowerNode = head;
    listNode *upperNode = head;
    int i = 0, j = lower;
    while (i < lower)
    {
        lowerNode = lowerNode->nextPtr;
        printf(" %d ", lowerNode->data);

        i++;
    }

    upperNode = lowerNode;

    while (j < upper)
    {
        upperNode = upperNode->nextPtr;
        printf(" %d ", upperNode->data);
        j++;
    }
}

void freeList()
{
    while (head != NULL)
    {
        temp = head;
        head = head->nextPtr;
        free(temp);
    }
}

int getLenth()
{
    int i = 0;
    temp = head;
    while (temp != NULL)
    {
        i++;
        temp = temp->nextPtr;
    }
    return i;
}

int emptyList_error()
{
    return -1;
}