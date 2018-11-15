#include "sala34.h"

#define vivo 0
#define atirou 1
#define conversas 2
#define deitado 3
 

void imprimeConteudo(Elemento compartimento, int tamanho_hash)
{
	for(int i = 0; i < tamanho_hash; i++)
    {
    	Elo* andante = compartimento.conteudo.listas[i].cabec;
        Elemento * el;
        while(andante!=NULL){
        	el = (Elemento*) andante->val;
            if(el != NULL) puts(el->nome);
            andante = andante->next;
			
        }
    }	
}

int Colocar(Elemento* e1, Elemento* e2){
	if(Tbusca(personagem.conteudo, e1->nome)){ //Se a pessoa ja estiver vestindo o elemento
		printf("Voce ja esta vestindo %s %s", e1->artigos[0], e1->nome);
	}
	else if(e1->visivel && e1->ativo)
	{
		printf("Voce coloca %s %s\n", e1->artigos[0], e1->nome); //"Voce coloca a mascara" ou alguma outra coisa que de pra vestir
		Tinsere(personagem.conteudo, e1); //Coloca o elemento no jogador
		Tretira(atual.conteudo, e1->nome); //Tira o elemento da sala

		//Se vestir a mascara, as pessoas ficam ativas para interacao
		if(stringsIguais(e1->nome, "mascara"))
		{
			pessoas.ativo = True;
			puts("As pessoas que estavam se divertindo sem parecer notar sua presenca\n"
				 "Comecam homogeneamente a virar os olhos em sua direcao..\n"
				 "Alguns deles ate te convidam para interagir!\n"
				 "Parece que agora voce e visto!");
		}
		return 1;
	}
	return 0;
}


int Interagir(Elemento* e1, Elemento* e2){
	if(e1->ativo)
	{
		puts("Voce entra no meio da multidao, parece uma festa\n"
			 "Esta se sentindo aceito, uma sensacao bem acolhedora\n"
			 "Voce poderia ficar ali para sempre... Mas...\n"
			 "Quem e' voce mesmo?\n"); //So queria lembrar que na verdade e' a mascara que esta ali, nao sabia como, sintam-se livres para mudar :D
		return 1;
	}
	puts("Voce tenta interagir com a multidao, mas e excluido e completamente ignorado\n"
		 "Algo nao esta certo..\n");
	return 0;
}

int Abrir(Elemento* e1, Elemento* e2){
	if(e1->ativo && e1->visivel){
		//Deixa visivel e ativo tudo que tem dentro do elemento (envelope)
		printf("Voce abre %s %s e dentro ha:\n", e1->artigos[0], e1->nome);
		imprimeConteudo((*e1), 4);
		return 1;
	}
	return 0;
}

int Desligar(Elemento* e1, Elemento* e2){}

int Jogar(Elemento* e1, Elemento* e2){}

int Ligar(Elemento* e1, Elemento* e2){}

int Estourar(Elemento* e1, Elemento* e2){}

int Tocar(Elemento* e1, Elemento* e2){}

int Soltar(Elemento* e1, Elemento* e2){}

int Andar(Elemento* e1, Elemento* e2){}



int Ler(Elemento* e1, Elemento* e2){
	if(stringsIguais(e1->nome,"carta")) {
		//Texto qualquer.. achei que combinava, mas whatever, a formatacao nao testei pra ver se fica bom, qqr coisa so tirar
		puts("    Amo-te tanto, meu amor... não cante\n"
			 "    O humano coração com mais verdade...\n"
			 "     Amo-te como amigo e como amante\n"
			 "      Numa sempre diversa realidade.\n\n"

			 "  Amo-te afim, de um calmo amor prestante\n"
			 "   E te amo além, presente na saudade.\n"
			 "   Amo-te, enfim, com grande liberdade\n"
			 "  Dentro da eternidade e a cada instante.\n\n"

			 "    Amo-te como um bicho, simplesmente\n"
			 "   De um amor sem mistério e sem virtude\n"
			 "    Com um desejo maciço e permanente.\n\n"

			 "     E de te amar assim, muito e amiúde\n"
			 "    É que um dia em teu corpo de repente\n"
			 "   Hei de morrer de amar mais do que pude.\n");
		return 1;
	}
	return 0;
}


int Atirar(Elemento* e1, Elemento* e2){
	if(!stringsIguais(e1->nome,"arma")) return Jogar(e1, e2);
	if(e2 == NULL){
		e1->def.objeto.lista[atirou].val = 0;
		return 1;
	}
	if(stringsIguais(e2->nome,"homem")){
		printf("Um barulho ensurdecedor enche a sala. O homem cai no chão, sem vida. Seu coração é tão velho que não consegue jogar seu sangue para fora de seu corpo.\n");
		e2->def.objeto.lista[vivo].val = 0;
	}
	else if(stringsIguais(e2->nome,"espelho")){
		printf("A arma acerta o espelho, mas não causa dano algum.\n");

	}
	else if(stringsIguais(e2->nome,"personagem")){
		printf("Você aperta o gatilho. Depois disso, não há mais sentidos.\n");
		//ACABA O JOGO
		return 1;
	}
	return 1;
}


