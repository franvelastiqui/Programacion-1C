#include <stdio.h>
#include <stdlib.h>

#include "Operaciones.h"
#include "Operaciones.c"

int main()
{
    float numeroUno;
    float numeroDos;
    int opcion;
    char seguir;
    char texto[50];
    int i;
    int flag=0;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;



    do
    {

        printf("1. Ingrese los numeros\n2. Realice las operaciones (suma, resta, multiplicacion, division y factorial).\n3. Salir.\nElija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:

            for(i=0;i<2;i++)
            {
                if(flag==0)
                {
                    texto[50]="Ingrese el primer numero: ";
                    numeroUno=pedirNumero(texto[50]);
                    flag=1;
                }
                else
                {
                    texto[50]="Ingrese el segundo numero: ";
                    numeroDos=pedirNumero(texto[50]);
                    flag=0;
                }
            }
        break;
        case 2:
            resultadoSuma=float sumarNumeros(float numeroUno, float numeroDos);
            resultadoResta=float restarNumeros(float numeroUno, float numeroDos);
            resultadoMultiplicacion=float multiplicarNumeros(float numeroUno, float numeroDos);
        break;
        case 3:
            printf("Estoy saliendo del programa\n");
            seguir='n';
        break;
        default:
            printf("No ingreso una ocion valida\n");
        break;
        }
        system("pause");
        system("cls");
    }while(seguir=='s');

    return 0;
}
