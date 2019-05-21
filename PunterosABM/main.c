#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "punterosABM.h"

#define T 5

int main()
{
    int* pNumeros;
    int i;
    int* auxNumeros;

    pNumeros=(int*) malloc(sizeof(int)*T);

    if(pNumeros!=NULL)
    {

        for(i=0; i<T; i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",pNumeros+i);
        }

        for(i=0; i<T; i++)
        {
            printf("%d\n",*(pNumeros+i));
        }

        auxNumeros=(int*)realloc(pNumeros,sizeof(int)*(T+5));

        if(auxNumeros!=NULL)
        {
            pNumeros=auxNumeros;
            free(auxNumeros);

            for(i=T; i<T+5; i++)
            {
                printf("Ingrese el nuevo numero: ");
                scanf("%d",pNumeros+i);
            }

            for(i=T; i<T; i++)
            {
                printf("%d\n",*(pNumeros+i));
            }

        }
        else
        {
            printf("No hay lugar flaco, que no entendes?");
        }

    }

    return 0;
}
