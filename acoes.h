#include "salas.h"

#define vivo 0
#define atirou 1
#define conversas 2
#define deitado 3

void imprimeConteudo(Elemento compartimento, int tamanho_hash);
//Imprime a compartimento->conteudo, uma TabSim da struct Elemento

int Examinar(Elemento* e1, Elemento* e2);
//Imprime a descrição longa do objeto examinado (e1)

int Tirar(Elemento* e1, Elemento* e2);
//Retira a máscara (e1) do personagem (e2)

int Colocar(Elemento* e1, Elemento* e2);
//Coloca a máscara (e1) do personagem (e2)
//Permite o uso da função Interagir

int Interagir(Elemento* e1, Elemento* e2);
//Interage com o grupo de pessoas da sala 3
//Essa função só ocorre se a máscara estiver colocada (pela função Colocar)

int Abrir(Elemento* e1, Elemento* e2);
//Imprime o conteúdo de e1

int Desligar(Elemento* e1, Elemento* e2);
//Desliga o gramofone (e1), o que não gera efeitos reais pois essa é a intenção do jogo :-)

int Ligar(Elemento* e1, Elemento* e2);
//Assim como desligar o gramofone é inútil, ligar também é

int Estourar(Elemento* e1, Elemento* e2);
//Torna o balão inativo

int Tocar(Elemento* e1, Elemento* e2);
//Coloca o disco no gramofone

int Ler(Elemento* e1, Elemento* e2);
//Imprime a mensagem na carta (e1)

int Atirar(Elemento* e1, Elemento* e2);
//Atira usando a arma (e1) e o efeito causado depende do alvo (e2) do tiro

int Falar(Elemento* e1, Elemento* e2);
//Conversa com o homem da sala 5

int Beber(Elemento* e1, Elemento* e2);
//Consome o líquido da garrafa, mas o líquido é infinito! (De novo é parte do conceito da nossa aventura)

int Comer(Elemento* e1, Elemento* e2);
//Consome o cogumelo (e1), novamente um elemento infinito

int Deitar(Elemento* e1, Elemento* e2);
//Deitar-se na cama (e1) altera o atributo "deitado"

int Levantar(Elemento* e1, Elemento* e2);
//Levantar-se na cama (e1) altera o atributo "deitado"

int Pegar(Elemento* e1, Elemento* e2);
//Pegar um elemento (e1) e adicioná-lo ao conteúdo do personagem (e2)

int Soltar(Elemento* e1, Elemento* e2);
//Remover um elemento (e1) do conteúdo do personagem (e2)

int Quebrar(Elemento* e1, Elemento* e2);
//Torna e1 inativo

int Gritar(Elemento* e1, Elemento* e2);
//Imprime uma mensagem

int Chorar(Elemento* e1, Elemento* e2);
//Imprime uma mensagem

int Sentar(Elemento* e1, Elemento* e2);
//Imprime uma mensagem

int Correr(Elemento* e1, Elemento* e2);
//Imprime uma mensagem

void insereAcoes();
//Insere as funçãoes de ações nos respectivos objetos
