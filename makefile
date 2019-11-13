ifeq ($(DEBUG), true)
	CC = gcc -g
else
	CC = gcc
endif

all: main.o statfxn.o
	$(CC) -o statpgm main.o statfxn.o

main.o: main.c headers.h
	$(CC) -c main.c

statfxn.o: statfxn.c headers.h
	$(CC) -c statfxn.c

run: all
	./statpgm

clean:
	touch main.o
	touch a.out
	rm *.o
	rm a.out
