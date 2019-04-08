#include <stdio.h>
#include <stdlib.h>
#include "Numeros.h"

#define T 5

int main()
{
    int valorDeVector[T];
    int numeroMayor;
    int valor;
    int indice;

    cargar(valorDeVector,T);

    ordenarVector(valorDeVector,T);

    mostrar(valorDeVector,T);

    /*numeroMayor=buscarMaximo(valorDeVector,T);

    printf("El numero mayor es %d\n",numeroMayor);

    indice=buscarValor(valorDeVector,T,valor);

    if(indice==-1)
    {
        printf("No se encontraron resultados.");
    }
    else
    {
        printf("El indice es: %d",indice);
    }*/

    return 0;
}
