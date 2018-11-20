#include "lista.h"



/*
typedef struct TabSim{
	int size;
	Lista* listas;
}TabSim;*/

int hash(char*, int);
	//Definindo como será o hash das palavras


TabSim Tcria(int);
	//Criando uma tabela com tam listas


void Tdestroi(TabSim);
	//Percorre a tabela destruindo as listas dela

int Tinsere(TabSim, char*, Elemento*);
	//Calcula o hash do elemento, que é em qual lista ele será inserido
    //Devolve 1 se o elemento foi inserido com sucesso e 0 se não

Elemento* Tbusca(TabSim, char*);
	//Busca um elemento na tabela

int Tretira(TabSim, char*);
	//Busca um elemento na tabela para retirá-lo
