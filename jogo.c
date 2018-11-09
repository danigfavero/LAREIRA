#include "acoes.h"



int main(){
    printf("Bem-vindo à Lareira.\n"); //Introduz a história
    //Criar elementos

/*	typedef struct sala{
		Elemento sala;
		struct sala * saidas;
	} Sala;

*/
	int res;

	Elemento quadro;
	quadro.nome = "quadro";
	//quadro.artigos
	quadro.longa = "Um quadro escrito ALGUMA COISA ESCAPA AO NAUFRÁGIO DAS ILUSÕES\n";
	quadro.curta = "um quadro";
	quadro.ativo = True;
	quadro.visivel = True;
	quadro.conhecido = False;
	quadro.conteudo = Lcria();
	quadro.acoes = malloc(sizeof(fptr));
    quadro.acoes[0] = Examinar;

    Elemento sala1;
    sala1.nome = "inicio";
    //artigos?
    sala1.longa = "É uma sala claustrofóbica e pouco iluminada."
    "Tudo o que existem são quatro portas ao seu redor, uma em cada parede.\n"
    ""
    "com letras trêmulas. É preciso ir pra algum lugar.";
    puts(sala1.longa);
    sala1.curta = "Esta é a sala inicial, aquela na qual você acordou.";
    sala1.ativo = True;
    sala1.visivel = True;
    sala1.conhecido = False;
    sala1.conteudo = Lcria();
    Linsere((sala1.conteudo), &quadro);

    


    //No* crawler;

	printf("Vamos examinar o quadro\n");
	res = quadro.acoes[0](Lbusca(sala1.conteudo, "quadro"), NULL);
	printf("Conseguiu %d\n", res);

    Elemento sala2;
    sala2.nome = "sala2 :D";

    /*Elo* no_sala2 = malloc(sizeof(Elo));
    no_sala2->val = &sala2;
    no_sala2->next = NULL;*/

    Linsere(sala1.conteudo, &sala2);

    Elemento* e;
	printf("Coisas que tem na sala 1:\n");
    Elo* andante = sala1.conteudo.cabec;
    while(andante!=NULL){
        e = andante->val;
        puts(e->nome);
        //puts("Tem alguma coisa!\n");
        andante = andante->next;
    }
    //Inicializa e inclui a tabela de símbolos
    //Inicializa variáveis
    Elemento atual = sala1;
    //Conectar salas
    //Colocar objetos em suas posições de início (inclusive o aventureiro?)


}
