#include "hash.h"

/*int Examinar(Elemento* e1, Elemento* e2){
	puts(e1.longa);
}*/

typedef int (*fptr)(Elemento*, Elemento*);


int Examinar(Elemento* e1, Elemento* e2){
	if(e1->visivel) puts(e1->longa);
	return e1->visivel;
}
