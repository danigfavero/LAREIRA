LOADLIBES= -lfl -lreadline
CFLAGS=-Wall -g

all: jogo

%.c: %.y
	bison $<
	mv $*.tab.c $*.c

jogo: main.o jogo.o jogol.o traduzindo.o acoes.o salas.o hash.o lista.o elemento.o
	gcc -o $@ $^ -Wall

jogo.c : jogo.y

jogol.o: jogol.l jogo.c

%.o : %.c
	gcc -o $@ -c $< -Wall

clean:
	rm -rm *tab* *.o
