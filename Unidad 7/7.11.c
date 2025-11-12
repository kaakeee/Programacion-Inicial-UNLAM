//
//  7.11.c
//
//
//  Created by Ramiro Nehuen Sanabria on 12/11/2025.
//
//7.11 La empresa de turismo CIVITATIS desea analizar las ventas de los 80 paquetes turísticos que
//comercializa, efectuada durante el período de vacaciones.
//Para ello, en un primer lote de datos, por cada paquete turístico, se ingresa:
//✓ Código de paquete turístico (números enteros positivos no consecutivos de 4 cifras)
//✓ Precio unitario (real, mayor a cero)

//A continuación, ingresar la fecha del día de proceso (día, mes, año).

//Luego, procesar los datos de las ventas del período, que se ingresan por teclado, con el siguiente detalle:
//✓ Número de cliente (entero, mayor a cero)
//✓ Código de paquete turístico
//✓ Cantidad vendida (entero, mayor a cero)

//Estos datos no se ingresan ordenados, los números de clientes no se repiten y la lectura debe detenerse cuando se ingrese un número de cliente igual a cero.
//a) Acumular la cantidad vendida por cada paquete turístico. Si se ingresa un código de paquete
//turístico no ofertado, rechazar la venta (los 3 datos) con una leyenda aclaratoria.
//
//B)
//Al finalizar el proceso, informar:
//• Las cantidades e importes vendidos de cada paquete turístico, con el siguiente diseño:
//turístico no ofertado, rechazar la venta (los 3 datos) con una leyenda aclaratoria.
//Al finalizar el proceso, informar:
//• Las cantidades e importes vendidos de cada paquete turístico, con el siguiente diseño:

//VENTAS AL XX/XX/XXXX
//CÓDIGO DEL PAQUETE TURÍSTICO CANTIDAD VENDIDA IMPORTE VENDIDO
//XXXX XXX XXXXXXXXX.XX
//XXXX XX XXXXXXXX.XX
//……. … …………………
//TOTALES XXXX XXXXXXXXXXXX.XX
//• El promedio de ventas de los paquetes turísticos por cliente.
//• Los códigos de los paquetes turísticos de los que no se han realizado ninguna venta en el período.
//• El número de cliente que hizo la menor compra durante el período.

#include <stdio.h>
#define Cant_Paquetes_Turisticos 80

int f_Entero_Mayor();
float f_Real_Mayor();

int main(){
    int i, dato, dia, mes, anio;
    int vPaquetes[Cant_Paquetes_Turisticos];
    float vPrecio_Unitario[Cant_Paquetes_Turisticos];
    
    printf("\n==================");
    printf("\nPrograma CIVITATIS");
    printf("\n==================");
    
    
    ///carga codigo de paquetes turisticos, no validamos si son repetidos
    for (i=0 ; i < Cant_Paquetes_Turisticos ; i++){
        printf("\nIngrese codigo paquete turistico.");
        do {
            scanf("%d", &dato);
        } while (dato <= 1000 && dato >= 9999 );  ///pide numeros entre 1000 y 9999 de 4 cifras.
        vPaquetes[i] = dato;
        ///carga de valores unitarios
            printf("\nIngrese valor unitario del paquete %d", vPaquetes[i]);
        vPrecio_Unitario[i] = f_Real_Mayor();
    }
    
    ///carga fecha sin comprobacion
    printf("\nIngrese Dia");
    dia = f_Validacion_Rango(0, 31);
    printf("\nIngrese Mes");
    mes = f_Validacion_Rango(0, 31);
    printf("\nIngrese Año");
    anio = f_Validacion_Rango(0, 2500);
    
    return 0;
}

int f_Validacion_Rango(int min, int max){
    int dato;

    do {
        printf("\nIntroducir dato entre %d y %d inclusive", min, max);
        scanf("%d", &dato);
    } while (dato < min && dato > max);
    return dato;
}

int f_Entero_Mayor(){
    int dato;
    
    do {
        printf("Ingrese dato entero mayor a 0.");
        scanf("%d", &dato);
    } while (dato <= 0); //vuelve a pedir datos hasta que sea cumpla la condicion.
    return dato;
}


float f_Real_Mayor(){
    float dato;
    
    do{
        printf("Ingrese dato real mayor a 0.");
        scanf("%f", &dato);
    } while (dato<=0);
    
    return dato;
}
