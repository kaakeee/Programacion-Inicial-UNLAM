//
//  4.11.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/* 4.11 Un negocio vende distintos artículos identificados por un código, según se muestra:
 • código 1; 10; 100: 1000 pesos la unidad.
 • código 2; 22; 222: 700 pesos la unidad. La caja de 10 unidades vale 6500 pesos.
 • código 3; 33: 300 pesos la unidad. Si la compra es por más de 10 unidades se hace un
 descuento del 10% sobre el total de la compra.
 • código 4; 44: 100 peso la unidad.
 Confeccionar un programa que ingrese como dato el código de un artículo y la cantidad a comprar y se
 informe el importe de la compra, con las siguientes leyendas:
 ARTÍCULO xxxxx CANTIDAD xxxx IMPORTE A PAGAR $ xxxx.xx */

#include <stdio.h>

int main ()

{
    int cantidad, codigo_art, importe;
    
    puts("El programa informara el importe de compra, ingrese codigo de producto y unidades a comprar.");
    printf("\nIngrese el codigo del producto: ");
    scanf("%d", &codigo_art);
    printf("\nIngrese unidades: ");
    scanf("%d", &cantidad);
    
    if (codigo_art == 1 || codigo_art == 10 || codigo_art == 100){
        importe = cantidad * 1000;
    }
    
    if (codigo_art == 2 || codigo_art == 22 || codigo_art == 222){
        if (cantidad >= 10){
            importe = (cantidad / 10) * 6500 + (cantidad % 10);
        }
        else{
            importe = cantidad * 700;
        }
    }
    
    if (codigo_art == 3 || codigo_art == 33){
        if (cantidad > 10){
            importe = (cantidad * 300) * 0.9;
        }
        else{
            importe = cantidad * 300;
        }
    }
    
    if (codigo_art == 4 || codigo_art == 44){
        importe = cantidad * 100;
    }
        
        
    printf("\nARTICULO %d  CANTIDAD %d  IMPORTE A PAGAR $%d", codigo_art, cantidad, importe);
    
    
    return(0);
}
