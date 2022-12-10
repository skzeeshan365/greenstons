#include <stdio.h>
#include "h_01.h"
#include "debugops.h"
#include <stdlib.h>
#include <string.h>

int main()
{
    initializeDebugLevel();
    /* for (size_t i = 0; i < 10; i++)
    {
        printf("result: %.2lf\n", addNumbers(3, (float) i, 4.0, 4.0));
    } */

    log("c", "%d", 6);

    log("testing", "%d", 6);
    log("check", "%d", 6);
}

