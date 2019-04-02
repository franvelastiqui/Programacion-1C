#include "Numeros.h"

void cargar(int valor[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&valor[i]);
    }

}

void mostrar(int numero[], int tam)
{
     int i;

     for(i=0; i<tam; i++)
    {
        printf("%d\n",numero[i]);
    }
}

int buscarMaximo(int unNumero[], int tam)
{
    int mayor;
    int i;
    int flag=0;

    for(i=0; i<tam; i++)
    {
        if (unNumero[i]>mayor || flag==0)
        {
            mayor=unNumero[i];
            flag=1;
        }
    }

    return mayor;
}

int buscarValor(int numero[], int tam, int valor)
{
    int i;
    int indice=-1;

    printf("Ingrese numero a buscar: ");
    scanf("%d",&valor);


    for(i=0;i<tam;i++)
    {
        if(valor==numero[i])
        {
            indice=i;
        }
    }

    return indice;
}

