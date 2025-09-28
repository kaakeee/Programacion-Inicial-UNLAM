//
//  4.10.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
/* La plataforma on line “TuTele” desea realizar un sistema para calcular el costo de la publicidad de un
 determinado cliente. Para realizarlo ingresa por teclado los siguientes datos:
 • Código de cliente (entero)
 • Código de la publicidad (entero)
 • Año de la publicidad (entero)
 • Importe de la publicidad por cada proyección (real)
 • Forma de pago (carácter, ‘E’: Efectivo; ‘C’: Cheque a 60 días)
 • Cantidad de proyecciones al día (entero)
 Calcular el importe a cobrar del día, según el siguiente esquema:
 ▪ Si la publicidad es del año actual (estreno) y el pago es con cheque a 60 días, el
 importe es un 40% más caro.
 ▪ Si la publicidad es de los dos años anteriores, el importe es un 20% más caro.
 ▪ Si la publicidad tiene más de tres años, y el pago es en efectivo, el importe es un
 10% más barato.
 Además, existe la siguiente promoción que se suma a lo anterior, si la cantidad de proyecciones diarias
 es 20 o más, se descuenta un 15% al importe a cobrar. Cualquier otro caso, no hay recargos ni
 descuentos. Informar el código del cliente, el código de la publicidad y el importe final a cobrar. */

#include <stdio.h>

int main ()

{
    int codigo_cliente, codigo_publicidad, anio_publicidad, cantidad_proyecciones, anio_actual;
    float importe_publicidad, importe_total;
    char forma_pago;
    
    
    //toma de datos a cliente//
    puts("El sistena TuTele calculara el costo de la publicidad, por favor ingresar los datos correspondientes");
    printf("\nIngrese codigo cliente: ");
    scanf("%d", &codigo_cliente);
    printf("\nIngrese codigo de la publicidad: ");
    scanf("%d", &codigo_publicidad);
    printf("\nIngrese año de la publicidad: ");
    scanf("%d", &anio_publicidad);
    printf("\nIngrese importe de cada proyeccion: ");
    scanf("%f", &importe_publicidad);
    //fflush(stdin);
    printf("\nIngrese forma de pago 'E' para efectivo o 'C' para Cheque a 60 dias: ");
    scanf(" %c", &forma_pago);   //se agrega un espacio entre " y la C debido que sino toma el ENTER anterior.
    printf("\nIngrese cantidad de proyecciones al diarias: ");
    scanf("%d", &cantidad_proyecciones);
    
    //calculo logico//
    anio_actual = 2025;
    
    if (anio_publicidad == anio_actual && forma_pago == 'C'){
        importe_total = importe_publicidad * cantidad_proyecciones * 1.4; //un 40% mas caro//
    }
    else {
        if (anio_publicidad >= (anio_actual - 2)) {
            importe_total = importe_publicidad * cantidad_proyecciones * 1.2;
        }
        else {
            if (anio_publicidad < (anio_actual - 3) && forma_pago == 'E') {
                importe_total = importe_publicidad * cantidad_proyecciones * 0.9;
            }
             }
        }
    if (cantidad_proyecciones >= 20){
        importe_total = importe_total * 0.85; //descuento del 15% si son mas de 20 proyecciones independientemente de las promociones anteriores//
    }
    
    
    printf("\nCodigo cliente: %d", codigo_cliente);
    printf("\nCodigo publicidad: %d", codigo_publicidad);
    printf("\nEl importe total es de: $%.2f", importe_total);
    
    return(0);
}
