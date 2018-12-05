%{
#include <stdio.h>
//#include "lista.h"
//#include "salas.h"
#include "acoes.h"
//#include "elemento.h"

int yylex();
int yyerror(char *);

%}


/* Declaracoes */
%union {
  void *tptr;
  char *str;
  int  direc;
}

%token <tptr> VERBO OBJ LUGAR

/* DESC representa uma palavra desconhecida */
%token <str> DESC
%token  NORTE SUL LESTE OESTE VAPARA EOL FIM INVENT

%type <direc> dir
%type <tptr> obj

%defines

%%
/* Gramatica */


input: EOL		{ printf("Zzzz...\n"); }
    | cmd
	| VAPARA  {
	  		   /* movimentação */
	  		   printf("Seguindo para ");
	  		  }
			  dir {
					if ($3 >= 0 && atual->def.lugar.saidas[$3]) {
					  atual = atual->def.lugar.saidas[$3];
					  Examinar(NULL,NULL);
					}
					else puts("Não há passagem....");
			      } eol
	 | dir {
			 /* movimentação  */
             if ($1 >= 0 && atual->def.lugar.saidas[$1]) {
			   atual = atual->def.lugar.saidas[$1];
			   printf("Você foi para %s\n", atual->nome);
			   Examinar(atual,NULL);
			 }
			 else puts("Não há passagem....");
											} eol

	| INVENT {
			 /* listagem do inventário */
			 if (Tvazia(personagem.conteudo))
                puts("Você está sem nada no momento...");
			 else {
                puts("Você tem:");
                imprimeConteudo(personagem, 4);
             }

		 } eol
	| FIM  { return 0;}
	| DESC { puts("Nada do que você diz está fazendo sentido.");}
	| error eol;
;

cmd: VERBO {
			    /* Intransitivo */
          //Busca o verbo na lista e realiza a acao;
  	 	    fptr acao = (fptr) LBuscaGlobal(sym_table, $1);
          acao(NULL, NULL);
		   } eol
   | VERBO obj {
			   /* Transitivo direto */
         //Busca o verbo e o objeto
			     fptr acao = (fptr) LBuscaGlobal(sym_table, $1);
           Elemento *e = (Elemento*) LBuscaGlobal(sym_table, $2);
           acao(e, NULL);
			 } eol
   | VERBO obj obj {
          /* Bitransitivo */
          //Busca o verbo e os dois objetos
			    fptr acao = (fptr) LBuscaGlobal(sym_table, $1);
          Elemento *e = (Elemento*) LBuscaGlobal(sym_table, $2);
          Elemento *e2 = (Elemento*) LBuscaGlobal(sym_table, $3);
          acao(e, e2);
			   } eol
   | VERBO DESC {
			     printf("%s??\n", $2);
			 } eol
   | VERBO obj DESC {
			   printf("não sei o que é isso: %s\n",  $3);
			   } eol
   | VERBO DESC DESC {
			     printf("Pare de jogar e vá descansar um pouco\n"
						"Fazer isso com %s e %s, que coisa\n", $2,$3
						);
			   } eol
;

obj: OBJ    { $$ = $1;}
   | LUGAR  { $$ = $1;}

dir: NORTE	  { puts("norte"); $$=0;}
	 | SUL	  { puts("sul");   $$=1;}
	 | LESTE  { puts("leste"); $$=2;}
	 | OESTE  { puts("oeste"); $$=3;}
	 | DESC   { puts("... (onde é isso?)"); $$=-1;}
;

eol: EOL {return 1;}
%%

int yyerror(char *s) {
  puts("Não entendi...");
  return 0;
}
