#include <stdio.h>
#include <stdlib.h>

void sumarNumeros(int , int );

int main()
{
    int primer;
    int segundo;

    printf("Ingrese el primer numero: ");
    scanf("%d",&primer);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&segundo);

    sumarNumeros(primer, segundo);

    return 0;
}

void sumarNumeros(int unNum, int otNum)
{
    int resultado;

    resultado=unNum + otNum;

    printf("%d",resultado);
}
