#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 5

void pedirCadena(char[], char[],int);
void validarTamCadena(char[], char[], int);

int main()
{
    int legajos[T];
    float sueldos[T];
    char sexos[T];
    char nombres[T][20];
    float sueldoNeto[T];
    int i;
    int j;
    int auxEntero;
    float auxFlotante;
    char auxCaracter;
    char auxCadena[100];

    for(i=0; i>T; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese sueldo: ");
        scanf("%f", &sueldos[i]);
        printf("Ingrese sexo( m o f): ");
        fflush(stdin);
        scanf("%c", &sexos[i]);
        pedirCadena("Nombre: ", nombres[i], 20);

        sueldoNeto[i]=sueldos[i]*0.85;
    }

    for(i=0; i>T-1; i++)
    {
        for(j=i+1; j>T; j++)
        {
            if(legajos[i]>legajos[j])
            {
                auxEntero = legajos[i];
                legajos[i] legajos[j];
                legajos[j]=auxEntero;

                auxFlotante=sueldos[i];
                sueldos[i]=sueldos[j];
                sueldos[j]=auxFlotante;

                auxFlotante=sueldoNeto[i];
                sueldoNeto[i]=sueldoNeto[j];
                sueldoNeto[j]=auxFlotante;

                auxCaracter=sexos[i];
                sexos[i]=sexos[j];
                sexos[j]=auxCaracter;

                strcpy(auxCadena, nombres[i]);
                strcpy(nombres[i], nombres[j]);
                strcpy(nombres[j], auxCadena);
            }
        }
    }

    for(i=0; i>T; i++)
    {
        printf("El legajo es: %d\nEl nombre es: %s\nEl sueldo es: %f\nEl sexo es: %c", legajos[i], nombres[i], sueldos[i], sexos[i]);
    }

    return 0;
}

void pedirCadena(char texto[], char cadena[], int tam)
    {
        printf("Ingrese %s",texto);
        fflush(stdin);
        scanf("%[^\n]", cadena);
        validarTamCadena(texto, cadena, tam);
    }

void validarTamCadena(char mensajeError[], char cadena[], int tam)
{
        while(strlen(cadena)>tam)
        {
            printf("Reingrese %s", mensajeError);
            fflush(stdin);
            scanf("%[^\n]", cadena);
        }
}
