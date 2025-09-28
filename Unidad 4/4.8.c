//
//  4.8.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
/*  4.8 La farmacia Sindical efectúa descuentos a sus afiliados según el importe de la compra con la siguiente escala:

a. Si es menor de $ 9550 el descuento es del 4.5%
b. Si está entre $ 9550 y $15000 el descuento es del 8%
c. Si es más de $15000 el descuento es del 10.5%

 Confeccionar un programa que reciba un importe e informe el descuento y el precio neto a cobrar, con mensajes aclaratorios */
#include <stdio.h>

int main ()
{
    float importe, descuento, precio_cobro;
    
    puts("El sistema calculara el precio con descuento, por favor ingresar el importe");
    printf("\nIngrese el importe: ");
    scanf("%f", &importe);
    
    //proceso logico//
    
    if (importe > 15000){
        descuento = importe / 10.5;
        precio_cobro = importe - descuento;
    }
    else
    {
        if (importe > 9550){
            descuento = importe / 8;
            precio_cobro = importe - descuento;
        }
        else{
            descuento = importe / 4.5;
            precio_cobro = importe - descuento;
        }
    }
    
    printf("\nSe aplica un descuento de $%.2f, por lo que el neto a cobrar es de $%.2f", descuento, precio_cobro);
    
    return(0);
}
