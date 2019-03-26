#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Se ingresan numeros enteros (distintos de cero) hasta que el usuario quiera.
    Infromar:
    -Cantidad de numeros ingresados
    -Cantidad de pares
    -Suma de los positivos
    -Promedio de los negativos
    -Maximo y minimo
    -Minimo de los positivos
    -Maximo de los negativos
    -Cantidad de los numeros entre el -10 y el 50
    -Promedio total
    */

    int numero;
    char respuesta;
    int contadorIngresados=0;
    int contadorPares=0;
    int acumuladorPositivos=0;
    int acumuladorNegativos=0;
    int contadorNegativos=0;
    int promedioNegativos;
    int numMax;
    int numMin;
    int minPositivos;
    int maxNegativos;
    int acumuladorIngresados=0;
    int contadorEntre=0;
    int promedioTotal;
    int flag=0;
    int flagP=0;
    int flagN=0;

    do{
    printf("Ingrese un numero distinto de cero: ");
    scanf("%d",&numero);
    while(numero==0){
        printf("Error. Ingrese un numero distinto de cero: ");
        scanf("%d",&numero);
    }

    contadorIngresados++;
    acumuladorIngresados+=numero;

    if(numero%2==0){
        contadorPares++;
    }

    if(numero>0){
        acumuladorPositivos+=numero;
        if(flagP==0 || numero<minPositivos){
            minPositivos=numero;
            flagP=1;
        }
    }
    else{
        acumuladorNegativos+=numero;
        contadorNegativos++;
        if(flagN==0 || numero>maxNegativos){
            maxNegativos=numero;
            flagN=1;
        }
    }

    if(flag==0 || numero<numMin){
        numMin=numero;
    }
    if(flag==0 || numero>numMax){
        numMax=numero;
        flag=1;
    }

    if(numero>=-10 && numero<=50){
        contadorEntre++;
    }

    printf("Ingrese s para continuar: ");
    scanf("%c",&respuesta);

    }while(respuesta!='s');

    promedioNegativos=acumuladorNegativos/contadorNegativos;
    promedioTotal=acumuladorIngresados/contadorIngresados;

    printf("Numeros ingresados: %d\nPares ingresados: %d\nSuma de positivos: %d\nPromedio de negativos: %d\nMaximo: %d\nMinimo: %d\nMinimo de positivos: %d\nMaximo de negativos: %d\nCantidad entre -10 y 50: %d\nPromedio total: %d",contadorIngresados,contadorPares,acumuladorPositivos,promedioNegativos,numMax,numMin,minPositivos,maxNegativos,contadorEntre,promedioTotal);

    return 0;
}
