#include <stdio.h>
#include <stdlib.h>
#include hash.h
int Examinar(*Elemento e1, *Elemento e2){
	puts(e1.longa);
}

typedef int (*fptr)(*Elemento, *Elemento);


fptr Examinar(*Elemento e1, *Elemento e2){
	if(e1.visivel != True) return 0;
	puts(e1.longa);
	return 1;
}
