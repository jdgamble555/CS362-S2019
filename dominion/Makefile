CFLAGS= -Wall -fpic -coverage -lm -std=c99

rngs.o: rngs.h rngs.c
	gcc -c rngs.c -g  $(CFLAGS)

dominion.o: dominion.h dominion.c rngs.o
	gcc -c dominion.c -g  $(CFLAGS)

playdom: dominion.o playdom.c
	gcc -o playdom playdom.c -g dominion.o rngs.o $(CFLAGS)
#To run playdom you need to entere: ./playdom <any integer number> like ./playdom 10*/
testDrawCard: testDrawCard.c dominion.o rngs.o
	gcc  -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

badTestDrawCard: badTestDrawCard.c dominion.o rngs.o
	gcc -o badTestDrawCard -g  badTestDrawCard.c dominion.o rngs.o $(CFLAGS)

testBuyCard: testDrawCard.c dominion.o rngs.o
	gcc -o testDrawCard -g  testDrawCard.c dominion.o rngs.o $(CFLAGS)

testAll: dominion.o testSuite.c
	gcc -o testSuite testSuite.c -g  dominion.o rngs.o $(CFLAGS)

interface.o: interface.h interface.c
	gcc -c interface.c -g  $(CFLAGS)

runtests: testDrawCard 
	./testDrawCard &> unittestresult.out
	gcov dominion.c >> unittestresult.out
	cat dominion.c.gcov >> unittestresult.out


player: player.c interface.o
	gcc -o player player.c -g  dominion.o rngs.o interface.o $(CFLAGS)

all: playdom player 

unittestresult: cardtest1.c cardtest2.c cardtest3.c cardtest4.c unittest1.c unittest2.c unittest3.c unittest4.c
	gcc -o unittestresult1 -g unittest1.c dominion.o rngs.o $(CFLAGS)
	gcc -o unittestresult2 -g unittest2.c dominion.o rngs.o $(CFLAGS)
	gcc -o unittestresult3 -g unittest3.c dominion.o rngs.o $(CFLAGS)
	gcc -o unittestresult4 -g unittest4.c dominion.o rngs.o $(CFLAGS)
	gcc -o unittestresult5 -g cardtest1.c dominion.o rngs.o $(CFLAGS)
	gcc -o unittestresult6 -g cardtest2.c dominion.o rngs.o $(CFLAGS)
	gcc -o unittestresult7 -g cardtest3.c dominion.o rngs.o $(CFLAGS)
	gcc -o unittestresult8 -g cardtest4.c dominion.o rngs.o $(CFLAGS)

	./unittestresult1 >> unittestresults.out
	./unittestresult2 >> unittestresults.out
	./unittestresult3 >> unittestresults.out
	./unittestresult4 >> unittestresults.out
	./unittestresult5 >> unittestresults.out
	./unittestresult6 >> unittestresults.out
	./unittestresult7 >> unittestresults.out
	./unittestresult8 >> unittestresults.out

	gcov dominion.c >> unittestresults.out



clean:
	rm -f *.o playdom.exe playdom player player.exe  *.gcov *.gcda *.gcno *.so *.out testDrawCard testDrawCard.exe
