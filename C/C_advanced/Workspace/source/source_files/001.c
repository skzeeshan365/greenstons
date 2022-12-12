#include <stdio.h>
#include "h_07.h"

int main()
{
    listNode *check = NULL;
    /* insertAtBeginning(&check, 6);
    for (size_t i = 0; i < 10; i++)
    {
        insertAtEnd(&check, i);
    } */
    display(&check, "%d\t");
    freeList(&check);
}

