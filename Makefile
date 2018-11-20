all: jogo

jogo: jogo.o acoes.o salas.o hash.o lista.o elemento.o
	gcc -o jogo jogo.o acoes.o salas.o hash.o lista.o elemento.o

jogo.o: jogo.c acoes.h
	gcc -o jogo.o -c jogo.c -Wall

acoes.o: acoes.c salas.h
	gcc -o acoes.o -c acoes.c -Wall

salas.o: salas.c hash.h
	gcc -o salas.o -c salas.c -Wall

hash.o: hash.c lista.h
	gcc -o hash.o -c hash.c -Wall

lista.o: lista.c elemento.h
	gcc -o lista.o -c lista.c -Wall

clean:
rm -rm *.o
