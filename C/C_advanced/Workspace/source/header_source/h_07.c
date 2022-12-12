#include <stdio.h>
#include <stdlib.h>

typedef struct listNode
{
    int data;
    struct listNode *nextPtr;
} listNode;

void insertAtBeginning(listNode **linkedList, int data);
void insertAtEnd(listNode **linkedList, int data);
int insertAtPos(listNode **linkedList, int position, int data);

int deleteAtStart(listNode **linkedList);
int deleteAtEnd(listNode **linkedList);
int deleteAtPos(listNode **linkedList, int position);

int isExistElement(listNode **linkedList, int data);
int searchByPos(listNode **linkedList, int pos);

int sortInAsc(listNode **linkedList);
int sortInDesc(listNode **linkedList);

int getLenth(listNode **linkedList);
void display(listNode **linkedList, const char *format);
void displayInRange(listNode **linkedList, const char *format, int lower, int upper);

void freeList(listNode **linkedList);

int emptyList_error();

void insertAtBeginning(listNode **linkedList, int data)
{
    listNode *new_node = malloc(sizeof(listNode));
    new_node->data = data;
    new_node->nextPtr = *linkedList;
    *linkedList = new_node;
}

void insertAtEnd(listNode **linkedList, int data)
{
    listNode *new_node = malloc(sizeof(listNode));
    listNode *temp = *linkedList;

    new_node->data = data;
    new_node->nextPtr = NULL;
    while (temp->nextPtr != NULL)
    {
        temp = temp->nextPtr;
    }
    temp->nextPtr = new_node;
}

int insertAtPos(listNode **linkedList, int pos, int data)
{
    if (*linkedList == NULL)
    {
        emptyList_error("insertAtPos");
    }
    else
    {
        listNode *temp = *linkedList;
        listNode *new_node = malloc(sizeof(listNode));
        new_node->data = data;

        int i = 1;
        while (i < pos)
        {
            temp = temp->nextPtr;
            i++;
        }
        new_node->nextPtr = temp->nextPtr;
        temp->nextPtr = new_node;
        return 1;
    }
    return 0;
}

int deleteAtStart(listNode **linkedList)
{
    if (linkedList == NULL)
    {
        emptyList_error("deleteAtStart");
    }
    else
    {
        listNode *temp = *linkedList;
        *linkedList = (*linkedList)->nextPtr;
        free(temp);
        return 1;
    }
    return 0;
}

int deleteAtEnd(listNode **linkedList)
{
    if (linkedList == NULL)
    {
        emptyList_error("deleteAtEnd");
    }
    else
    {
        listNode *temp = *linkedList;
        listNode *pre;
        while (temp->nextPtr != NULL)
        {
            pre = temp;
            temp = temp->nextPtr;
        }
        if (temp == *linkedList)
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
    return 0;
}

int deleteAtPos(listNode **linkedList, int pos)
{
    if (*linkedList == NULL)
    {
        emptyList_error("deleteAtPos");
    }
    else
    {
        listNode *temp = *linkedList;
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
    return 0;
}

int isExistElement(listNode **linkedList, int data)
{
    if (*linkedList == NULL)
    {
        emptyList_error("isExistElement");
    }
    else
    {
        listNode *temp = *linkedList;

        while (temp->nextPtr != NULL)
        {
            if (data == temp->data)
            {
                return 1;
            }

            temp = temp->nextPtr;
        }
    }
    return 0;
}

int searchByPos(listNode **linkedList, int pos)
{
    if (*linkedList == NULL)
    {
        emptyList_error("searchByPos");
    }
    else
    {
        int i = 0;
        listNode *temp = *linkedList;

        while (i < pos)
        {
            temp = temp->nextPtr;
            i++;
        }
        return temp->data;
    }
    return 0;
}

int sortInAsc(listNode **linkedList)
{
    if (*linkedList == NULL)
    {
        emptyList_error("sortInAsc");
    }
    else
    {
        listNode *temp = *linkedList;
        listNode *nextNode;

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
    return 0;
}

int sortInDesc(listNode **linkedList)
{
    if (*linkedList == NULL)
    {
        emptyList_error("sortInDesc");
    }
    else
    {
        listNode *temp = *linkedList;
        listNode *nextNode;
        
        while (temp != NULL)
        {
            nextNode = temp->nextPtr;

            while (nextNode != NULL)
            {
                if (temp->data < nextNode->data)
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
    return 0;
}

void display(listNode **linkedList, const char *format)
{
    if (*linkedList == NULL)
    {
        emptyList_error("display");

        listNode *temp = *linkedList;
        while (temp != NULL)
        {
            printf(format, temp->data);
            temp = temp->nextPtr;
    }
    }
}

void displayInRange(listNode **linkedList, const char *format, int lower, int upper)
{
    if (*linkedList == NULL)
    {
    emptyList_error("displayInRange");

    listNode *lowerNode = *linkedList, *upperNode = *linkedList;
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
}

void freeList(listNode **linkedList)
{
    if (*linkedList == NULL)
    {
    emptyList_error("freeList");

    while (*linkedList != NULL)
    {
        listNode *temp = *linkedList;
        *linkedList = (*linkedList)->nextPtr;
        free(temp);
    }
    }
}

int getLenth(listNode **linkedList)
{
    int i = 0;
    listNode *temp = *linkedList;
    while (temp != NULL)
    {
        i++;
        temp = temp->nextPtr;
    }
    return i;
}

int emptyList_error(const char *funct)
{
    fprintf(stderr, "Warning: Empty list at %s\n", funct);
    return -1;
}