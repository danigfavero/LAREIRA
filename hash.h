#include <stdio.h>
#include "lista.h"


typedef struct TabSim{
	int size;
	Lista* listas;
} TabSim;

int hash(char* s, int mod){
	//Definindo como será o hash das palavras
}

TabSim Tcria(int tam){
	//Criando uma tabela com tam listas
}

void Tdestroi(TabSim t){
	//Percorre a tabela destruindo as listas dela
}

int Tinsere(TabSim t, char *n, Elemento *val){
	//Calcula o hash do elemento, que é em qual lista ele será inserido
}

Elemento* Tbusca(TabSim t, char *n){
	//Busca um elemento na tabela
}

int Tretira(TabSim t, char *n){
	//Busca um elemento na tabela para retirá-lo
}
