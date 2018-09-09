#include <stdio.h>
#include <stdlib.h>
#include "guiaEjercicios.h"


void* izi_concat(const char* a, const char* b, const char** d)
{
	strcat(*d,a);
	strcat(*d,b);

}

int main(void) {


	char* palabra1 = "Hola";
	char* palabra2 = " Todo bien?";
	int x = strlen(palabra1) + strlen(palabra2) - 1;
	char* pal3 = malloc(x);
	izi_concat(palabra1,palabra2,&pal3);
	printf("%s\n",pal3);

}






