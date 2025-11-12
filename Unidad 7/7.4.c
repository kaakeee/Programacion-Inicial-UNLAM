//
//  7.4.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 12/11/2025.
//
//7.4 Una empresa debe registrar los pedidos recibidos de cada uno de sus 10 productos a lo largo del día. Por cada pedido se recibe:
//• Código de producto (entero, de 10001 a 10010)
//• Cantidad de unidades solicitadas (entero, mayor a cero)
//• Precio unitario del producto (real, mayor a cero)


//Se puede recibir más de un pedido por producto. Como se piden desde distintos lugares del país, el
//precio unitario puede variar de un pedido a otro aunque sea del mismo producto.
//La carga finaliza cuando se ingresa un producto con código igual a cero.




#include <stdio.h>
#define Cantidad_Productos 10
int f_Validar_Positivo_int();
float f_Validar_Positivo_float();

int main(){
    int vCantidad_Solicitadas[Cantidad_Productos] = {0}, i, cantidad;
    int vProductos[Cantidad_Productos];
    float vVentas[Cantidad_Productos] = {0};
    int contadorMasDeMil = 0;
    float porcentaje;
    float menorImporte;
    
    for (i=0 ; i<Cantidad_Productos ; i++){
        vProductos[i] = 10001 + i;
    } //cargamos los productos apartir de 10001 hasta 10010, si son mas se puede modificar en cantidad de productos.
    
    
    
    //apartir de aca pedimos ventas.
    
    
    do {
        do {
            printf("\nIngrese codigo del producto entre %d y %d (0 para salir): ", vProductos[0], vProductos[Cantidad_Productos-1]);
            scanf("%d", &i);
            
            if ( (i < vProductos[0] || i > vProductos[Cantidad_Productos-1]) && i != 0)
            {printf("Error: Codigo no valido.\n");}
            
        } while ( (i < vProductos[0] || i > vProductos[Cantidad_Productos-1]) && i != 0 );
        
        if (i != 0)
        {
            printf("\nIngrese Cantidad de ventas.");
            cantidad = f_Validar_Positivo_int();
            vCantidad_Solicitadas[i-10001] = vCantidad_Solicitadas[i-10001] + cantidad; //Cantidad de unidades solicitadas (entero, mayor a cero)
            
            printf("\nIngrese precio unitario.");
            vVentas[i-10001] = vVentas[i-10001] + (cantidad * f_Validar_Positivo_float());
            //Precio unitario del producto (real, mayor a cero)
            
        } else {printf("\nFinalizo el dia de ventas.\n");}
        
    } while (i != 0);
    
    
    ///mostramos todas las ventas
    
    
    for (i=0 ; i<Cantidad_Productos ; i++){
        printf("\n======================");
        printf("\nCodigo producto: %d", vProductos[i]);
        printf("\nCantidad unidades: %d", vCantidad_Solicitadas[i]);
        printf("\nCantidad vendido: %.2f", vVentas[i]);
    }
    
    ///porcentaje de ventas solicitadas
        for (i=0 ; i<Cantidad_Productos ; i++)
        {
            if (vCantidad_Solicitadas[i] > 1000)
            {
                contadorMasDeMil++; // solo contamos un producto que supero las 1000 unidades
            }
        }
    
        porcentaje = (float)contadorMasDeMil / Cantidad_Productos * 100.0;
        
        printf("\n\n======================");
        printf("\nPORCENTAJE (> 1000 unidades): %.2f%%", porcentaje);
        printf("\n======================\n");
    
    
    ///menor ventas:
        menorImporte = vVentas[0];
        
        for (i=1 ; i<Cantidad_Productos ; i++)
        {
            if (vVentas[i] < menorImporte)
            {
                menorImporte = vVentas[i];
            }
        }
        
        printf("\n======================");
        printf("\nProductos con menor venta $%.2f", menorImporte);
        
        for (i=0 ; i<Cantidad_Productos ; i++)
        {
            if (vVentas[i] == menorImporte)
            {
                printf("\n- Codigo producto: %d", vProductos[i]);
            }
        }
        printf("\n======================");
    
    
    
    return 0;
}



int f_Validar_Positivo_int(){
    int dato;
    do {
    printf("\nIngrese entero mayor a 0: ");
        scanf("%d", &dato);
    } while (dato <= 0);
    
    return dato;
}

float f_Validar_Positivo_float(){
    float dato;
    do {
    printf("\nIngrese real mayor a 0: ");
        scanf("%f", &dato);
    } while (dato <= 0);
    
    return dato;
}



//Al finalizar, informar:
//• Un listado con código y cantidad de unidades solicitadas de cada producto.
//• Indicar el porcentaje de productos que se pidieron en más de 1000 unidades.
//• Informar qué producto vendió el menor importe (puede haber más de uno).
