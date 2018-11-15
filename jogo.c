
#include "acoes.h"

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
    puts("\nComecando sala 3 4 \n");
    sala34();
	sala_4();
    puts("\nComecando sala 5 6 \n");
    sala56();

	puts("\nConteudo sala1:");
	imprimeConteudo(sala1, 4);
	
	puts("\nConteudo sala2:");
	imprimeConteudo(sala2, 4);
	
	puts("\nConteudo sala3:");
	imprimeConteudo(sala3, 4);
	
	puts("\nConteudo sala4:");
	imprimeConteudo(sala4, 4);
	
	puts("\nConteudo sala5:");
	imprimeConteudo(sala5, 4);
	
	puts("\nConteudo sala6:");
	imprimeConteudo(sala6, 4);
 
}
