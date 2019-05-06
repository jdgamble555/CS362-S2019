#include "dominion.h"
#include <stdio.h>
#include <assert.h>

int main()
{

    struct gameState G;

    if (run_smithy(1, &G, 2))
    {
        printf("utest2: returned a postive number\n");
    }
    else
    {
        printf("utest2: returned -1\n");
    }

    return 0;
}