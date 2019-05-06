#include "dominion.h"
#include <stdio.h>
#include <assert.h>

int main()
{

    struct gameState G;

    int coin_bonus = 0;

    /* smithy == 13 */
    
    if (cardEffect(13, 1, 1, 2, &G, 1, &coin_bonus))
    {
        printf("returned a postive number");
    }
    else
    {
        printf("returned -1");
    }
}