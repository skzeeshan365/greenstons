#ifndef H07_H_INCLUDED
#define H07_H_INCLUDED

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

#endif