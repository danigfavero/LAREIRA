CC = gcc
CFLAGS = -Wall
objects = jogo.o hash.o lista.o elemento.o

edit: $(objects)
	gcc -o edit $(objects)

jogo.o : jogo.c	acoes.h
	gcc -Wall -o jogo jogo.c acoes.h
acoes.o: acoes.c hash.h
	gcc -Wall -o acoes acoes.c hash.h
hash.o: hash.c lista.h
	gcc hash hash.c lista.h
lista.o: lista.c elemento.h
	gcc -Wall -o lista lista.c elemento.h
elemento.o: elemento.c
	gcc -Wall -o elemento elemento.c

.PHONY: clean

clean:
	rm edit $(objects)
