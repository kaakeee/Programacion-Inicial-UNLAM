//
//  5.1.7.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 17/09/2025.
//
/* 5.1.7 Un negocio de perfumería efectúa descuentos en sus ventas según el importe de estas, con la siguiente escala:
 
• menor a 10000 pesos el 3.5 %
• entre 10001 y 20000 pesos el 10 %
• entre 20001 y 30000 pesos el 20 %.
• Mayor a 30001 pesos el 25%
 
Confeccionar un programa que:
 
• Solicite el importe de la venta, calcule el descuento a efectuar e informe el importe neto a cobrar, con mensajes aclaratorios.
• Informe el importe promedio de todas las ventas realizadas.
• Informar cuál es la venta con el importe más grande.
• Informar cuántas ventas fueron inferiores a 10000 pesos.
 
*/

#include <stdio.h>

int main (){
    
    int importe_venta, cantidad_ventas_inferiores = 0, cant_ventas = 0;
    float total_ventas, des1, des2, des3, des4, neto_cobrar, promedio_ventas, venta_max = 0;
    char seguir;
    
    des1 = 0.965; //descuento del 3.5%
    des2 = 0.9; //descuento del 10%
    des3 = 0.8; //descuento del 20%
    des4 = 0.75; //descuento del 25%
    
    puts("El programa calculara descuentos e informara importes y ventas.");
    printf("Luego de cada venta se le solicitara dar enter para continuar, indicar F para finalizar\n");

    while (seguir != 'F')
    {
        cant_ventas++;
        printf("Ingrese importe de venta: ");
        scanf("%d", &importe_venta);
        
        if (importe_venta > venta_max)
            venta_max = importe_venta;
        
        if (importe_venta < 10000)
            cantidad_ventas_inferiores++;
        
        if (importe_venta < 10000){
            neto_cobrar = importe_venta * des1;
            total_ventas = neto_cobrar + total_ventas;
        } else if (importe_venta <= 20000){
            neto_cobrar = importe_venta * des2;
            total_ventas = total_ventas + neto_cobrar;
        } else if (importe_venta <= 30000){
            neto_cobrar = importe_venta * des3;
            total_ventas = total_ventas + neto_cobrar;
        } else {
            neto_cobrar = importe_venta * des4;
            total_ventas = total_ventas + neto_cobrar;
        }
            
        printf("\nNeto a cobrar a cliente: %.2f", neto_cobrar);
        printf("\nPrecione F para finalizar o cuaquier tecla para continuar.");
        scanf(" %c", &seguir);
        
    }
    
    promedio_ventas = total_ventas / cant_ventas;
    printf("\nCantidad de ventas inferiores: %d", cantidad_ventas_inferiores);
    printf("\nLa venta mas grande fue de %.2f", venta_max);
    printf("\nPromedio ventas es de : %.2f", promedio_ventas);
    
return(0);}





