#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldoBruto;
    float sueldoNeto;
} eEmpleado;

int main()
{
    eEmpleado unEmpleado;
    eEmpleado otroEmpleado;

    printf("Ingrese legajo: ");
    scanf("%d",&unEmpleado.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]",unEmpleado.nombre);

    printf("Ingrese sexo (m o f): ");
    fflush(stdin);
    scanf("%c",&unEmpleado.sexo);

    printf("Ingrese sueldo bruto: ");
    scanf("%f",&unEmpleado.sueldoBruto);

    unEmpleado.sueldoNeto=unEmpleado.sueldoBruto*0.85;

    otroEmpleado=unEmpleado;

    printf("%d - %s - %c - %f - %f", unEmpleado.legajo, unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto, unEmpleado.sueldoNeto);
    printf("%d - %s - %c - %f - %f", otroEmpleado.legajo, otroEmpleado.nombre, otroEmpleado.sexo, otroEmpleado.sueldoBruto, otroEmpleado.sueldoNeto);

    return 0;
}
