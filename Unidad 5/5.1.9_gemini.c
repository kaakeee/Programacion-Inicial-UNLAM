//
//  5.1.9.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 19/09/2025.
//
/* 5.1.9 La estación de servicio “PetroMatanza” imprime tickets por cada venta de los
distintos combustibles que despachan durante un día de venta. Por cada ticket se ingresa:
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

// Función para leer y validar el número de artículo.
// Usa un bucle do-while para asegurar que se pide el dato al menos una vez.
int leer_articulo(void) {
    int num_art;
    do {
        printf("Introduzca numero de articulo (40-90, 0 para finalizar): ");
        scanf("%d", &num_art);
        // La condición para repetir el bucle es que el número sea inválido Y no sea el de finalización (0).
        if (num_art != 0 && (num_art < 40 || num_art > 90)) {
            printf("ERROR: El valor debe ser entre 40 y 90, o 0 para terminar.\n");
        }
    } while (num_art != 0 && (num_art < 40 || num_art > 90));
    return num_art;
}

// Función para leer y validar el número de cliente.
int leer_cliente(void) {
    int num_client;
    do {
        printf("Introduzca numero del cliente (mayor a cero): ");
        scanf("%d", &num_client);
        if (num_client <= 0) {
            printf("ERROR: El numero de cliente debe ser mayor a cero.\n");
        }
    } while (num_client <= 0);
    return num_client;
}

// Función genérica para leer un valor real (float) positivo.
float leer_valor_real_positivo(const char* mensaje) {
    float valor;
    do {
        printf("%s", mensaje);
        scanf("%f", &valor);
        if (valor <= 0) {
            printf("ERROR: El valor debe ser mayor que cero.\n");
        }
    } while (valor <= 0);
    return valor;
}


int main(void) {
    
    int num_art, num_client;
    float precio_litro, cant_litros, importe_actual;
    
    // Variables para el informe final
    int cantidad_tickets = 0;
    float total_cobrado = 0.0f;
    float max_importe = -1.0f;
    int cliente_max_importe = 0;
    
    printf("\n\nSistema de cobro Tickets de PetroMatanza\n\n");
    
    // La condición del while llama a la función, asigna el valor y lo comprueba.
    while ((num_art = leer_articulo()) != 0) {
        num_client = leer_cliente();
        precio_litro = leer_valor_real_positivo("Introduzca precio por litro: ");
        cant_litros = leer_valor_real_positivo("Introduzca cantidad de litros: ");
        
        importe_actual = precio_litro * cant_litros;
        
        // a) Imprimir el ticket
        printf("\n------ TICKET PETROMATANZA ------\n");
        printf("Cliente:            %d\n", num_client);
        printf("Articulo:           %d\n", num_art);
        printf("Precio por Litro:   $%.2f\n", precio_litro);
        printf("Litros expendidos:  %.2f\n", cant_litros);
        printf("-----------------------------------\n");
        printf("IMPORTE A COBRAR:   $%.2f\n", importe_actual);
        printf("-----------------------------------\n\n");
        
        // b) Actualizar totales para el informe
        cantidad_tickets++;
        total_cobrado += importe_actual;
        
        // c) Verificar si es el ticket de mayor importe
        if (importe_actual > max_importe) {
            max_importe = importe_actual;
            cliente_max_importe = num_client;
        }
    }
    
    // Imprimir informe final del día
    printf("\n========== INFORME FINAL DEL DIA ==========\n");
    if (cantidad_tickets > 0) {
        printf("Cantidad de tickets impresos: %d\n", cantidad_tickets);
        printf("Valor total cobrado: $%.2f\n", total_cobrado);
        printf("Cliente con el ticket de mayor importe: #%d ($%.2f)\n", cliente_max_importe, max_importe);
    } else {
        printf("No se realizaron ventas en el dia de hoy.\n");
    }
    printf("===========================================\n\n");
    
    return 0;
}
