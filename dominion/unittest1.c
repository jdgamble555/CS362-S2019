#include "dominion.h"
#include <stdio.h>
#include <stdlib.h>
#include "rngs.h"

int main()
{

    if (run_gardens())
    {
        printf("utest1: returned a postive number\n");
    }
    else
    {
        printf("utest1: returned -1\n");
    }

    return 0;
}
