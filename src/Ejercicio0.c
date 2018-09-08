#include <stdio.h>
#include <stdlib.h>





int main(void) {

	int * punteroDinamico = malloc(4*sizeof(int));
	punteroDinamico[0] = 13;
	punteroDinamico[1] = 15;
	punteroDinamico[2] = 17;
	punteroDinamico[3] = 19;


	int i = 0;
	while(i < 4)
	{
		printf("%i\n",*(punteroDinamico+i));
		i++;
	}

	punteroDinamico = realloc(punteroDinamico,6*sizeof(int));

	punteroDinamico[4] = 12;
	punteroDinamico[5] = 13;
	printf("%i\n",*(punteroDinamico+1));
	printf("%i\n",*(punteroDinamico+4));
	printf("%i\n",*(punteroDinamico+5));

	free(punteroDinamico);


}
