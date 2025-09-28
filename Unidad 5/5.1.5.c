//
//  5.1.5.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 17/09/2025.
//
/* 5.1.5 Construir un algoritmo que pueda ingresar varios números enteros, distintos de cero, de uno por vez. El ingreso de los datos finaliza al leer un valor nulo (cero). Informar:

a) La cantidad de valores positivos ingresados.
b) El menor valor ingresado con su respectivo número de orden durante el ingreso.
c) El porcentaje de números pares ingresados.
d) El máximo valor múltiplo de 7 ingresado con su número de orden.
*/
#include <stdio.h>

int main (){
    
    int entrada, cant_valor_positivos = 0, orden_min = 0, orden = 0, valor_min, valor_max_7, orden_max_7, finalizador = 0, cantidad_par = 0;
    float porcentaje_num_par;
    
    printf("\n\nEl algoritmo calculara dara informacion sobre los numeros ingresados.");
    printf("\nEl sistema terminara cuando ingrese 0.");
    
    while (entrada != finalizador) { //corta cuando sea finalizador, osea 0
        
        printf("\nIngrese numero: ");
        scanf("%d", &entrada);
        
        orden++;
        
        if (entrada>=1) { //valida que sea positivo y suma cantidad
            cant_valor_positivos++;
        }
        if (entrada != 0) { //valida que no sea 0
            if (entrada < valor_min){ //valida que sea el menor y lo asigna
                orden_min = orden;
                valor_min = entrada;
            } }
        if (entrada % 2 == 0){ //valida que sea par al dejar resto 0
            cantidad_par++;
            porcentaje_num_par = (cantidad_par * 100) / orden; //cantidad de numeros pares
        }
        if (entrada % 7 == 0){//valida que sea multiplo de 7
            if (entrada > valor_max_7){
                orden_max_7 = orden;
                valor_max_7 = entrada;
            }
        }
        }
    
    printf("\nCantidad de valores positivos ingresados: %d", cant_valor_positivos);
    printf("\nMenor numero ingresado es %d y su orden %d", valor_min, orden_min);
    printf("\nPorcentaje de numeros pares ingresados: %f%%", porcentaje_num_par);
    printf("\nEl maximo numero multiplo de 7 es: %d y su orden es: %d", valor_max_7, orden_max_7);
    
    return(0);
}
