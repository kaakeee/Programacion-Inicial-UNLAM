//
//  p1.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 04/11/2025.
//
//P2 La Empresa Corrientes Transportadora S.A. se dedica a la prestación de servicios de mensajería,manipulación de correspondencia, entrega de documentos y paquetería. Desea controlar los viajes realizados por sus 25 vehículos, para lo cual se ingresan los datos de dichos vehículos:
//
//• Código de vehículo (entero, mayor que cero).
//• Capacidad máxima en kilos (real, entre 500 y 32000).

//En un segundo lote de datos se ingresan por cada viaje realizado en el mes, el siguiente detalle:

//• Código de vehículo
//• Peso total de la mercadería transportada en un viaje (real, mayor a 0).
//
//Se debe rechazar el viaje cuando se supere el tope máximo en kilos del vehículo informado. Dentro del mes un vehículo puede hacer varios viajes, uno o ninguno. La finalización de la carga de este segundo lote se da por un código de vehículo igual a -1.
//
//Se pide:
//a)Informar, al finalizar el mes, el porcentaje de kilos transportado por cada uno de los vehículos respecto del total.
//b)Informar la cantidad de kilos transportado por cada vehículo con el siguiente diseño:
//NÚMERO DE PATENTE________________________KILOS TRANSPORTADOS

//c) Informar el Código de vehículo, que ha tenido la mayor cantidad de viajes rechazados por exceso de kilos (si hay varios, informar el último que aparezca).

#include <stdio.h>

void capacidadMaxima();

int main(){

    int dato, i;
    int vCapacidad[25]; //vector de 25 espacios, de 0 a 24 son 25 vehiculos, aqui indicamos la capacidad
    
    printf("\n===========================");
    printf("\nEl sistema informara realizara el reporte de numero de vehiculo y kilos transportados por mes, ademas el que mas rechazo tenga");
    printf("\n===========================");
    
    printf("\n============");
    printf("\nPrimero debe introducir codigo de vehiculo y su capacidad maxima.");
    printf("\nMaximo 25 vehiculos y entre 500 y 32000 kilos de carga.");
    printf("\n============");
    
    
    
    for (i = 0; i > 25 ; i++) { //maximo 25 vehiculos, empezamos en 0
        capacidadMaxima();
        printf("\nSe ingreso correctamente para el vehiculo %d tara de peso entre 500 y %d.", i+1, vCapacidad[i]);
    }
    
    return 0;
}

void capacidadMaxima(int i){
    int dato;
    
    do {
        printf("\nIntroducir capacidad maxima del vehiculo %d.", i+1);
        scanf("%d", &vCapacidad[i])
    } while (dato < 500 || dato > 32000); //va a pedir siempre que no sea el correcto, asigna directamente al vector. La carga segura esta en el FOR.
}
