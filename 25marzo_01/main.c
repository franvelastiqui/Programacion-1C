#include <stdio.h>
#include <stdlib.h>

int sumarNumeros(void);

int main()
{
    int resultado;

    resultado=sumarNumeros();

    printf("%d",resultado);

    return 0;
}

int sumarNumeros(void)
{
    int primerNumero;
    int segundoNumero;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d",&primerNumero);

    printf("Ingrese otro numero: ");
    scanf("%d",&segundoNumero);

    resultado=primerNumero+segundoNumero;

    return resultado;
}
