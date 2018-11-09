#include <stdio.h>
#include <stdlib.h>

typedef enum{
	False, True
}bool;

typedef char* string;

typedef union{
	int val;
	string quali;
} atrib;

typedef struct{
	atrib* lista;
} Objeto;

typedef struct{
	void* saidas[4];
} Lugar;

typedef union{
	Objeto objeto;
	Lugar lugar;
}detalhe;

typedef struct elo{
	struct elo * next ;
	void* val ;
}Elo;

typedef struct{
	Elo * cabec ;
}Lista;

typedef struct Elemento{
	string nome;
	string* artigos;
	string longa;
	string curta;
	bool ativo;
	bool visivel;
	bool conhecido;
	Lista conteudo;
	int (**acoes)(struct Elemento*, struct Elemento*);
	void* animacao;
	detalhe def;
}Elemento;
