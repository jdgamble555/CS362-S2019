#include "dominion.h"
#include <stdio.h>
#include <assert.h>

int main()
{

    struct gameState G;

    int coin_bonus = 0;

    /* adventurer == 7 */
    
    if (cardEffect(7, 0, 0, 0, &G, 1, &coin_bonus))
    {
        printf("returned a postive number");
    }
    else
    {
        printf("returned -1");
    }
}
