#include "dominion.h"
#include <stdio.h>
#include <assert.h>

int main()
{

    struct gameState G;

    int coin_bonus = 0;

    /* village == 14 */
    
    if (cardEffect(14, 1, 1, 2, &G, 1, &coin_bonus))
    {
        printf("returned a postive number");
    }
    else
    {
        printf("returned -1");
    }
}