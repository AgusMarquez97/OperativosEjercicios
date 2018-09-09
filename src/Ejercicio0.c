#include <stdio.h>
#include <stdlib.h>
#include "guiaEjercicios.h"

char* izi_concat(const char* a, const char* b)
{
	int x = strlen(a) + strlen(b) -1;
	char* c = malloc(x);
	strcat(c,a);
	strcat(c,b);
	return c;
}
char* string_concat3(const char* a, const char* b)
{
	int x = strlen(a) + strlen(b) -1;
	char* c = malloc(x);

	int i = 0;
	int j = 0;

	while( *(a + i) != '\0')
	{
		*(c + i) = *(a + i);
		i++;
	}
	while( *(b + j) != '\0')
	{
		*(c + i) = *(b + j);
		i++;
		j++;
	}

	*(c + i) = '\0';
	return c;
}

int main(void) {


	char* palabra1 = "Hola";
	char* palabra2 = " Todo bien?";


	printf("%s\n",palabra1);

	char *concatenado = string_concat3(palabra1,palabra2);
	printf("%s\n",concatenado);

	char * conc2 = izi_concat(palabra1,palabra2);
	printf("%s\n",conc2);

	printf("%d\n",strlen(concatenado));
	printf("%d\n",strlen(conc2));

	printf("%s\n",palabra1);

}






