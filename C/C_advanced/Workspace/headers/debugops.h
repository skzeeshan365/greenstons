#ifndef DEBUGOPS_H_INCLUDED
#define DEBUGOPS_H_INCLUDED

#define BUF_SIZE 256 
extern char TAG[BUF_SIZE];
void initializeDebugLevel();

#ifdef DEBON

int compare(const char *, const char *);
const char *getTAG();

#define log(level, format, ...)                         \
    if (strstr(getTAG(), level))                      \
        fprintf(stderr, level ": " format "\n", __VA_ARGS__);
#else
#define log(level, format, ...)
#endif

#endif