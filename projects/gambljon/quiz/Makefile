CFLAGS= -Wall -fpic -coverage -lm -std=c99
CC = gcc

TARGET = testme

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

runtests: $(TARGET)
	./$(TARGET) &> testresult.out
	gcov $(TARGET).c >> testresult.out
	cat $(TARGET).c.gcov >> testresult.out

all: $(TARGET) runtests

clean:
	rm -f $(TARGET) *.gcov *.gcda *.gcno *.o *.out