#include <stdio.h>
#include <stdlib.h>

/*Prototipo o firmas:
    Que recibe y que devuelve la funcion

    tipo_de_dato identificador ([parametros]);

    int sumarNumeros(int unNumero, int otroNumero);*/

int sumarNumeros(int , int );

int main()
{
    int numUno;
    int numDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numDos);

    resultado=sumarNumeros(numUno, numDos);

    printf("%d",resultado);

    return 0;
}

int sumarNumeros(int unNumero, int otroNumero)
{
    int resultado;

    resultado=unNumero + otroNumero;

    return resultado;
}
