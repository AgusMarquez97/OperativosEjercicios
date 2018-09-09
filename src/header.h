/*
 * header.h
 *
 *  Created on: 8 sep. 2018
 *      Author: utnso
 */

#ifndef HEADER_H_
#define HEADER_H_

typedef struct
{
   char* nombre;
   char* apellido;
   int edad;
} t_persona;

char* string_concat(const char* a, const char* b)
{
	int x = strlen(a) + strlen(b);
	char aux = NULL;
	return aux;
}

void crearUnaPersona(t_persona* unaPersona,char* nombre, char* apellido, int edad)
{
	unaPersona->edad = edad;
	unaPersona->nombre = malloc(sizeof(nombre));
	unaPersona->nombre = nombre;
	unaPersona->apellido = malloc(sizeof(nombre));
	unaPersona->apellido = nombre;
}

void leerPersona(t_persona* unaPersona)
{
	printf("Los datos de la persona son: \n");
	printf("Nombre: %s\n", unaPersona->nombre);
	printf("Apellido: %s\n", unaPersona->apellido);
	printf("Edad: %d\n", unaPersona->edad);
}
/*
void liberarPersona(t_persona * unaPersona)
{
	free(unaPersona->nombre);
	free(unaPersona->apellido);
	free(unaPersona);
}
*/


#endif /* HEADER_H_ */
