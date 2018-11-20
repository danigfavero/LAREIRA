
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
<<<<<<< HEAD
=======
    //Elemento atual = sala1;
>>>>>>> 8fd2e18aff955f27728a09b320275c554e8b58bf
    //Conectar salas
    //Colocar objetos em suas posições de início (inclusive o aventureiro?)

    while(online){
		
		puts("--------------------------- SALA 1 - INICIO ---------------------------\n");
		atual = &sala1;
		atual->visivel = True;
		atual->conhecido = False;
		quadro.visivel = True;
		
        Examinar(atual, NULL);
		puts("");
        imprimeConteudo(*atual, 4);
		
		puts("\nVamos examinar o quadro");
		Examinar(&quadro, NULL);
		
		puts("\nVamos examinar a sala antes de ir embora");
		Examinar(atual, NULL);
		
		//puts("\nVamos mover para o leste");
		//Mover(sala1, 2);
		
		//puts(atual.longa);

<<<<<<< HEAD
		puts("\n--------------------------- SALA 2 - AUDICAO ---------------------------\n");
		
		atual = &sala2;
		atual->visivel = True;
		atual->conhecido = False;
		gramo.visivel = True;
		balao.visivel = True;
		
        Examinar(atual, NULL);
		puts("");
        imprimeConteudo(*atual, 4);
		
		puts("\nVamos examinar o balao");
		Examinar(&balao, NULL);
		
		puts("\nVamos estourar o balao");
		Estourar(&balao, NULL);
		
		puts("\nVamos estourar o balao denovo");
		Estourar(&balao, NULL);
		
		puts("\nVamos examinar o gramofone");
		Examinar(&gramo, NULL);
		
		puts("\nVamos ligar o gramofone");
		Ligar(&gramo, NULL);
		
		puts("\nVamos desligar o gramofone");
		Desligar(&gramo, NULL);
		
		puts("\nVamos 'abrir' o gramofone");
		Abrir(&gramo, NULL);
		
		puts("\nVamos tirar o disco do gramofone");
		Tirar(&disco, &gramo);
		
		puts("\nVamos examinar o que tem na sala novamente");
		imprimeConteudo(*atual, 4);
		
		puts("\nVamos 'abrir' o gramofone novamente");
		Abrir(&gramo, NULL);
		
		puts("\nVamos colocar o disco do gramofone");
		Colocar(&disco, &gramo);
		
		puts("\nVamos 'abrir' o gramofone mais uma vez");
		Abrir(&gramo, NULL);
		
		puts("\nVamos examinar a sala antes de ir embora");
		Examinar(atual, NULL);
		
		//puts()
		online = 0;
=======
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
>>>>>>> 8fd2e18aff955f27728a09b320275c554e8b58bf
    }

}
