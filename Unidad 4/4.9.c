//
//  4.9.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/* Una librería de artículos universitarios vende cuadernos A4 de una reconocida marca según la siguiente escala de precios:
 • Por unidad, a $ 5000 c/u.
 • Por paquete de 10 cuadernos cuesta $ 40.000.-
 • Por paquete de 30 cuadernos cuesta $ 100.000.-
 Si la compra excede los 50 cuadernos se efectúa además un descuento del 10%.
 Se pide que se ingrese una cantidad de cuadernos que se quiere comprar y calcule e informe el importe a pagar.*/

#include <stdio.h>

int main ()

{
    int cantidad, unidad, paq_10, paq_30, total_pagar, cantidad_10, cantidad_30, resto_30, cantidad_unidad;
    
    puts("El sistema calculara el importe a pagar con los descuento incluidos, solo debera ingresar la cantidad");
    printf("\nIngrese la cantidad de cuadernos a comprar: ");
    scanf("%d", &cantidad);
    
    
    //declaro precios de variables//
    unidad = 5000;
    paq_10 = 40000;
    paq_30 = 100000;
    
    //proceso logico//
    
    
    if (cantidad < 10){
        total_pagar = cantidad * unidad;
    }
    else {
        if (cantidad < 30){
            total_pagar = ((cantidad / 10) * paq_10) + ((cantidad % 10) * unidad);
        }
        else {
            //si es mayor a 30 debo quitar los paquetes de 30 y de 10//
            cantidad_30 = cantidad / 30;
            resto_30 = cantidad % 30;
            //quito los de 10//
            cantidad_10 = resto_30 / 10;
            cantidad_unidad = resto_30 % 10;
            
            total_pagar = cantidad_30 * paq_30 + cantidad_10 * paq_10 + cantidad_unidad * unidad;
            
            if (cantidad > 50){
                total_pagar = total_pagar * 0.9;
            }
        }
            
        }
    
    printf("El importe a pagar es de $%d", total_pagar);
    
    return(0);
}
