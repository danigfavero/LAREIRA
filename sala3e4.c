//Pedaco de codigo avulso, tem que contextualizar cada parte ainda nao debbuguei direito, provavelmente vai ter que mudar varias coisas


Elemento personagem;
//Sala 3
Elemento sala3, sala4;
Elemento sala1, sala2, sala5, sala6, atual, personagem;

//Iniciando os atributos
sala3.nome = "sociedade";
sala3.longa = "Uma mascara chama bastante atencao no canto da sala,\n"
	          "Do outro lado, um grupo de pessoas parece se divertir..\n";
sala3.curta = "Sala sociedade.";
sala3.ativo = True;
sala3.visivel = True;
sala3.conhecido = False;

//Definindo as saidas
sala3.def.lugar.saidas[0] = &sala6;
sala3.def.lugar.saidas[1] = &sala6;
sala3.def.lugar.saidas[2] = &sala1;
sala3.def.lugar.saidas[3] = &sala2;

//Criando os elementos da sala;
//Mascara
Elemento mascara;
mascara.nome = "mascara";

mascara.artigos = malloc(2*sizeof(string));
mascara.artigos[0] = "a";
mascara.artigos[1] = "uma";

mascara.longa = "Uma mascara bem chamativa, nao parece muito com voce\n"
				"Mas de alguma maneira voce parece gostar mais da mascara que de si proprio.";
mascara.curta = "Uma mascara muito atraente";
mascara.ativo = False;
mascara.visivel = False;
mascara.conhecido = False;

mascara.def.objeto.lista = malloc(3*sizeof(atrib));
mascara.def.objeto.lista[0]->quali = "social"; //mascara social
mascara.def.objeto.lista[1]->quali = "atraente";
mascara.def.objeto.lista[2]->quali = "chamativa";

//Grupo de pessoas
Elemento pessoas;
pessoas.nome = "grupo de pessoas";
pessoas.longa = "Um grupo bem animado de pessoas, parecem estar se divertindo bastante\n"
pessoas.curta = "Grupinho de pessoas, ";
pessoas.ativo = False;
pessoas.visivel = False;
pessoas.conhecido = False;

/*------------------------------------
		ACOES DA SALA
--------------------------------------*/
					   
