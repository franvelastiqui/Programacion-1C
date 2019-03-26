#include <stdio.h>
#include <stdlib.h>

int main()
{
    do
    {


        printf("1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Factorial\n6. Salir\nElija una opcion: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Estoy dando de alta\n");
        break;
        case 2:
            printf("Estoy dando de baja\n");
        break;
        case 3:
            printf("Estoy informando\n");
        break;
        case 4:
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
