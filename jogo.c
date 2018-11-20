
#include "acoes.h"

int main(){
    puts("\nBem-vindo à \n\n"
        "ooooo              .o.       ooooooooo.   oooooooooooo ooooo ooooooooo.         .o.    \n"
        "`888'             .888.      `888   `Y88. `888'     `8 `888' `888   `Y88.      .888.    \n"
        " 888             .8'888.      888   .d88'  888          888   888   .d88'     .8`888.     \n"
        " 888            .8' `888.     888ooo88P'   888oooo8     888   888ooo88P'     .8' `888.    \n"
        " 888           .88ooo8888.    888`88b.     888    '     888   888`88b.      .88ooo8888.   \n"
        " 888       o  .8'     `888.   888  `88b.   888       o  888   888  `88b.   .8'     `888.  \n"
        "o888ooooood8 o88o     o8888o o888o  o888o o888ooooood8 o888o o888o  o888o o88o     o8888o \n"
        "A Aventura de Texto feita por Bento Pereira, Daniela Favero e Pedro Gigeck.\n\n"

        "'O lar é onde o coração do homem cria raízes.' -Henrik Ibsen\n\n"

        "Dor de cabeça. Ânsia. Escuridão. Turbulência na mente. O que houve? Você não sabe. Quem é você? \n"
        "Você nem se lembra de sua identidade. Onde você está? Abra seus olhos, len-ta-men-te.\n"
        "É uma sala comum. Você não faz ideia de onde está. Você só quer ir pra casa.\n\n");
    //Criar elementos
    salas();
    int online = 1;
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

    while(online){
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

}
