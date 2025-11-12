//  p1.c
//  Created by Ramiro Nehuen Sanabria on 05/11/2025.
//
//P2.1 La empresa El Clavel que comercializa flores exóticas por mayor, desea analizar las ventas efectuadas por sus 110 sucursales mensualmente a lo largo del país, en las principales ciudades.
//Para ello, se tiene una lista para ingresar desde teclado con los datos de las 12 variedades de flores que comercializa. Al comienzo del programa, por cada tipo de flor, se ingresa:

//▪ Código de la variedad de la flor (entero, de 101 a 999)
//▪ Precio de la flor por unidad (real, mayor que cero)

//A continuación, ingresar el mes y año correspondiente a los datos a procesar.
//Luego se ingresan los datos de las ventas del mes por teclado, con el siguiente detalle:

//▪ Número de sucursal (entero, de 5001 a 5110)
//▪ Código de la flor
//▪ Cantidad vendida (entero, mayor que cero)

//Estos datos no se ingresan ordenados y la lectura debe detenerse cuando se ingrese un número de sucursal igual a 5000.

//Se pide:
//a. Informar los importes vendidos por cada sucursal con el siguiente diseño:
//VENTAS DEL MES XX DE XXXX
//Sucursal Importe vendido
//xxx xxxx.xx
//xxx xxxx.xx
//…… …….
//……. …….
//b.Código de la variedad de flor de la cual se vendieron más cantidad de flores. Si hubiere más
//de una, informar la primera que aparezca en esa condición.
//C. Informar cuántas sucursales vendieron flores por un importe superior al promedio de ventas de todas las sucursales.
//d. Informar el porcentaje de las flores de las cuales no se vendió nada en ninguna sucursal.

#include <stdio.h>
//#include <limits.h> //para el limite de INT_MAX, seria lo equivalente a sumar lo maximo de reales
//no podemos usar limits porque no la dejan en usar en la materia xD
#define Sucursales 110 //cambia la cantidad de sucursales.
#define Cant_flores 2 //cambia la cantidad de flores.

void ingresar_flores(int codigos[], float precios[]);
int f_validar_rango(int min, int max);
int f_validar_positivo();

int main() {
    int mes, anio, i, sucursal, flor, cantidad;
    int vCodigo_Flor[Cant_flores], vNumero_Sucursal[Sucursales];
    float vPrecio_Flor[Cant_flores], vVentas[Sucursales] = {0}; //el vector ventas va a ser igual de grande que las sucursales
    //solo almacenamos total de ventas, no cada una de las ventas, inicializo en 0, debido que  es un acumulador de ventas.

    int vCantFlor[Cant_flores] = {0}; // Para contar cuántas flores se venden de cada tipo
    int sucursalesArribaProm = 0;
    int floresSinVenta = 0;
    float sumaVentas = 0;
    int maxFlor = 0; // índice de mayor cantidad
    int maxCant = -1;

    printf("\nAnalizador de ventas Empresa el Clavel\n");

    ingresar_flores(vCodigo_Flor, vPrecio_Flor);

    printf("\nIngrese mes\n");
    mes = f_validar_rango(1, 12); //valida que el dato este en 1 y 12
    printf("\nIngrese año\n");
    anio = f_validar_rango(1900, 2400); // valida dato entre 1900 y 2400

    //llenamos sucursales con for para carga segura
    for (i = 0; i < Sucursales; i++) {
        vNumero_Sucursal[i] = 5001 + i; //va sumando de 5001 hasta 5110
    }

    printf("\n===================================\n");
    printf("\n Ingrese las ventas a continuacion.\n");
    printf("\n===================================\n");

    do {
        printf("\nIngrese sucursal de 5001 a 5110, o 5000 para parar: \n");
        sucursal = f_validar_rango(5000, 5110); //validamos que este entre los valores acordados.
        if (sucursal != 5000){ //solo ejecutamos ventas si la sucursal no es 5000.
            printf("Ingrese codigo de la flor: \n");
            flor = f_validar_rango(101, 999);

            // Buscar índice de la flor ingresada
            int idx_flor = -1;
            for(i=0; i<Cant_flores; i++){
                if(vCodigo_Flor[i] == flor){
                    idx_flor = i;
                }
            }

            printf("Ingrese cantidad vendida (mayor que cero): ");
            cantidad = f_validar_positivo();

            //Buscar índice sucursal
            int idx_sucursal = -1;
            for(i=0; i<Sucursales; i++){
                if(vNumero_Sucursal[i] == sucursal && idx_sucursal == -1){
                    idx_sucursal = i;
                }
            }

            if(idx_flor != -1 && idx_sucursal != -1){
                vVentas[idx_sucursal] += cantidad * vPrecio_Flor[idx_flor];
                vCantFlor[idx_flor] += cantidad;
            }
            //Si no encontró indices validos no se acumula nada, ni se accede a vectores.
        }
        else { //paramos el programa en else.
            printf("\n==================================\n");
            printf("\n   Carga de ventas finalizo.\n");
            printf("\n==================================\n");
        }


    } while (sucursal != 5000);

    // a) Imprimir informe ventas por sucursal
    printf("\nVENTAS DEL MES %02d DE %04d\n", mes, anio);
    printf("Sucursal\tImporte vendido\n");
    for(i=0;i<Sucursales;i++){
        printf("%d\t%.2f\n", vNumero_Sucursal[i], vVentas[i]);
        sumaVentas += vVentas[i];
    }

    // b) Flor con mayor cantidad vendida
    for(i=0;i<Cant_flores;i++){
        if(vCantFlor[i]>maxCant){
            maxCant = vCantFlor[i];
            maxFlor = i;
        }
    }
    printf("\nCodigo flor mayor cantidad: %d\n", vCodigo_Flor[maxFlor]);

    // c) Sucursales con ventas superiores al promedio
    float promVentas = sumaVentas/Sucursales;
    for(i=0;i<Sucursales;i++){
        if(vVentas[i]>promVentas){
            sucursalesArribaProm++;
        }
    }
    printf("\nSucursales con ventas superiores al promedio: %d\n", sucursalesArribaProm);

    // d) Porcentaje de flores sin venta
    floresSinVenta = 0;
    for(i=0;i<Cant_flores;i++){
        if(vCantFlor[i]==0){
            floresSinVenta++;
        }
    }
    printf("\nPorcentaje de flores sin venta: %.2f%%\n", (floresSinVenta*100.0)/Cant_flores);

    return(0);
}


int f_validar_rango(int min, int max){
    int dato;
    do {
        printf("Ingresar valor entre %d y %d: ",min, max);
        scanf(" %d", &dato);
    } while (min > dato || max < dato);

    return dato;
}

int f_validar_positivo(){

    int dato;
    do{
        printf("\nIngresar un valor positivo: ");
        scanf(" %d", &dato);
    } while (dato <= 0);

    return dato;
}

void ingresar_flores(int codigos[], float precios[]){
    int i;
    float precio;

    for (i=0; i<Cant_flores; i++){
        printf("\nIngrese código de la variedad de la flor.\n ");
        codigos[i] = f_validar_rango(101, 999);

        do {
            printf("Ingrese precio de la flor por unidad (real, mayor que cero): ");
            scanf(" %f", &precio);
        } while (precio <= 0); // no es necesario llamar a la funcion validar.
        precios[i] = precio;

    }
}

