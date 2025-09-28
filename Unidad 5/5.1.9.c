//  5.1.9.c
//
//  Created by Ramiro Nehuen Sanabria on 19/09/2025.
//
/*5.1.9 La estación de servicio “PetroMatanza” imprime tickets por cada venta de los
distintos combustibles que despachan durante un día de venta. Por cada ticket se
ingresa:
• Número del artículo (entero, entre 40 y 90)
• Número del cliente (entero, mayor a cero)
• Precio por litro (real, mayor que cero)
• Cantidad de litros (real, mayor que cero)
El ticket debe contener además de los datos ingresados y el importe a cobrar. La finalización de la venta de combustible del día se logra con un ticket con número de artículo igual a cero.
Realizar un algoritmo que permita:
a) Ingrese los datos e imprima el ticket.
b) Al finalizar el día, informar la cantidad de tickets que se imprimieron y el valor
cobrado en total.
c) Indicar el número de cliente que tiene el ticket más grande en importe. */
#include <stdio.h>

float real_mayor_a_cero(const char* mensaje){ //validaremos precio y cantidad de litros con la misma funcion
    float valor_real;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor_real);
        if (valor_real <= 0){
            printf("\nERROR. Ingrese valor real positivo.");}
    } while (valor_real <= 0);
    return valor_real;
}

int cliente(const char* mensaje){
    int num_client;
    do {
        printf("%s", mensaje);
        scanf("%d", &num_client);
        if (num_client <= 0){
            printf("\nERROR. El valor debe ser positivo.");}
    } while (num_client <= 0);
    return num_client;
}

int articulo(const char* mensaje){ //toma el mensaje del int main, el texto
    //entre 40 y 90
    int num_art;
    do {
        printf("%s", mensaje); //toma el mensaje de int main, no se usa &
        scanf("%d", &num_art);
        if (num_art !=0 && (num_art < 40 || num_art > 90)){
            printf("\nERROR. Debe ser entre 40 y 90. 0 para finalizar.");}
    } while (num_art !=0 && (num_art < 40 || num_art > 90));
    if (num_art == 0){return 0;} else {return num_art;}
}

int main (){

    int num_art, num_client, ticket, ticket_ranking, cliente_ranking;
    float precio_litro, cantidad_litro, cobrado_total, cobro, cobro_ranking;
    ticket = 0;
    cobrado_total = 0;
    cobro_ranking = 0;
    
    printf("\n=================================\n");
    printf("  Sistema de ticket PedroMatanza");
    printf("\n=================================\n");
    
    
    while ((num_art = articulo("\nIngrese un numero de articulo entre 40 y 90, 0 para finalizar: ")) != 0){//se sale del while si no es 0,
        //num_art = articulo("\nIngrese un numero de articulo entre 40 y 90, 0 para finalizar: ");
        num_client = cliente("\nIngrese un numero de cliente: ");
        precio_litro = real_mayor_a_cero("\nIngrese el precio por litros: ");
        cantidad_litro = real_mayor_a_cero("\nIngrese la cantidad de litros: ");
        ticket++;
        cobro = cantidad_litro * precio_litro;
        cobrado_total = cobrado_total + cobro;
        
        //a) imprime ticket
        printf("\n\n\n-----------------------------\n");
        printf("\n Ticket: #%d", ticket);
        printf("\nEl numero de articulo es: %d", num_art);
        printf("\nEl numero de cliente es: %d", num_client);
        printf("\nEl precio por litro es: $%.2f", precio_litro);
        printf("\nLa cantidad es: %.2f", cantidad_litro);
        printf("\n\nEl cobro es: $%.2f", cobro);
        printf("\n-----------------------------");
        
        
        //c sistema de ranking de ticket - cobro
        if (cobro>cobro_ranking){
            ticket_ranking = ticket;
            cobro_ranking = cobro;
            cliente_ranking = num_client;
        }
        
    };

    //b)
if (ticket>0){
    printf("\n---Fin de ventas.---");
    printf("\nVentas realizadas: %d", ticket);
    printf("\nEl total recaudado es de: $%.2f", cobrado_total);
    printf("\nVenta mas alta de $%.2f con el ticket #%d cliente: %d", cobro_ranking, ticket_ranking, cliente_ranking);
} else {
    printf("\n---Fin de ventas.---");
    printf("\n\nNo se realizaron ventas el dia de hoy.");
}

    return(0);
}
