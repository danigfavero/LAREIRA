
void sala12(){

Elemento personagem;
personagem.nome = "você";
//quadro.artigos
personagem.longa = "Esse é você mesmo. Não tem muito que você se lembre sobre.";
personagem.curta = "Você mesmo.";
personagem.ativo = True;
personagem.visivel = True;
personagem.conhecido = False;
personagem.conteudo = Lcria();
Linsere((personagem.conteudo), &personagem);
personagem.acoes = malloc(sizeof(fptr));
personagem.acoes[0] = Gritar;
personagem.acoes[1] = Chorar;
personagem.acoes[2] = Sentar;
personagem.acoes[3] = Correr;
personagem.acoes[4] = Andar;

Elemento quadro;
quadro.nome = "quadro";
//quadro.artigos
quadro.longa = "Um quadro escrito ALGUMA COISA ESCAPA AO NAUFRÁGIO DAS ILUSÕES\n";
quadro.curta = "um quadro";
quadro.ativo = True;
quadro.visivel = True;
quadro.conhecido = False;
quadro.conteudo = Lcria(); //o quadro não contém nada
quadro.acoes = malloc(sizeof(fptr));
quadro.acoes[0] = Examinar;

Elemento sala1;
sala1.nome = "inicio";
//artigos?
sala1.longa = "É uma sala claustrofóbica e pouco iluminada."
"Tudo o que existem são quatro portas ao seu redor, uma em cada parede."
"Em uma das paredes há também um grande quadro com algo escrito.";
sala1.curta = "Esta é a sala inicial, aquela na qual você acordou.";
sala1.ativo = True;
sala1.visivel = False;
sala1.conhecido = False;
sala1.conteudo = Lcria();
sala1.def.lugar.saidas[0] = &sala4;
sala1.def.lugar.saidas[1] = &sala4;
sala1.def.lugar.saidas[2] = &sala2;
sala1.def.lugar.saidas[3] = &sala3;
Linsere((sala1.conteudo), &quadro);
sala1.acoes = malloc(sizeof(fptr));
sala1.acoes[0] = Examinar;
sala1.acoes1[1] = Sair;

Elemento disco;
disco.nome = "disco";
//quadro.artigos
disco.longa = "Um disco de vinil sem informações, encontrado no gramofone e sem capa por perto.";
disco.curta = "O disco de vinil.";
disco.ativo = True;
disco.visivel = False;
disco.conhecido = False;
disco.conteudo = Lcria();
disco.acoes = malloc(sizeof(fptr));
disco.acoes[0] = Examinar;
disco.acoes[1] = Pegar;
disco.acoes[2] = Soltar;
disco.acoes[3] = Quebrar;
disco.acoes[4] = Tocar; //colocar no gramofone
disco.acoes[5] = Arremessar;

Elemento gramo;
gramo.nome = "gramofone";
//quadro.artigos
gramo.longa = "Um gramofone autêntico, antigo mas muito bem conservado."
"Sua caixa é feita de madeira envernizada e o amplificador é dourado, muito delicado.";
gramo.curta = "O autêntico gramofone.";
gramo.ativo = True;
gramo.visivel = False;
gramo.conhecido = False;
gramo.conteudo = Lcria();
Linsere((gramo.conteudo), &disco);
gramo.acoes = malloc(sizeof(fptr));
gramo.acoes[0] = Examinar;
gramo.acoes[1] = Pegar;
gramo.acoes[2] = Soltar;
gramo.acoes[3] = Desligar;
gramo.acoes[4] = Ligar;

Elemento balao;
balao.nome = "balão";
//quadro.artigos
balao.longa = "Um balão vermelho, cheio de ar";
balao.curta = "O balão vermelho.";
balao.ativo = True;
balao.visivel = False;
balao.conhecido = False;
balao.conteudo = Lcria();
balao.acoes = malloc(sizeof(fptr));
balao.acoes[0] = Examinar;
balao.acoes[1] = Pegar;
balao.acoes[2] = Soltar;
balao.acoes[3] = Estourar;
balao.acoes[4] = Comer;

Elemento sala2;
sala2.nome = "audição";
//artigos?
sala2.longa = "Nessa sala toca uma música melodiosa, muito agradável."
"A melodia penetra seus ouvidos e eleva os humores, lhe causando uma sensação de pertencimento."
"Há aqui um gramofone (a música parece vir de lá) e um balão.";
sala2.curta = "Esta é a sala onde toca uma música.";
sala2.ativo = True;
sala2.visivel = False;
sala2.conhecido = False;
sala2.conteudo = Lcria();
Linsere((sala2.conteudo), &gramo);
Linsere((sala2.conteudo), &balao);
sala2.def.lugar.saidas[0] = &sala5;
sala2.def.lugar.saidas[1] = &sala5;
sala2.def.lugar.saidas[2] = &sala3;
sala2.def.lugar.saidas[3] = &sala1;
}

/*
AÇÕES
*/

int Pegar(Elemento* voce, Elemento* ){
	printf("O %s está na sua mão");
}

int Sair(Elemento* sala, null){
	if()
}
