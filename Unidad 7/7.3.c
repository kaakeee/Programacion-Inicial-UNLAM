//
//  7.3.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 30/10/2025.
//
//7.3 Dados los legajos y sueldos de los empleados de una empresa (máximo 50 empleados), se pide determinar el / los empleado/s de máximo sueldo. El fin de carga de sueldos está dado por un legajo igual a cero.

//• Nota 1: Los números de legajo son números correlativos de 1 a 50, pero no se sabe si están los 50 empleados.

//• Nota 2: Realizar el mismo ejercicio considerando que los números de legajo son
//números NO correlativos de 4 cifras. No se evalúa si se repite algún legajo.

#include <stdio.h>
#define CantEmpleados 50
void cargarSueldos(int Sueldos[], int Cant);
int cargarLegajos(int Legajos[], int Cant);
int main (){
    int Sueldos[CantEmpleados];
    int dato = 1, i, maximo;
    int Legajos[CantEmpleados];
    
    printf("\nIngrese legajo y sueldo de los empleados, maximo 50.\n");
    
    
    while (dato != 0) {
        dato = cargarLegajos(Legajos, CantEmpleados); //cargamos legajos, devuelve 0 y termina el ciclo
        printf("Se cargaron %d legajos.", dato);
        if (dato != 0) {cargarSueldos(Sueldos, dato);}//cargamos el array con sueldos
            else {printf("No se cargaron legajos.");}
    }
    
    ///logica para ver el empleado con el salario mas alto.///
    ///
    ///
    i = 0;
    maximo = 0;// por default es el salario mas alto es el primero para comparar
    for (i=1 ; i < dato ; i++){
        if (Sueldos[i] > Sueldos[maximo]){maximo=i;}// si es verdadero, reemplaza i con el salario mas alto, la posicion.
    }
    
    printf("El salario mas alto corresponde al numero de legajo %d con un sueldo de: %d", i, Sueldos[i]);
    
    return 0;
}

int cargarLegajos(int Legajos[], int Cant){
    int dato, i = 0;
    do {
        printf("\nIngrese numero de legajo, 0 para terminar: ");
        scanf("%d", &dato);
        
        if (dato != 0){
            if (dato < 0){printf("Ingrese un numero de legajo valido.");}else{
                
                Legajos[i] = dato;
                printf("Se cargo el legajo numero: %d", i+1);
                i++;
            }}
    } while (dato != 0 && dato < Cant); //solo se cargaran hasta 50 empleados
    
    
return i; //devolvemos la cantidad de empleados cargados.
}

void cargarSueldos(int Sueldos[], int Cant){ //Cant trae dato que son el total de los trabajores cargados en legajos
    int i;
    printf("Por favor ingrese los salarios de los trabajadores.");
    
    for (i = 0; i < Cant ; i++){ //se usa for para no cargar mas sueldos que empleados
        printf("Ingrese el salario para el empleado con legajo %d: ", Cant);
        scanf("%d", &Sueldos[i]); //no se realiza comprobacion.
    }
}
