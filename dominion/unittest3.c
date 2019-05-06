#include "dominion.h"
#include <stdio.h>
#include <assert.h>


int main()
{

    struct gameState G;

    if (run_village(1, &G, 2))
    {
        printf("utest3: returned a postive number\n");
    }
    else
    {
        printf("utest3: returned -1\n");
    }

    return 0;
}