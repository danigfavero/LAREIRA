%{
#include <stdio.h>
#include "lista.h"
#include "salas.h"
#include "acoes.h"

int yylex();
int yyerror(char *);

/* Macro para simplificar a escrita das chamadas de função */
#define F(x) (*(fptr)(x->cabec->value))

/* Identifica qual a versão correta do verbo chamado */
Lista * AcertaF(Lista *f, Lista *o1) {
  Lista *s;

  /* Verifica se existe uma versão especial no local atual (atual) */

  if ((s = Tbusca(atual->conteudo, f->cabec->fname)))
	return s;
  return f;
}
%}

/* Declaracoes */
%union {
  Lista *tptr;
  char *str;
  int  direc;
}

%token <tptr> VERBO OBJ LUGAR

/* DESC representa uma palavra desconhecida */
%token <str> DESC
%token  NORTE SUL LESTE OESTE CIMA BAIXO VAPARA EOL FIM INVENT

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
  	 	     F(AcertaF($1,NULL))(NULL,NULL);
		   } eol
   | VERBO obj {
			   /* Transitivo direto */
			   F(AcertaF($1,$2))($2->cabec->value,NULL);
			 } eol
   | VERBO obj obj {
                 /* Bitransitivo */
			     F(AcertaF($1,$2))($2->cabec->value,$3->cabec->value);
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
