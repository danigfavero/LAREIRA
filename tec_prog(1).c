sala5.nome = "Reflexão ";
//artigos?
sala5.longa = "Ao entrar, a poeira instantaneamente o cega. Após alguns segundos, você consegue distiguinr alguns objetos.\n"
"Em uma parede há um espelho. Sua limpeza destoa do resto da sala. Mesmo sem muito luz, você consegue enxergar sua reflexão perfeitamente.\n"
"No canto mais empoirado da sala, você vê uma arma. Sua forma já se mistura com o ambiente, mas você consegue perceber a silhueta suave. Ninguém há toca em uma eternidade, aparentemente\n"
"E, no outro extremo, uma figura raquítica e curva se senta ao chão, abraçando os joelhos e com os olhos baixos. A pele parece ter começado a se dissolver de tão velha, e os olhos não apresentam "
"mais brilho algum. A vida já saiu deste homem.\n";
puts(sala5.longa);
sala5.curta = "Um homem, uma arma e um espelho. Não há nada mais aqui";
sala5.ativo = True;
sala5.visivel = True;
sala5.conhecido = False;
sala5.conteudo = {homem, arma, espelho};
sala5.def.lugar.saidas[0] = &sala2;
sala5.def.lugar.saidas[1] = &sala2;
sala5.def.lugar.saidas[2] = &sala6;
sala5.def.lugar.saidas[3] = &sala4;

Elemento arma;
arma.longa = "Incrustada de sujeira, ainda parece funcionar. O cano é tão longo quanto o de um revólver. É possível ver uma leve reflaxão no metal enferrujado por baixo da poeira.\n";
arma.curta = "Uma arma velha, suja e enferrujada.\n";
arma.ativo = True;
arma.visivel = True;
arma.conhecido = False;
arma.conteudo = NULL;
arma.acoes = {atirar};
arma.def.lista = {atirou};
arma.animacao = NULL;

Elemento espelho;
espelho.longa = "No meio da sujeira da sala, a limpeza desde espelho surpreende. Você consegue ver as reflexões do ambiente claramente, e de uma forma elas acabam parecendo bonitas, "
"apesar de toda a sujeira.\n"
"Ao se aproximar dele, você se vê. Mas algo está faltando, só não é capaz de dizer o quê.\n";
espelho.curta = "As reflexões trazem mais clareza para a sala do que ela mesma.\n";
espelho.ativo = True;
espelho.visivel = True;
espelho.conhecido = False;
espelho.conteudo = NULL;
espelho.acoes = NULL;
espelho.def.lista = NULL;
espelho.animacao = NULL;

Elemento homem;
homem.longa = "É um homem, velho e fraco. As marcas do tempo são aparentes: as rugas, os ossos expostos, a dor. Não há brilho nos seus olhos nem força no seu corpo. Você duvida "
"se ele sabe da sua presença, mas você sente a dele dentro de si. Um sentimento de angústia e desespero. Uma nostalgia doente. Um questionamento."
homem.curta = "Nada mais pode ser tirado observando-o.\n";
homem.ativo = True;
homem.visivel = True;
homem.conhecido = False;
homem.conteudo = NULL;
homem.acoes = {falar};
homem.def.lista = {vivo, conversas};
homem.animacao = NULL;

sala6.nome = "Hedonismo";
//artigos?
sala6.longa = "Cores vivas fazem as paredes brilharem aos seus olhos, padrões que se misturam o fazem sentir em um oceano de luz.\n"
"Um jardim dos mais diversos cogumelos cobre o chão da sala. Tamanhos, odores e cores. Nada parece fora do campo de possibilidades.\n";
"Uma garrafa simples mas atraente senta ao lado de uma cama grande, que exala leveza. Tudo cheira a natureza.\n"
puts(sala6.longa);
sala6.curta = "Uma imersão em natureza e sensações. Há muito para experimentar.\n";
sala6.ativo = True;
sala6.visivel = True;
sala6.conhecido = False;
sala6.conteudo = {garrafa, cama, cogumelos}
sala6.def.lugar.saidas[0] = &sala3;
sala6.def.lugar.saidas[1] = &sala3;
sala6.def.lugar.saidas[2] = &sala4;
sala6.def.lugar.saidas[3] = &sala5;

Elemento garrafa;
garrafa.longa = "Sua mente não consegue achar palavras para descrever o sentimento evocado dor essa garrafa. Sua beleza é simples, quase angelical.\n O líquido interno está em constante mudança, "
"variando pelas mais diversas cores. Uma visão perturbadora e atraente.\n";
garrafa.curta = "Seu conteúdo é um mistério, mas sua beleza é indescritível.\n"
garrafa.ativo = True;
garrafa.visivel = True;
garrafa.conhecido = False;
garrafa.conteudo = NULL;
garrafa.acoes = {beber};
garrafa.def.lista = NULL;
garrafa.animacao = NULL;

Elemento cama;
cama.longa = "Uma cama de linho, com dois travesseiros de penas de ganso. Um cobertor vermelho feito do mais macio dos veludos. Uma armação gloriosa, digna de um rei.\n" 
"Algo que você nunca sonhou em ver.\n";
cama.curta = "Parece muito macia.\n";
cama.ativo = True;
cama.visivel = True;
cama.conhecido = False;
cama.conteudo = NULL;
cama.acoes = {deitar, levantar};
cama.def.lista = {deitado};
cama.animacao = NULL;

Elemento cogumelos;
cogumelos.longa = "Um jardim multicolor, multitamanho e multifragrância. Você nunca viu tanta diversidade em um só lugar. Cada cogumelo evoca uma emoção, uma sensação.\n"
"É como ver infinitos novos jeitos de viver.\n";
cogumelos.curta = "É impossível saber o que eles farão com você.\n";
cogumelos.ativo = True;
cogumelos.visivel = True;
cogumelos.conhecido = False;
cogumelos.conteudo = NULL;
cogumelos.acoes = {comer, pegar};
cogumelos.def.lista = NULL;
cama.animacao = NULL;


//AÇÕOOOOOOOOOOOOOOOOOOOOOOOOOOES


