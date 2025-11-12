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

//Se pide:
//a)Informar, al finalizar el mes, el porcentaje de kilos transportado por cada uno de los vehículos respecto del total.
//b)Informar la cantidad de kilos transportado por cada vehículo con el siguiente diseño:
//   NÚMERO DE PATENTE________________________KILOS TRANSPORTADOS

//c) Informar el Código de vehículo, que ha tenido la mayor cantidad de viajes rechazados por exceso de kilos (si hay varios, informar el último que aparezca).

#include <stdio.h>
#define Cant_Camiones 5
int capacidadMaxima(int i);


int main(){

    int dato, dato1, i;
    int vCapacidad[Cant_Camiones]; //vector de cant_camiones espacios
    int vPesoTransportado[Cant_Camiones] = {0}; // de 0 a 25 sera el camion, solo se suma peso transportado
    int vRechazado[Cant_Camiones] = {0}; //lo rechazado se suma aparte.
    float porcentaje;
    //inicializamos vectores en 0//
    
    
    printf("\n===========================");
    printf("\nEl sistema informara realizara el reporte de numero de vehiculo y kilos transportados por mes, ademas el que mas rechazo tenga");
    printf("\n===========================");
    
    printf("\n===========================");
    printf("\nPrimero debe introducir codigo de vehiculo y su capacidad maxima.");
    printf("\nMaximo %d vehiculos y entre 500 y 32000 kilos de carga.", Cant_Camiones);
    printf("\n===========================");
    
    
    
    for (i = 0; i < Cant_Camiones ; i++) { //maximo 25 vehiculos, empezamos en 0
        vCapacidad[i] = capacidadMaxima(i);
        printf("\nSe ingreso correctamente para el vehiculo %d tara de peso entre 500 y %d.\n", i+1, vCapacidad[i]);}
    
    //i se reutiliza para indicar el camion
    
    do {
        printf("\n==========================================.");
        printf("\nInroducir codigo vehiculo y carga de kilos.");
        printf("\nIngrese '-1' para terminar en codigo de vehiculo");
        printf("\nCodigo de vehiculo: ");
        scanf("%d", &i);
        if (i != -1){
                printf("\nIngrese la cantidad de kilos transportados: ");
                printf("\nMaximo permitido para el camion %d es de: %d.", i, vCapacidad[i]);
            do{
                printf("\nDebe ingresar un valor superior a 0:  ");
                scanf("%d", &dato);
            }while (dato <= 0); //debe ser mayor a 0 sino vuelve a pedir.
            
            
            if (vCapacidad[i] > dato){ //si da verdadero, esta dentro del limite permitido
                vPesoTransportado[i] += dato;
                printf("\nCamion %d transporto %d kilos.", i, vPesoTransportado[i]);
            } else { //cantidad viajes rechazados debido que excede.
                vRechazado[i]++; ///se suma la perdida, queremos sumar kilos va a ser vRechazado[i] += dato;
                printf("\nCamion %d rechazo %d kilos por exceso de peso.", i, dato);
            }
        }
    } while (i != -1);
    printf("\n===================");
    printf("\nFin carga de datos.");
    printf("\n===================");
    
    dato = 0; //reutilizamos variable
    for (i = 0; i < Cant_Camiones ; i++) { //sumamos todos los kilos
        dato += vPesoTransportado[i]; //sumamos todos los kilos, se almacena en dato
        }
    
    printf("\nTotal kilos transportados correctamente: %d", dato);
    
    for (i = 0; i < Cant_Camiones; i++) {
        porcentaje = (vPesoTransportado[i] * 100.0) / dato; //saco porcentaje de cada uno
        printf("\nVehiculo %d transportó %.2f%% del total.\n", i + 1, porcentaje); //muestro cada porcentaje
        }
    
    printf("\nNÚMERO DE PATENTE________________________KILOS TRANSPORTADOS");
    for (i = 0; i < Cant_Camiones; i++) {
        printf("\n%               d________________________%d", i, vPesoTransportado[i]); //muestro cada porcentaje
        }//como solo tenemos un vector de codigo de vehiculo, solo damos el numero, pero si tendriamos otro vector de pantente mostrariamos la patente como "vPatente[i]"
    
    //c) Informar el Código de vehículo, que ha tenido la mayor cantidad de viajes rechazados por exceso de kilos (si hay varios, informar el último que aparezca).
//empezamos con el primero asignandolo porque lo ponemos
    
    dato = vRechazado[0]; //reutilizamos variable
    for (i = 1; i < Cant_Camiones; i++) {
        if (vRechazado[i] > dato){
            dato = vRechazado[i];
            dato1 = i;
        }
    }
    printf("\nEl camion con mas viajes rechazados es el camion %d con los kilos %d", dato1, vRechazado[i]);
    
    return 0;
}

int capacidadMaxima(int i){
    int dato;
    
    do {
        printf("\nIntroducir capacidad maxima del vehiculo %d:  ", i+1);
        scanf("%d", &dato);
    } while (dato < 500 || dato > 32000); //va a pedir siempre que no sea el correcto, asigna directamente al vector. La carga segura esta en el FOR.
    return dato;
}
