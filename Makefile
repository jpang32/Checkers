CC = gcc
CFLAGS = -I.
DEPS = board.h

board.o: board.c board.h
	$(CC) -c -g -o $@ $< $(CFLAGS)

utils.o: utils.c utils.h
	$(CC) -c -g -o $@ $< $(CFLAGS)

main.exe: main.o board.o utils.o
	$(CC) -g -o $@ $^ $(CFLAGS)

clean:
	-rm *.o main.exe