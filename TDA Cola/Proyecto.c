/*
 * Proyecto.c
 * Por: Dr. Víctor Alberto Gómez Pérez
 * Universidad de la Sierra Sur
 */


#include <stdio.h>
#include <stdlib.h>
#include "Cola.h"
#define N 10

int main(){
	Cola x;
	int i,n,aux;
	system("clear");
	Crear_Cola(&x);
	for(i=0;i<5;i++){
		Insertar(&x,i+1);
	}
	printf("\nEl elemento del frente es: %d\n",Frente(&x));
	printf("Introduce un elemento a la cola: ");
	scanf("%d",&n);
	Insertar(&x,n);
	printf("\nEl elemento del frente es: %d\n",Frente(&x));
	printf("\nLos elementos de la cola son: \n");
	for(i=0;i<6;i++){
                printf("\nEl elemento del frente es: %d y lo elimino\n",Frente(&x));
		aux=Eliminar(&x);
		printf("%d\n",aux);
	}
	printf("El elemento del frente es: %d\n",Frente(&x));
        printf("El elemento del frente es: %d\n",Frente(&x));
        printf("El elemento del frente es: %d\n",Frente(&x));	
	/*Eliminar(&x);
        Eliminar(&x);
        Eliminar(&x);*/
	Insertar(&x,94);
        printf("El elemento del frente es: %d\n",Frente(&x));	
	return 0;
}
