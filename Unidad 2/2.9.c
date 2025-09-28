//
//  2.9.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/* Una farmacia vende algunos artículos sin descuento y a otros con descuento del 20%. Confeccionar un
programa que recibiendo el precio original y un código que indica si es o no con descuento, informe el
precio final (0 no aplica el descuento y 1 aplica el descuento). */

#include <stdio.h>

int main ()

{
    int codigo_descuento, precio_original, precio_final;
    float descuento;
    
    descuento = 0.2; //es decir 20% si se multiplica por el precio al 100% //
    
    puts("El programa calculara el precio del producto, ademas indica si corresponde o no el descuento.");
    printf("\nIngresar precio original del producto:\n");
    scanf("%d", &precio_original);
    printf("\nIntroducir codigo del producto:\n");
    scanf("%d", &codigo_descuento);
    
    //calculo logico//
    
    precio_final = precio_original * (1 - (descuento * codigo_descuento));
    
    
    printf("\nPrecio final: %d", precio_final);
    
    
    return(0);
}
