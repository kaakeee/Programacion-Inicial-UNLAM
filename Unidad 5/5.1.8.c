//
//  5.1.8.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 18/09/2025.
//
/* 5.1.8 Se desea realizar un programa para calcular el sueldo final a pagar a los empleados
de una empresa. De cada empleado se ingresa:
▪ Número de empleado (entero, mayor a cero)
▪ Sueldo básico (real, mayor a cero)
▪ Antigüedad (entero, de 0 a 25)
▪ Cantidad de hijos (entero, entre 0 y 10)
▪ Estudios superiores (caracter, ‘S’ o ‘N’).
Además, se conocen los porcentajes de aumento del sueldo que dependen de los siguientes
factores:
• Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
• Si el empleado tiene 1 ó 2 hijos: aumento del 10%, si tiene más hijos 15%
• Si el empleado posee estudios superiores: aumento del 5%
Al comienzo de la carga se debe preguntar si se desea ingresar un empleado (‘S’) o no desea
ingresar más empleados (‘N’), momento en el cual se termina la carga.
 
Determinar:
• Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
• Informar el total de sueldos a pagar antes y después de calcular los aumentos.
• Informar el porcentaje de incremento de dinero que la empresa debe pagar más a causa
de los aumentos.
• Informar el promedio de sueldos pagados a aquellos empleados que tienen más de dos
hijos, la antigüedad es mayor a 10 años y tiene estudios superiores. */

#include <stdio.h>

int desea_continuar(){
    char continuar;
    while (1) {
        printf("Desea calcular salario?\n");
        printf("Presionar 'S' para continuar y 'N' para terminar: ");
        scanf(" %c", &continuar);
        if (continuar == 'S' || continuar == 's') {
            return 1; // Continua con 1
        } else if (continuar == 'N' || continuar == 'n') {
            return 0; // Termina con 0
        } else {
            printf("\nIntroduzca un caracter valido.\n"); //No cambia y vuelve a preguntar
        }
    }
}

int estudios_superiores(){
    char estudios;
    while (1) {//valida estudios superiores
        printf("El empleado tiene estudios superiores? 'S' o 'N'");
        scanf(" %c", &estudios);
        if (estudios == 'S' || estudios == 's'){
            return 1; // Continua con 1
        } else if (estudios == 'N' || estudios == 'n') {
            return 0; // Termina con 0
        } else {
            printf("\nIntroduzca un caracter valido.\n"); //No cambia y vuelve a preguntar
                }
                }       }


int main (){
    
    int sueldo_final = 0, numero_empleado, sueldo_basico, antiguedad, cant_hijos, total_salarios = 0, total_salarios_aumento = 0, total_porcentaje = 0, tiene_estudios, sueldos_3_requisitos = 0, cant_empleados_3_requisitos = 0, promedio_3_requisitos;
    
    printf("\n\n");
    puts("El sistema calculara el salario de los empleados. \n");
    
    do {
        
        do { //validacion de dato de numero de empleado sea mayor a 0
            printf("Ingrese numero de empleado (mayor a 0): ");
            scanf("%d", &numero_empleado);
            if (numero_empleado <= 0) {
                printf("\nEl numero debe ser mayor a 0. Intente de nuevo.\n");
            }
        } while (numero_empleado <= 0);
        
        do { //valida dato de sueldo basico sea real y mayor a 0
            printf("Ingrese sueldo basico: ");
            scanf("%d", &sueldo_basico);
            if (sueldo_basico <= 0) {
                printf("\nIngrese un sueldo basico real y positivo. Intente de nuevo.\n");
            }
        } while (sueldo_basico <= 0);
        
        do { //valida que la antiguedad sea entre 0 y 25 años
            printf("Ingrese antiguedad, entre 0 y 25 años: ");
            scanf("%d", &antiguedad);
            if (antiguedad > 25 || antiguedad < 0)
                printf("\nIngrese antiguedad correcta, entre 0 y 25 años.\n");
        }while (antiguedad > 25 || antiguedad < 0);
        
        do { //validamos cantidad de hijos entre 0 y 10
            printf("Ingrese la cantidad de hijos de 0 a 10: ");
            scanf("%d", &cant_hijos);
            if (cant_hijos > 10 || cant_hijos < 0)
                printf("Ingrese cantidad correcta, entre 0 y 10 hijos.");
        } while (cant_hijos > 10 || cant_hijos < 0);
        
        //calculo logico de salario//
        
        sueldo_final = sueldo_basico; //se establece esto por si el empleado no cumple ninguna de las condiciones daria 0.
        
        if (antiguedad>10)
            {sueldo_final = sueldo_basico * 1.1;} //aumento del 10% por + mas de 10 años de antiguedad
       
        if (cant_hijos>=1){ // si tiene 1 o mas hijos entra al if
            if (cant_hijos>=3){ //si tiene 3 o mas 15%
                sueldo_final = sueldo_final * 1.15;}
                else { sueldo_final = sueldo_final * 1.1;} //si tiene 1 o 2 10%
        }
        if (estudios_superiores()){ //se llama a la funcion de estudios, devuelve 0 falso o 1 verdadero.
            sueldo_final = sueldo_final * 1.05; //se suma 5%
            tiene_estudios = 1;
        } else {tiene_estudios = 0;}
        
        printf("\nNumero de empleado: %d\n", numero_empleado);
        printf("Sueldo basico: $ %d\n", sueldo_basico);
        printf("Nuevo sueldo: $ %d \n", sueldo_final);
        
        
        total_salarios = total_salarios + sueldo_basico; //sumara cada sueldo basico y aumenta, sin los aumentos de todos los empleados
        total_salarios_aumento = total_salarios_aumento + sueldo_final;
        total_porcentaje = (total_salarios_aumento * 10) / total_salarios; //da el porcentaje de aumento
        
        if (tiene_estudios == 1 && cant_hijos > 2 && antiguedad > 10){
            //3 requisitos
            sueldos_3_requisitos = sueldos_3_requisitos + sueldo_final;
            cant_empleados_3_requisitos++;
        }
            
        
    }while (desea_continuar()); //si recibe 1 continua de la funcion desea_continuar, si recibe 0 se va y cierra y da el resumen de empresa
    
    //calculo logico de salarios totales para la empresa
    
    promedio_3_requisitos = sueldos_3_requisitos / cant_empleados_3_requisitos;
    
    
    printf("Total de sueldos a pagar antes de aumentos: $ %d\n", total_salarios);
    printf("Total de sueldos a pagar despues de aumentos: $ %d\n", total_salarios_aumento);
    printf("Porcentaje de aumento: %d%% \n", total_porcentaje);
    printf("Promedio de sueldo a empleados con mas de 2 hijos, 10 años de antiguedad y con estudios superiores: %d", promedio_3_requisitos);
    
    printf("\n\nLa carga de salarios finalizo.\n");
    
    return 0;
}
