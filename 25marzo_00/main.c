#include <stdio.h>
#include <stdlib.h>

void sumarNumeros(void);

int main()
{

    return 0;
}

void sumarNumeros(void)
{
    int numUno;
    int numDos;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&numUno);

    printf("Ingrese otro numero: ");
    scanf("%d",&numDos);

    resultado=numUno+numDos;

    printf("%d",resultado);
}
