/*
La empresa tiene estas características:

Máximo de 20 empleados, numerados del 1 al 50 (y ningún número se repite).

Cada empleado al principio del proceso se carga su número (entre 1 y 50) y un código de sector — un char que puede ser:
'F' (Fabrica), 'E' (Expedición) o 'D' (Depósito).

Los datos de producción diarios vienen desordenados en planillas, por cada registro hay:
  • Número de empleado (no requiere validación según el enunciado)
  • Cantidad producida (mayor que cero)
  Puede existir más de uno o ninguno por empleado.

La carga finaliza cuando se ingresa un número de empleado cero.

Se pide:
-----------------------------------------------------------------------------------------------------------------------------------
  1. Confeccionar un programa que informe los empleados que superaron el promedio de producción del día (mostrarMayoresA()        -
     será la función que haga esta parte).                                                                                        -
                                                                                                                                  -
  2. Además, listar la cantidad de empleados que trabajan en cada depósito (sectores).                                            -
-----------------------------------------------------------------------------------------------------------------------------------
IMPORTANTE: los datos ingresados por teclado deben ingresarse y validarse por función.
La prolijidad, claridad de escritura e indentación es parte de la nota.
Usar tinta azul o negra, escribir solo en el anverso, etc. (aunque eso aplica para impresión manuscrita del examen).

Restricción: No usar break ni continue.
*/
#include<stdio.h>
#define MAX_EMPLEADOS 20

int ValidarNum(int Vnum[], int num, int cant);
char ValidarSector(char Vsector[],int cant, char s);
int ValidarProducc(int Vproducc[],int cant, int produccion);
float CalcularProm( int Vproducc[], float prom);

void Planilla(int Vnum[], int Vsector[], int Vproducc[]);
void mostrarMayoresA(int cant, int MayorProm, int Vnum[],int Vproducc[], float prom);
void empleadoPorS(int Vsector[]);

int main()
{
    int Vnum[MAX_EMPLEADOS];
    char Vsector[MAX_EMPLEADOS];
    int Vproducc[MAX_EMPLEADOS];
    int cant=0;
    int produccion, num;
    int MayorProm;
    char s;
    float prom;

    ValidarNum(Vnum[], num, cant);

    ValidarSector(Vsector[MAX_EMPLEADOS],cant, s);

    ValidarProducc(Vproducc[MAX_EMPLEADOS],cant, produccion);

    Planilla(Vnum[MAX_EMPLEADOS], Vsector[MAX_EMPLEADOS], Vproducc[MAX_EMPLEADOS]);

    mostrarMayoresA(cant, MayorProm, Vnum[MAX_EMPLEADOS], Vproducc[MAX_EMPLEADOS], prom);

    empleadoPorS(Vsector[MAX_EMPLEADOS]);

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int ValidarNum(int Vnum[], int num, int cant)
{

    do{

    printf("\nIngrese el numero de empleado (1-50):");
    scanf("%d", &num);

    Vnum[cant]=num;
    cant++;

    }while(num<1 || num>50);

    return Vnum[cant];
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
char ValidarSector(char Vsector[],int cant, char s)
{

    do{

    printf("\nSector:");
    scanf("%c", &s);

    Vsector[cant]=s;
    cant++;

    }while(s!='F' || s!='D' || s!='E');

    return Vsector[cant];
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
int ValidarProducc(int Vproducc[],int cant, int produccion)
{
    do{

    printf("\nProduccion:");
    scanf("%d", &produccion);

    Vproducc[cant]=produccion;
    cant++;

    }while(produccion>0);

    return Vproducc[cant];
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float CalcularProm(int Vproducc[], float prom)
{
    int acum=0,i;

    for(i=0;i<MAX_EMPLEADOS;i++)
    {
        acum+=Vproducc[i];
    }

    prom=acum/MAX_EMPLEADOS;

    return prom;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Planilla(int Vnum[], int Vsector[], int Vproducc[])
{
   int i;

   for(i=0;i<MAX_EMPLEADOS;i++)
   {
    printf("\n-----NUMERO DE EMPLEADO-----");
    printf("\n----- %d -----", Vnum[i]);

    printf("\n-----SECTOR-----");
    printf("\n----- %c -----", Vsector[i]);

    printf("\n-----PRODUCCION-----");
    printf("\n----- %d -----", Vproducc[i]);
   }

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void mostrarMayoresA(int cant, int MayorProm, int Vnum[], int Vproducc[], float prom)
{
    int i;
    float promedio;


    promedio=CalcularProm(Vproducc[], prom);

    for(i=0;i<MAX_EMPLEADOS;i++)
    {
        MayorProm=Vproducc[i];

        if(MayorProm>promedio)
        {
            printf("\nEl empleado %d supero el promedio", Vnum[i]);
        }
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void empleadoPorS(char Vsector[])
{
    int sec1=0, sec2=0, sec3=0, i;

    for(i=0;i<MAX_EMPLEADOS;i++)
    {
        if(Vsector[i]=='F')
        {
            sec1++;
        }else if(Vsector[i]=='D')
        {
            sec2++;

        }else sec3++;
    }

    printf("\nFABRICA: %d empleados",sec1);
    printf("\nDEPOSITO: %d empleados", sec2);
    printf("\nEXPEDICION: %d empleados", sec3);

}
