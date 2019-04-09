#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void pedirCadena(char[], char[],int);
void validarTamCadena(char[], char[], int);

int main()
{
    char nombre[30];
    char apellido[30];
    char apellidoNombre[61];
    int i=0;

    pedirCadena("nombre: ", nombre, 30);
    pedirCadena("apellido: ", apellido, 30);

    strcat(apellidoNombre, apellido);
    strcat(apellidoNombre, ", ");
    strcat(apellidoNombre, nombre);

    strlwr(apellidoNombre);

    apellidoNombre[0]=toupper(apellidoNombre[0]);

    for(i=0;i<strlen(apellidoNombre);i++)
    {
        if(apellidoNombre[i]==' ')
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
        }
    }

    /*while(apellidoNombre[i]!='\0')
    {
        if(apellidoNombre[i]==' ')
        {
            apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
        }

        i++;
    }*/

    puts(apellidoNombre);

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
