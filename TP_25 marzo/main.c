#include <stdio.h>
#include <stdlib.h>

int pedirNota(void);
float sacarPromedio(int , int );
int aprobarMateria(int , int );
void ejercicioUno(void);

int main()
{
    int datoRecibido;

    datoRecibido=pedirNota();

    printf("%d\n",datoRecibido);

    float promedio;

    promedio=sacarPromedio(15,2);

    printf("%.2f\n",promedio);

    int valorUno=aprobarMateria(6,2);
    printf("%d\n",valorUno);

    int valorDos=aprobarMateria(6,8);
    printf("%d\n",valorDos);

    ejercicioUno();

    return 0;
}

int pedirNota(void)
{
    int nota;

    do
    {
        printf("Ingrese nota: ");
        scanf("%d",&nota);

    }while(nota<0 || nota>10);

    return nota;
}

float sacarPromedio(int suma, int cantidad)
{
    float promedio;

    promedio=(float)suma/cantidad;

    return promedio;
}

int aprobarMateria(int notaMinima, int nota)
{
    if(nota>notaMinima)
    {
        return 1;
    }
        return 0;
}

void ejercicioUno(void)
{
    int i;
    int aprobado;
    int contadorAprobados=0;
    int acumuladorAprobados=0;
    int contadorDesaprobados=0;
    int acumuladorDesaprobados=0;

    for(i=0; i<5; i++)
    {
        int nota=pedirNota();

        aprobado=aprobarMateria(6,nota);
        if(aprobado==1)
        {
            contadorAprobados++;
            acumuladorAprobados+=nota;
        }
        else
        {
            contadorDesaprobados++;
            acumuladorDesaprobados+=nota;
        }
    }

    int promedioAprobados=sacarPromedio(acumuladorAprobados, contadorAprobados);
    int promedioDesaprobados=sacarPromedio(acumuladorDesaprobados, contadorDesaprobados);

    printf("Cantidad de aprobados: %d\nPromedio de aprobados: %d\nPromedio de desaprobados: %d\n",contadorAprobados,promedioAprobados,promedioDesaprobados);


}

/*
void ejercicioUno(void);

    5 notas
    cantidad de aprobados
    promedio de notas aprobadas
    promedio de notas desaprobadas

    main
    ejercicioUno()*/
