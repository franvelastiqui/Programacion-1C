#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int* x=NULL;
    int v=10;

    x=&v;

    printf("Valor de v: %d\n",v);
    printf("Direccion de v: %p\n",&v);
    printf("Direccion de x: %p\n",&x);
    printf("Valor de x: %p\n",x);
    printf("Valor al que apunta x: %d\n",*x);*/

    /*char letra;
    char* pLetra=NULL;

    pLetra=&letra;

    printf("aca pone un letra: ");
    fflush(stdin);
    scanf("%c",pLetra);*/

    int p;
    int* q=NULL;
    int* r=NULL;

    p=10;
    q=&p;
    r=q;

    printf("El valor de q es %p\n",q);
    printf("El valor de r es %p\n",r);
    printf("El valor de *q es %d\n",*q);
    printf("El valor de *r es %d\n",*r);

    return 0;
}
