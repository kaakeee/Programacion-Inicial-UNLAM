//
//  7.2.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 29/10/2025.
//
// 7.2 Para una carrera de automóviles, se toman los tiempos de clasificación (real, mayor que 0 en segundos) de como máximo 60 autos de carrera inscriptos para la competencia.

//Los autos se identifican con números correlativos del 1 al 60, quedando sin información aquellos que no participan de la presente carrera. Cuando ya no hay más tiempos de clasificación para cargar, se ingresa un auto con número negativo.

//Se solicita determinar:
//• El número de auto que clasificó en primer lugar. agrego y muestro tambien el tiempo
//• El número de auto que obtuvo el peor tiempo de clasificación. es lo mismo pero al revez
//• La cantidad de autos que superaron el promedio de tiempo de clasificación.
//• El o los números de autos que no participan de la carrera actual.

#include <stdio.h>
#define PARTICIPANTES 60 //cantidad de autos que compiten

int cargarTiempo(int tiempo[], int size); //tambien devuelve cantidad de participantes.
int Ganador(int tiempo[], int autos);
int Perdedor(int tiempo[], int autos);
int promedio(int tiempo[], int autos);
int main(){
    int autos, posicion;
    int tiempo[PARTICIPANTES]; //declaramos el array con el tamaño de participantes
    autos = cargarTiempo(tiempo, PARTICIPANTES); //llamamos a la funcion cargar tiempo, carga un vector con el tamaño 60 y corta con -1, si no es -1 ni numero vuelve a pedir, ademas asigna a autos la cantidad de competidores reales.
    posicion = Ganador(tiempo, autos);
    printf("\n==================================================");
    printf("\nEl auto en primer lugar es: %d con el tiempo: %d", posicion, tiempo[posicion-1]); //se resta -1 porque cuando lo traemos de la funcion ganador le sumamos 1 para mostrar al usuario, pero en realidad es -1 en el array
    posicion = Perdedor(tiempo, autos);
    printf("\n==================================================");
    printf("\nEl auto en ultimo lugar es: %d con el tiempo: %d", posicion, tiempo[posicion-1]); //se resta -1 porque cuando lo traemos de la funcion ganador le sumamos 1 para mostrar al usuario, pero en realidad es -1 en el array
    printf("\n==================================================");
    
    posicion = promedio(tiempo, autos); //si, reutilizamos la variable.//
    
    printf("\nCantidad de autos que superaron el promedio: %d", posicion);//si, solo reales.
    printf("\n==================================================");
    
    posicion = PARTICIPANTES - autos; ///60 - autos ingresados
    printf("\nAutos que no compitieron en la carrera: %d", posicion); //la cuenta no se puede hacer dentro del printf.
    printf("\n==================================================");
    return 0;
}


int promedio(int tiempo[], int autos){
    int suma = 0, prom, i;

    for (i = 0; i < autos; i++){
        suma = suma + tiempo[i]; //sumamos todos los tiempos del array
    }
    prom = suma / autos; //promedio de tiempo de todos los autos.
    
    
    //ahora buscamos la cantidad de todos los autos que superaron el promedio
    suma = 0; //la reiniciamos para reutilizar
    for (i = 0; i < autos ; i++){
        if (tiempo[i] < prom){suma++;} //si el auto es menor que el promedio lo supera y lo suma
        
    }
    
    return suma;
}


int Perdedor(int tiempo[], int autos){
    int i, maxPos = 0, lose; //por defecto el mayor es el 0
    for(i = 1; i < autos; i++){
        if (tiempo[i] > tiempo[maxPos]){ //compara el 0, es decir el primero con todos, y los reemplaza
            lose = i;
        }
    }
    return lose+1;
}

int Ganador(int tiempo[], int autos){
    int i, minPos = 0; //por default el ganador es el 0, osea el primero
    for (i = 1; i < autos; i++){
        if (tiempo[i] < tiempo[minPos]){ //compara con el primero con el segundo, si es menor lo reemplaza
            minPos = i;
        }
    }
    return minPos + 1; // +1 porque el auto 1 está en la posición 0
}

int cargarTiempo(int tiempo[], int size){
    //mensaje inicial para el usuario
    printf("\nIngrese el tiempo de clasificación en segundos.\n");
    printf("Para terminar, ingrese -1.\n");
    int dato, i = 0;
    int finalizar = 0; // bandera para controlar la salida del ciclo
    while (i < size && !finalizar) {//si finalizar es 0 lo niega y es 1, que es verdadero
        // solicita el tiempo para el auto actual (i+1)
        printf("\nIngrese el tiempo para el auto %d: ", i+1);
        int leidos = scanf("%d", &dato);
        if (leidos != 1) {
            // si la entrada no fue válida, muestra mensaje de error
            printf("\nEntrada inválida. Ingrese un número real positivo.\n");
        } else {
            if (dato == -1) {
                // Si el usuario ingresa -1, termina el ingreso de datos
                printf("\nFinalizo el programa.\n");
                finalizar = 1;
            } else if (dato > 0) {
                // si el dato es válido (>0), lo guarda en el vector
                tiempo[i] = dato;
                printf("\nTiempo del auto %d es de: %d\n", i+1, dato);
                i++;
            } else {
                // Si el dato es 0 o negativo (distinto de -1), muestra mensaje de error
                printf("\nIngrese un número real positivo.\n");
            }
        }
    }
    // Muestra la cantidad de autos cargados
    printf("\nAutos cargados: %d\n", i);
    return i; //devuelve la cantidad de autos que participaron
}
