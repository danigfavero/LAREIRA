//#include "jogo.tab.h"
#include "acoes.h"
struct inifunc {
  char *fname;
  fptr fnct;
};

/* Para objetos */
struct initobj {
  char *name;
  Elemento *obj;
};

/* Para lugares */
struct initlug {
  char *name;
  Elemento *lug;
};


/* Inicializa a tabela de símbolos passada como argumento */
Lista*  init_table(Lista *sym_table);
