#include <stdlib.h>
#include <stdio.h>
#include "elemento.h"
//int main(){printf("Lista funcionando \n");}
Lista Lcria(void){
	//Instanciando uma lista e alocando o primeiro endereço (cabec)
	Lista s;
	s.cabec = malloc(sizeof(Elo));
	//Definindo o próximo elo vazio (fim da lista)
	s.cabec->next = NULL;
	s.cabec->val = NULL;
	return s;
}



int stringsIguais(char* s1, char* s2)
{
	int i;
	for(i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++);
	if(s1[i] == '\0' && s2[i] == '\0') return 1;
	return 0;
}

void Ldestroi(Lista lista1){
	//Endereço de elo que percorrerá a lista
	Elo* crawler = lista1.cabec;
	//Enquanto não chegar no final da lista
	while(crawler != NULL){
		//Salva o endereço do atual
		Elo* aux = crawler;
		//Avança o crawler (para desalocar o próximo)
		crawler = crawler->next;
		//Limpa o atual
		//if(aux->val != NULL) printf("Estamos livrando o %s\n",aux->val->nome);
		aux->val = NULL;
		free(aux);
	}
	printf("livrou uma lista inteira\n");
	return;
}

Elo* Linsere(Lista lista1, Elemento* val){
	//Percorre a lista até chegar no final (crawler == NULL) ou chegar em alguma posição vazia (crawler->val == NULL)
	Elo* crawler = lista1.cabec;
	while(crawler != NULL && crawler->val != NULL){
		//Achando o último elemento da lista e inserindo mais um
		if(crawler->next == NULL)
		{
			Elo* proximo = malloc(sizeof(Elo));
			proximo->val = val;
			proximo->next = NULL;
			crawler->next = proximo;
			return (crawler->next);

		}
		crawler = crawler->next;
	}

	//Se achou uma posição sem valor, podemos apenas inserir
	if(crawler != NULL) crawler->val = val;
	return crawler;
}

Elemento* Lbusca(Lista lista1, char* n){
	//Mesma estrutura do insere, percorre a lista até achar ou chegar no final
	printf("aloo\n");
	Elo* crawler = lista1.cabec;
	printf("segf aquii\n");
	Elemento* e = (Elemento*) crawler->val;
	printf("estamos buscando o %s e a caveca da lista e %s\n", n, e->nome);
	while(crawler != NULL){
		e = (Elemento*) crawler->val;
		if(crawler->val != NULL && stringsIguais(e->nome, n)){
			return crawler->val;
		}
		crawler = crawler->next;
	}
	return NULL;
}

Elemento* Lretira(Lista lista1, Elemento* val){
	//Percorre a lista até encontrar o elemento
	Elo* crawler = lista1.cabec;
	Elemento* e;
	while(crawler != NULL){
		if(crawler->val == val){
			e = (Elemento *) crawler->val;
			//Apaga o antigo valor e anula o ponteiro
			free(e->nome);
			free(crawler->val);
			crawler->val = NULL;
			return val;
		}
		crawler = crawler->next;
	}
	return NULL;
}
