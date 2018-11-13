
#include "sala34.h"


int main(){
    puts("Bem-vindo à Lareira.\n"); //Introduz a história
    //Criar elementos

/*	typedef struct sala{
		Elemento sala;
		struct sala * saidas;
	} Sala;

*/
    //Inicializa e inclui a tabela de símbolos
    //Inicializa variáveis
    Elemento atual = sala1;
    //Conectar salas
    //Colocar objetos em suas posições de início (inclusive o aventureiro?)
    puts("Comecando sala 1 2 \n");
    sala12();
    puts("Comecando sala 3 4 \n");
    sala34();
    puts("Comecando sala 5 6 \n");
    sala56();
    puts("Coisas que tem na sala 3:\n");


    for(int i = 0; i < 4; i++)
    {
        printf("lista anda\n");
        if(sala3.conteudo.listas[i].cabec != NULL){
            Elo* andante = sala3.conteudo.listas[i].cabec;
            Elemento * el;
            puts("Vamos imprimir oq tem na sala 3\n");
            while(andante!=NULL){
                el = (Elemento*) andante->val;
                puts(el->nome);
        //puts("Tem alguma coisa!\n");
                andante = andante->next;
                if(andante == NULL) puts("acabou essa lista\n");
            }
        }
    }
}
