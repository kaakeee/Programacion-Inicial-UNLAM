//
//  2.8.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/* Una pizzería vende empanadas por unidad o por docena. Como primer paso, se pide al usuario que
ingrese el precio por docena y el precio por unidad del día. Si se compran empanadas que no se agrupen
en docenas, las adicionales se cobran por unidad. Indicar el precio total a abonar, ingresando la
cantidad de empanadas vendidas. */

#include <stdio.h>

int main ()

{
    int precio_docena, precio_unidad, precio_total, cantidad_empanadas;

    puts("El programa calculara el total del pedido, por favor ingresar precio de docena y unidad. Luego ingresar cantidad de empandas vedidas.");
    
    //solicitar datos a usuario//
    printf("Introducir precio docena:\n");
    scanf("%d", &precio_docena);
    printf("Introducir precio unidad:\n");
    scanf("%d", &precio_unidad);
    printf("Introducir cantidad de empanadas vendidas:\n");
    scanf("%d", &cantidad_empanadas);
    
    //calculo logico//
    
    precio_total = ((cantidad_empanadas / 12) * precio_docena) + ((cantidad_empanadas % 12) * precio_unidad);
    
    //devolver datos a cliente//
    
    printf("\nEl total a abonar es: %d\n", precio_total);
    
    return(0);
}
