#include "debugops.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUF_SIZE 256
char TAG[BUF_SIZE];

void initializeDebugLevel()
{
    #ifdef DEBON
    char *ptr = TAG;
    size_t buff_size = BUF_SIZE;
    printf("Enter DEBUG TAG (max 32): ");
    getline(&ptr, &buff_size, stdin);
    #endif
}

int compare(const char *str1, const char *str2)
{
    return strcmp(str1, str2);
}

const char * getTAG()
{
    return TAG;
}