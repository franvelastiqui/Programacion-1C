
#include "Empleado.h"


void cargarEmpleado(eEmpleado lista[], int tam)
{
    int i;

    i = buscarLibre(lista, tam);
    if(i!=-1)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &lista[i].legajo);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(lista[i].nombre);
        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &lista[i].sexo);
        printf("Ingrese sueldo bruto: ");
        scanf("%f", &lista[i].sueldoBruto);

        lista[i].sueldoNeto =lista[i].sueldoBruto*0.85;

        lista[i].estado = OCUPADO;

    }
    else
    {
        printf("No hay espacio");
    }
}

//_______________________________________________________________________
void mostrarListaEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado!=LIBRE)
        {
            mostrarEmpleado(lista[i]);
        }

    }
}

//_______________________________________________________________________
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d\t %s\t %c\t %.2f\t %.2f\n", unEmpleado.legajo,unEmpleado.nombre, unEmpleado.sexo, unEmpleado.sueldoBruto,unEmpleado.sueldoNeto);

}

//_______________________________________________________________________
int buscarLibre(eEmpleado lista[], int tam)
{
    int i;
    int index=-1;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

//_______________________________________________________________________
void inicializarEmpleados(eEmpleado lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        lista[i].estado = LIBRE;
    }
}

//_______________________________________________________________________
void hardcodearDatosEmpleados(eEmpleado lista[], int tam)
{
    int i;
    int legajos[]= {1,8,9,7,2,4};
    char nombres[][50]= {"Carlos","Maria","Carlos","Pedro","Carlos","Mateo"};
    char sexo[]= {'M','F','M','M','M','M'};
    float sueldosBruto[]= {22000,22000,15000,4000,21000,6000};

    for(i=0; i<tam; i++)
    {
        lista[i].legajo = legajos[i];
        strcpy(lista[i].nombre, nombres[i]);
        lista[i].sexo = sexo[i];
        lista[i].sueldoBruto = sueldosBruto[i];
        lista[i].sueldoNeto = sueldosBruto[i] * 0.85;
        lista[i].estado = OCUPADO;

    }
}

//_______________________________________________________________________
int pedirEntero(char texto[])

{
    int numero;

    printf(texto);
    scanf("%d",&numero);
    return numero;
}


//_______________________________________________________________________
void modificarEmpleado(eEmpleado lista[], int tam, int legajo)
{
    int i;
    int flag=0;
    int opcion;

    legajo=pedirEntero("Ingrese el legajo del empleado a modificar: ");

    for(i=0; i<tam; i++)
    {
        if (legajo==lista[i].legajo)
        {
            opcion=menuDeOpciones("Escoja el campo a modificar:\n1.Nombre\n2.Sexo\n3.Sueldo bruto\n4.Salir\nElija una opcion: ");
            switch(opcion)
            {
            case 1:
                printf("Ingrese el nuevo nombre: ");
                fflush(stdin);
                gets(lista[i].nombre);
                flag=1;
                break;
            case 2:
                printf("Ingrese el nuevo sexo: ");
                fflush(stdin);
                scanf("%c", &lista[i].sexo);
                flag=1;
                break;
            case 3:
                printf("Ingrese el nuevo sueldo bruto: ");
                scanf("%f", &lista[i].sueldoBruto);
                lista[i].sueldoNeto=lista[i].sueldoBruto*0.85;
                flag=1;
                break;
            case 4:
                flag=1;
                break;
            }

        }
    }
    if(flag==0)
    {
        printf("No ingreso un legajo valido\n");
    }
}


//_______________________________________________________________________
void bajarEmpleado(eEmpleado lista[], int tam, int legajo)
{
    int i;
    int flag=0;

    legajo=pedirEntero("Ingrese el legajo del empleado a dar de baja: ");

    for(i=0; i<tam; i++)
    {
        if (legajo==lista[i].legajo)
        {
            printf("Se ha dado de baja al siguiente empleado:\n");
            mostrarEmpleado(lista[i]);
            lista[i].estado = LIBRE;
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("No ingreso un legajo valido\n");
    }
}


//_______________________________________________________________________
int menuDeOpciones(char mensaje[])
{
    int opcion;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}


//_______________________________________________________________________
float importeMaximo(eEmpleado lista[], int tam)
{
    int i;
    float sueldo=0;
    int flag=0;

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(lista[i].sueldoBruto>sueldo || flag==0)
            {
                sueldo=lista[i].sueldoBruto;
                flag=1;
            }
        }
    }

    return sueldo;
}


//_______________________________________________________________________
void mostrarSueldoMaximo(eEmpleado lista [], int tam)
{
    float sueldo;
    int i;

    sueldo=importeMaximo(lista, tam);

    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==OCUPADO)
        {
            if(sueldo==lista[i].sueldoBruto)
            {
                mostrarEmpleado(lista[i]);
            }
        }
    }

}
