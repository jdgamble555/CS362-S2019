/* randomtestcard3.c
testing village card
Jonathan Gamble
CS362
*/

#include "dominion.h"
#include "dominion_helpers.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <time.h>
#include "rngs.h"

#define DEBUG 0
#define NOISY_TEST 1

int random_gen(int min, int max)
{
    //**************************************
    int range = max - min + 1;
    return rand() % range + min;
}

int main()
{

    srand((unsigned int)time(NULL));

    printf("Testing village card.\n");

    printf("RANDOM TESTS.\n");

    for (int n = 0; n < 2000; n++)
    {
        struct gameState G;

        for (int i = 0; i < sizeof(struct gameState); i++)
        {
            ((char *)&G)[i] = floor(Random() * 256);
        }

        // 1 - MAX players
        int currentPlayer = random_gen(1, MAX_PLAYERS);

        int handPos = random_gen(0, MAX_HAND);

        run_village(currentPlayer, &G, handPos);
    }

    printf("ALL TESTS OK\n");

    exit(0);

    return 0;
}
