
#include "sala34.h"


int main(){
    printf("Bem-vindo à Lareira.\n"); //Introduz a história
    //Criar elementos

/*	typedef struct sala{
		Elemento sala;
		struct sala * saidas;
	} Sala;

*/
    printf("Vamos testar a sala 3\n");
    //Inicializa e inclui a tabela de símbolos
    //Inicializa variáveis
    Elemento atual = sala1;
    //Conectar salas
    //Colocar objetos em suas posições de início (inclusive o aventureiro?)
    sala34();
    /*printf("Coisas que tem na sala 3:\n");
    for(int i = 0; i < 4; i++)
        if(sala3.conteudo.listas[i].cabec != NULL){
                Elo* andante = sala3.conteudo.listas[i].cabec;
                Elemento * el;
                printf("Vamos imprimir oq tem na sala 3\n");
                while(andante!=NULL){
                    e = andante->val;
                    el = (Elemento*) andante->val;
                    puts(el->nome);
        //puts("Tem alguma coisa!\n");
                    andante = andante->next;
                }
            }*/



}
