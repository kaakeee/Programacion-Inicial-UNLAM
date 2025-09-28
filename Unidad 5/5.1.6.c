//
//  5.1.6.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 17/09/2025.
//
/* 5.1.6 Un negocio de venta de granos desea controlar las ventas realizadas. De cada una
ingresa el importe total y un código que indica la forma de pago. El código puede ser:
• C: cheque, 20% de recargo.
• E: efectivo, 10% de descuento.
• T: con tarjeta, 12% de recargo.
Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
 Efectivo en Caja: $ xxx.xx
 Ventas con Tarjeta de Crédito: $ xxx.xx
 Ventas con cheque: $ xxx.xx
 Total de Venta: $ xxx.xx
 Importe del IVA: $ xxx.xx
Nota: El IVA corresponde al 21% del total de ventas.
*/

#include <stdio.h>

int main (){
    
    float importe_total, cheque, efectivo, tarjeta, efec_caja = 0, venta_tarjetas = 0, venta_cheque = 0, total_ventas = 0, importe_iva, iva;
    int finalizador = 0;
    char forma_pago;
    
    cheque = 1.20; //el recargo del 20%
    efectivo = 0.90; //descuento del 10%
    tarjeta = 1.12; //recargo 12%
    iva = 0.21;
    
    puts("Sistema de ventas.");
    printf("\nEl sistema calculara las ventas realizadas\n");
    puts("Finalizar con F y venta con 0. \n");
    puts("Metodos de pago Efectivo (E), Cheque (C) y Tarjeta (T)\n");
    
    while (finalizador != 1) {
        printf("Ingrese total de venta: ");
        scanf("%f", &importe_total);
        printf("Ingrese metodo de forma de pago: ");
        scanf(" %c", &forma_pago);
        
        switch (forma_pago) {
            case 'T': venta_tarjetas = venta_tarjetas + importe_total; break;
            case 'E': efec_caja = efec_caja + importe_total; break;
            case 'C': venta_cheque = venta_cheque + importe_total; break;
            case 'F': finalizador = 1; break;
        }
        
    }
    
    total_ventas = (venta_tarjetas * tarjeta ) + (efec_caja * efectivo)+ (venta_cheque * cheque);
    importe_iva = total_ventas * iva;
    
    
    printf("\n\nEfectivo en Caja: $ %.2f\n", efec_caja);
    printf("\nVentas con Tarjeta de Crédito: $ %.2f\n", venta_tarjetas);
    printf("\nVentas con cheque: $ %.2f\n", venta_cheque);
    printf("\nTotal de Venta: $ %.2f\n", total_ventas);
    printf("\nImporte del IVA: $ %.2f\n", importe_iva);
    
    return(0);
}