//Vestir/Colocar a mascara
int Colocar(Elemento* e1, Elemento* e2){
	if(Lbusca(personagem.contem)){ //Se a pessoa ja estiver vestindo o elemento
		puts("Voce ja esta vestindo %s %s", e1.artigos[0], e1.nome);
	}
	else if(e1->visivel && e1->ativo)
	{
		puts("Voce coloca %s %s\n", e1.artigos[0], e1.nome); //"Voce coloca a mascara" ou alguma outra coisa que de pra vestir
		LInsere(personagem.contem, e1); //Coloca o elemento no jogador
		Lretira(atual->contem, e1); //Tira o elemento da sala
		
		//Se vestir a mascara, as pessoas ficam ativas para interacao
		if(strIguais(e1.nome, "mascara"))
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

int Tirar(Elemento* e1, Elemento* e2){
	if(e2 == NULL) e2 = personagem; //Por default vamos retirar do personagem se nao especificado
	if(Lretira(e2->contem, e1)){ //Se conseguiu retirar
		Linsere(sala3->contem, e1); //Insere na sala de volta
		printf("Voce retirou %s %s e agora esta de volta na sala de origem", e1.artigos[0], e1.nome);
	}
	//Se nao conseguiu retirar
	else printf("%s %s nao contem nenh%s %s", e1->artigos[0], e1->nome, e2->artigos[1], e2->nome);
	if(/*stringsIguais(e1->nome,"mascara")*/ e1 == &mascara) {
		pessoas.ativo = FALSE; //Quando tira a mascara, as pessoas voltam a ficar inativas
		if(atual == sala3) puts("O grupo de pessoas divertidas que pareciam te acolher subitamente se fecha\n"
							    "E te isolam mais uma vez, parecendo nao notar sua presenca\n");
	}
}
					   
mascara.acoes = malloc(2*sizeof(fptr));
mascara.acoes[0] = Colocar;
mascara.acoes[1] = Tirar;
					   
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
					   
pessoas.acoes = malloc(sizeof(fptr));
pessoas.acoes[0] = Interagir;


//////////////////////////////////////////////
//        SALA 4                            //
//////////////////////////////////////////////

Elemento personagem;
//Sala 3
Elemento sala3, sala4;
Elemento sala1, sala2, sala5, sala6, atual, personagem;

//Iniciando os atributos
sala4.nome = "Remanescencia";
sala4.longa = "Uma mistura nostalgica de companheirismo e solidao\n"
	          "Toma conta do seu coracao quando nessa sala\n"
			  "Nela, voce encontra cartas e uma envelopegrafia.\n";
sala4.curta = "Sala remanescencia, com as cartas e a envelopegrafia.";
sala4.ativo = True;
sala4.visivel = True;
sala4.conhecido = False;

//Definindo as saidas
sala4.def.lugar.saidas[0] = &sala1;
sala4.def.lugar.saidas[1] = &sala1;
sala4.def.lugar.saidas[2] = &sala5;
sala4.def.lugar.saidas[3] = &sala6;

//Definindo os elementos
Elemento foto;
foto.nome = "fotografia";

foto.artigos = malloc(2*sizeof(string));
foto.artigos[0] = "a";
foto.artigos[1] = "uma";

foto.longa = "Uma linda foto de um casal em um parque,\n"
			 "Estao assistindo a um por do sol, abracados\n"
			 "Um registro de um momento perfeito, eterno..\n";
foto.curta = "Foto romantica de um casal";
foto.ativo = False;
foto.visivel = False;
foto.conhecido = False;

foto.def.objeto.lista = malloc(sizeof(atrib));
foto.def.objeto.lista[0]->quali = "romantica";

Elemento envelope;
envelope.nome = "envelope";

envelope.artigos = malloc(2*sizeof(string));
envelope.artigos[0] = "o";
envelope.artigos[1] = "um";

envelope.longa = "Um envelope sem destinatario, parece haver algo dentro.\n";
envelope.curta = "Envelope em braco";
envelope.ativo = False;
envelope.visivel = False;
envelope.conhecido = False;

//envelope.def.objeto.lista = malloc(sizeof(atrib));
//envelope.def.objeto.lista[0]->quali = "?";

Elemento carta;
carta.nome = "carta";

carta.artigos = malloc(2*sizeof(string));
carta.artigos[0] = "a";
carta.artigos[1] = "uma";

carta.longa = "Uma carta manuscrita com um poema romantico,\n"
			  "Ao longo do papel, manchas de lagrimas ja secas\n"
			  "Voce reconhece a caligrafia... mas nao consegue se lembrar da onde\n"
			  "O texto lhe traz uma saudade incompreensivel, e ao mesmo tempo um acolhimento amoroso\n"
			  "Quanto mais se le, mais dor, quanto mais dor, mais vontade de ficar na companhia daquelas palavras.\n";
carta.curta = "carta amorososa";
carta.ativo = False;
carta.visivel = False;
carta.conhecido = False;

envelope.conteudo = criaLista();
Linsere(envelope.conteudo, carta); //Coloca a carta no envelope

int Abrir(Elemento* e1, Elemento* e2){
	if(e1->ativo && e1->visivel){
		//Deixa visivel e ativo tudo que tem dentro do elemento (envelope)
		Elo percorre = e1->conteudo.cabec;
		while(percorre != NULL){
			percorre.val->ativo = True;
			percorre.val->visivel = True;
			printf("Dentro do envelope ha %s %s\n", percorre.val->artigos[1], percorre.val->nome);
			percorre = percorre.prox;
		}
		return 1;
	}
	return 0;
}

//Da pra abrir o envelope e colocar e tirar coisas de dentro dele (acoes da sala 3)
envelope.acoes = malloc(3*sizeof(fptr));
envelope.acoes[0] = Abrir;
envelope.acoes[1] = Colocar;
envelope.acoes[2] = Tirar;

int Ler(Elemento* e1, Elemento* e2){
	if(e1 == carta) {
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

carta.acoes = malloc(sizeof(fptr));
carta.acoes[0] = Ler;

