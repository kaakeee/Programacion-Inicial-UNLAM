//
//  2.5.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 28/08/2025.
//
/* En un depósito de una pinturería existen tarros de pintura. Se sabe que el 50% son tarros de 1 litro, el
 30% tarros de 4 litros. y el resto tarros de 20 litros. Ingresando como primer dato la cantidad de litros
 de pintura que hay en existencia, determinar la cantidad de tarros de cada capacidad en litros que hay
 en stock. */

#include <stdio.h>

int main ()


{
    int tarros_1, tarros_4, tarros_20, litros_ingresados;
    
    puts("El programa mostrara el stock del local con cantidad de tarros y su capacidad correspondiente, debe ingresar el total de litros del deposito."); //explicacion del programa//
    
    printf("\nIngrese cantidad de litros\n"); //solicitar informacion de litros al usuario//
    scanf("%d", &litros_ingresados);
    
    //procesamiento logico//
    
    tarros_1 = litros_ingresados * 0.5;
    tarros_4 = (litros_ingresados * 0.3) / 4;
    tarros_20 = (litros_ingresados - tarros_1 - tarros_4 * 4) / 20;
    
    printf("\n\nLa cantidad de tarros de 1 litros son: %d", tarros_1);
    printf("\n\nLa cantidad de tarros de 4 litros son: %d", tarros_4);
    printf("\n\nLa cantidad de tarros de 20 litros son: %d", tarros_20);
    
    return(0);
}
