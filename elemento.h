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
	Elemento* saidas;
} Lugar;

typedef union{
	Objeto objeto;
	Lugar lugar;
}detalhe;

typedef struct No{
	Elemento* elemento;
	struct No* prox;
}No;



typedef struct Elemento{
	string nome;
	string* artigos;
	string longa;
	string curta;
	bool ativo;
	bool visivel;
	bool conhecido;
	No* contem;
	int* (*acoes)(struct Elemento*, struct Elemento*);
	void* animacao;
	detalhe def;
}Elemento;
