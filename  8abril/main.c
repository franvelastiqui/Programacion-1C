#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Le pido al usuario los nombres y apellidos. apellidoNombre= los dos
concatenados, pero quedaria Velastiqui, Franco Alexander*/

int main()
{
    char palabra[1024];
    //int len;
    int comp;
    char otra[100]="Che esto es : ";

    //strupr(palabra);  pasar a min
    //strlwr(palabra);  pasar a may



    printf("Ingrese nombre y apellido: ");

    //scanf("[^\n]",palabra);

    gets(palabra);

    strcat(otra, palabra);

    //fgets(palabra,1024,stdin);

    //strcpy(palabra,"chau");

    strncpy(palabra,"chau",4);

    comp=stricmp(palabra,"chau");

    printf("%d",comp);

    //len=strlen(palabra);

    //printf("La palabra es: %s\nCantidad: %d",palabra,len);

    return 0;
}
