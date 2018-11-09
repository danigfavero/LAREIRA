#include <stdio.h>
#include <stdlib.h>
#include "hash.h"
#include "acoes.h"


int main(){
    printf("Bem-vindo à Lareira.\n");
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
	quadro.visivel = False;
	quadro.conhecido = False;
	quadro.contem = NULL;
	quadro.acoes = Examinar;
	
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
    No* crawler;

	printf("Vamos examinar o quadro\n");
	res = Examina(&quadro, NULL);
	printf("Conseguiu %d\n", res);
	
    Elemento sala2;
    sala2.nome = "";

	sala1.contem = sala2
    //Inicializa e inclui a tabela de símbolos
    //Inicializa variáveis
    Elemento atual = sala1;
    //Conectar salas
    //Colocar objetos em suas posições de início (inclusive o aventureiro?)


}
