LOADLIBES= -lfl -lreadline
CFLAGS=-Wall -g

%.c: %.y
	bison $<
	mv $*.tab.c $*.c

jogo: main.o jogo.o jogol.o traduzindo.o acoes.o salas.o hash.o lista.o elemento.o

jogo.c : jogoy.y

jogol.o: jogol.l jogo.c

clean:
	rm -f avent *tab* *.o *~ jogo.c jogo.tgz

dist:
	tar czf jogo.tgz jogol.l jogoy.y traduzindo.c traduzindo.h main.c acoes.c acoes.h salas.c salas.h hash.c hash.h lista.c lista.h elemento.c elemento.h Makefile