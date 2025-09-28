//
//  2.7.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/* Una empresa de aviación vende pasajes en clase turista y en primera clase, cuyo costo es un 30% más
caro que clase turista. Se pide al usuario ingresar el importe de cada pasaje de clase turista, la cantidad
de pasajes vendidos de clase turista y la cantidad vendida de primera clase. informar la recaudación
total del vuelo.*/

#include <stdio.h>

int main ()

{
    int precio_turista, precio_primera, cantidad_turista, cantidad_primera, recaudacion_total;
    
    puts("El programa calculara la recaudacion, por favor introducir el valor de los pasajes y cantidad, tanto como turista como primer clase.\n");
    printf("\nPor favor introduzca cantidad pasajes clase turista:\n");
    scanf("%d", &cantidad_turista);
    printf("\nPor favor introduzca cantidad pasajes clase primera:\n");
    scanf("%d", &cantidad_primera);
    printf("\nPor favor introduzca precio clase turista:\n");
    scanf("%d", &precio_turista);
    
    //calculo logico con variables//
    
    precio_primera = (precio_turista * 1.3);
    recaudacion_total = (precio_primera * cantidad_primera) + (precio_turista * cantidad_turista);
    
    //devolucion informacion al usuario//
    
    printf("\nEl total de la recaudacion del vuelo es: %d", recaudacion_total);
    
    
    return(0);
}
