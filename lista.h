#include <stdlib.h>
#include <stdio.h>
#include "elemento.h"

//Implementação conforme a sugestão
typedef struct elo {
	struct elo * next ;
	Elemento * val ;
} Elo ;

typedef struct {
	Elo * cabec ;
} Lista ;


Lista Lcria(void){
	//Instanciando uma lista e alocando o primeiro endereço (cabec)
}

int stringsIguais(char* s1, char* s2){
	//Função que verifica se duas strings são iguais, será usada na função de busca
}

void Ldestroi(Lista lista1){
	//Percorre a lista destruindo os elos dela
}

struct elo* Linsere(Lista lista1, Elemento* val){
	//Percorre a lista até chegar no final (crawler == NULL) ou
	//chegar em alguma posição vazia (crawler->val == NULL)
}

Elemento* Lbusca(Lista lista1, char* n){
	//Mesma estrutura do insere, percorre a lista até achar ou chegar no final
}

Elemento* Lretira(Lista lista1, Elemento* val){
	//Percorre a lista até encontrar o elemento para retirá-lo
}
