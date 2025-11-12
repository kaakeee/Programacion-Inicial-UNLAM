
//
//  7.5.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 12/11/2025.
//
//7.8 Se ingresan DNI (entero, entre 1000000 y 99999999), código de sector (entero, 1 a 5) y sueldo de los empleados (real, mayor a cero) de una empresa. Se sabe que como máximo la empresa tiene 100 empleados.

//Se desea:
//a. Cargar los datos de los empleados en vectores paralelos mediante la función
//CargaEmpleados(). La carga finaliza con un empleado con DNI a 99.
//b. Generar un vector con la cantidad de empleados en cada sector mediante la función
//CuentaPorSector() y mostrarlo en forma de listado.
//c. Determinar el importe total a pagar de sueldos.

#include <stdio.h>
#define Empleados 100
#define Min_DNI 1000000
#define Max_DNI 99999999


int f_Validar_Rango(int min, int max);
float f_Validar_Real_Mayor();
//void CargaEmpleados();
//void CuentaPorSector();

int main (){
    int i=0, dato, dato1, ii;
    int vEmpleados[Empleados];
    int vCodigo_Sector[Empleados];
    float vSueldo[Empleados];
    int Cantidad_Sectores[5] = {0}; ///inicializamos el vector en 0 debido que es un contador.
    
    printf("\n====================================");
    printf("\nPrograma calcular sueldos empleados.");
    printf("\n====================================");
    
    
    do {
        
        printf("\nIngrese DNI del empleado %d.", i+1);
        dato = f_Validar_Rango(Min_DNI, Max_DNI);
        if(dato != 99){
            vEmpleados[i] = dato;
            printf("\nIngrese sector: ");
            dato1 = f_Validar_Rango(1, 5);
            vCodigo_Sector[i] = dato1;
            Cantidad_Sectores[dato1-1]++; //cuenta 1 mas al sector.
            printf("\nIngrese salario: ");
            vSueldo[i] = f_Validar_Real_Mayor();
            i++; /// cantidad total de trabajadores reales cargados
        } else {printf("\nSe finalizo la carga con el codigo 99.");}
    } while (Empleados > i && dato != 99);
    
    
    
    ///generamos reporte de empleados por sector
    for (ii=0; ii < 5 ; ii++) {
        printf("\nTotal de empleados en el sector: %d", Cantidad_Sectores[ii]);
        printf("\n=====================================");
    }
    return 0;
}


int f_Validar_Rango(int min, int max){
    int dato;
    do {
        printf("\nNumero entre %d y %d: ", min, max);
        scanf("%d", &dato);
    } while (dato <= min && dato >= max);
    return dato;
}

float f_Validar_Real_Mayor(){
    float dato;
    do {
        printf("\nIngrese numero real mayor a 0.");
        scanf("%f", &dato);
    } while (dato < 0);
    return dato;
}
