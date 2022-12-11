#include <stdio.h>
#include <stdarg.h>

int DEBUG_LEVEL = 1;

#ifdef DEBON
#define DEBUG(level, fmt, ...) \
    if (DEBUG_LEVEL >= level)   \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level, fmt, ...)
#endif

int main()
{
    DEBUG(1, "test%c", 'f');
}