LOADLIBES= -lfl -lreadline
CFLAGS=-Wall -g

all: jogo

%.c: %.y
	bison $<
	mv $*.tab.c $*.c

jogo: jogo.o avent.o aventl.o traduzindo.o acoes.o salas.o hash.o lista.o elemento.o
	gcc -o jogo jogo.o avent.o aventl.o traduzindo.o acoes.o salas.o hash.o lista.o elemento.o

jogo.o: jogo.c traduzindo.h
	gcc -o jogo.o -c jogo.c -Wall

avent.c : avent.y

aventl.o: aventl.l avent.c

traduzindo.o: traduzindo.c acoes.h
	gcc -o traduzindo.o -c traduzindo.c -Wall

acoes.o: acoes.c salas.h
	gcc -o acoes.o -c acoes.c -Wall

salas.o: salas.c hash.h
	gcc -o salas.o -c salas.c -Wall

hash.o: hash.c lista.h
	gcc -o hash.o -c hash.c -Wall

lista.o: lista.c elemento.h
	gcc -o lista.o -c lista.c -Wall

elemento.o: elemento.c
	gcc -o elemento.o -c elemento.c -Wall

clean:
	rm -rm *.o