int Falar(Elemento* e1, Elemento* e2){
	int* instance = &(e1->def.objeto.lista[conversas].val); //ARRUMAR
	if((*instance)%4 == 0){
		printf("Há muito tempo eu estou aqui. Tanto que a própria palavra já perdeu o significado. O único jeito que eu sei que ele passa é por que vejo as marcas em meu corpo.\n");
		(*instance)++;
		return 1;
	}
	else if ((*instance)%4 == 1){
		printf("Às vezes eu me questiono das escolhas que fiz. Nada parece ter sido suficiente.\n");
		(*instance)++;
	}
	else if ((*instance)%4 == 2){
		printf("Não aguento mais isto tudo. Não tem nada que eu posso fazer neste ponto. Não há mais esperança para mim.\n");
		(*instance)++;
	}
	else if ((*instance)%4 == 3){
		printf("Sozinho. Tanto tempo, sozinho. Me fez perceber as mentiras que sempre ouvi. Eu estou sozinho. Não há ninguém comigo.\n");
		(*instance)++;
	}
}

int Beber(Elemento* e1, Elemento* e2){
	if(e1->nome != "garrafa") return 0;
	printf("O líquido desce por você aquecendo todo seu corpo. Você se sente bem, confiante, feliz. 'Tô um BURRP pouco feliz', você diz. Não há uma coisa ruim em seu corpo neste momento.\n");
	return 1;
}

int Deitar(Elemento* e1, Elemento* e2){
	if(e1->nome == "cama" && e1->def.objeto.lista[deitado].val == 1){
		printf("Você já está deitado.\n"); return 0;
	}
	else if(e1->nome == "cama"){
		printf("Você se deita na cama e sente como se seu corpo tivesse sido transportado aos céus. Todos seus músculos relaxam, e sua mente fica leve. 'Poderia ficar aqui para sempre', pensa.\n");
		e1->def.objeto.lista[deitado].val = 1;
		return 1;
	}
}

int Levantar(Elemento* e1, Elemento* e2){
	if(e1->nome == "cama" && e1->def.objeto.lista[deitado].val == 1){
		printf("Com muito esforço, você cria a determinação para levantar da cama. Seu corpo se sente pesado.\n");
		e1->def.objeto.lista[deitado].val = 0;
		return 1;
	}
	else if(e1->nome == "cama" && e1->def.objeto.lista[deitado].val == 0){
		printf("Você já está levantado.\n");
		return 0;
	}
}


int Comer(Elemento* e1, Elemento* e2){
	if(e1->nome == "cogumelo" /* && TEMCOGUMELO*/){
		printf("Repentinamente, todas as cores das salas se misturam e espalham como uma grande explosão. Os padrões aumentam, e sua mente transcende o plano físico. Tudo se enche de energia."
			"É a sensação mais bonita que você já teve.");
		/*TEMCOGUMELO--*/;
		return 1;
	}
}

int Pegar(Elemento* e1, Elemento* e2){
	if(e1->nome == "cogumelo"){
		printf("Ao tocar no cogumelo, você sente todo seu corpo vibrar de animação, mesmo sem entender de onde vem o sentimento. Mas algo sobre suas cores o fazem sentir em outro mundo.\n");
		/*TEMCOGUMELO++*/;
		return 1;
	}
}

int Gritar(Elemento* e1, Elemento* e2){}

int Chorar(Elemento* e1, Elemento* e2){}

int Sentar(Elemento* e1, Elemento* e2){}

int Quebrar(Elemento* e1, Elemento* e2){}

int Correr(Elemento* e1, Elemento* e2){}

void insereAcoes()
{
	personagem.acoes = malloc(sizeof(fptr));
	personagem.acoes[0] = Gritar;
	personagem.acoes[1] = Chorar;
	personagem.acoes[2] = Sentar;
	personagem.acoes[3] = Correr;
	personagem.acoes[4] = Andar;
	
	quadro.acoes = malloc(sizeof(fptr));
	quadro.acoes[0] = Examinar;
	
	disco.acoes = malloc(5*sizeof(fptr));
	disco.acoes[0] = Pegar;
	disco.acoes[1] = Soltar;
	disco.acoes[2] = Quebrar;
	disco.acoes[3] = Tocar; //colocar no gramofone
	disco.acoes[4] = Jogar;
	
	gramo.acoes = malloc(4*sizeof(fptr));
	gramo.acoes[0] = Pegar;
	gramo.acoes[1] = Soltar;
	gramo.acoes[2] = Desligar;
	gramo.acoes[3] = Ligar;
	
	balao.acoes = malloc(sizeof(fptr));
	balao.acoes[0] = Examinar;
	balao.acoes[1] = Pegar;
	balao.acoes[2] = Soltar;
	balao.acoes[3] = Estourar;
	balao.acoes[4] = Comer;
	
	envelope.acoes = malloc(3*sizeof(fptr));
	envelope.acoes[0] = Abrir;
	envelope.acoes[1] = Colocar;
	envelope.acoes[2] = Tirar;
	
	carta.acoes = malloc(sizeof(fptr));
	carta.acoes[0] = Ler;
	
	mascara.acoes = malloc(2*sizeof(fptr));
	mascara.acoes[0] = Colocar;
	mascara.acoes[1] = Tirar;

	pessoas.acoes = malloc(sizeof(fptr));
	pessoas.acoes[0] = Interagir;

	arma.acoes = malloc(2*sizeof(fptr));
	espelho.acoes = malloc(sizeof(fptr));
	homem.acoes = malloc(sizeof(fptr));
	garrafa.acoes = malloc(sizeof(fptr));
	cama.acoes = malloc(sizeof(fptr));
	cogumelos.acoes = malloc(sizeof(fptr));
	
}