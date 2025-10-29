//
//  7.1.c
//  
//A partir de esta unidad, todos los ejercicios DEBEN ser resueltos utilizando FUNCIONES y validando todos los datos ingresados por teclado, siempre que eso sea posible.
//  Created by Ramiro Nehuen Sanabria on 22/10/2025.
/*7.1 Dada una lista de 10 valores enteros. Se pide:
a) Cargar la lista en memoria en un vector llamado VecA.
b) Copiar el vector VecA en otro llamado VecB., ademas se hizo print de todo.
c) Generar un vector VecC correspondiente a la suma de VecA y VecB.
d) Copiar VecA en orden inverso en otro vector llamado VecD.
e) Listar los cuatro vectores simultáneamente informando en la primera columna el
número de orden de los elementos.
f) Informar las posiciones de elementos pares del vector VecA.
g) Informar los elementos de posiciones impares del vector VecA.
h) Informar la suma de los elementos del vector VecA.
i) Informar el valor promedio de los elementos del vector VecA.
j) Ingresar por teclado un valor entero N e informar la cantidad de elementos iguales
 a N en el vector VecA.
*/
#include <stdio.h>

// Como no se utiliza en 'main' y está incompleta, la he eliminado por ahora para evitar errores.
// void invierteVec(Vec_A, Vec_D, 10); // Esto sigue comentado y sin usar.
#define STORAGE 10  //capacidad del los array

// Prototipo de la función cargaVec corregido
void cargaVec(int vec[], int size);
void copiarVec(int vec_Copy[], int vec_Paste[], int size);
void sumaVectores(int vec_1[], int vec_2[], int vec_sum[], int size);
void copiarVecInverso(int Vec_A[], int Vec_D[], int size);
int main(){
    printf("===============\n");
    printf("INICIO PROGRAMA\n");
    printf("===============\n");

/*A*/    int Vec_A[STORAGE]; // Declarar el array Vec_A
    cargaVec(Vec_A, STORAGE); // Llamar a la función para cargar el array
/*B*/    int Vec_B[STORAGE]; // Se declara array Vec_B
    copiarVec(Vec_A, Vec_B, STORAGE); // Se copia Array A a B.
    /*C*/int Vec_C[STORAGE]; //Declaramos Array_C
    sumaVectores(Vec_A, Vec_B, Vec_C, STORAGE);
    /*B*/int Vec_D[STORAGE];
    copiarVecInverso(Vec_A, Vec_D, STORAGE);
    //d) Copiar VecA en orden inverso en otro vector llamado VecD.

    
    return 0;
}

void copiarVecInverso(int Vec_A[], int Vec_D[], int size){
    int i, posicion;
    posicion = size - 1; // seria 9
    printf("\n=====================");
    printf("\nSe copiara el Vec_A a Vec_D de forma invertida.");
    printf("\n=====================");
    for (i = 0; i < size; i++){
        Vec_D[posicion] = Vec_A[i];
        printf("\nSe copia de Vec_A[%d] numero %d a Vec_D[%d] de numero %d", i, Vec_A[i], posicion, Vec_D[posicion]);
        posicion--; // de 9 a 8, 7 6 5 4 3 2 1 0...
    }
    printf("\n=====================");
    printf("\nSe finalizo copia inversa");
    printf("\n=====================");
}

void sumaVectores(int vec_1[], int vec_2[], int vec_sum[], int size){
    printf("\n\nSe sumaran los vectores A y B, y se almacenaran en C.\n");
    int i;
    for (i = 0; i < size; i++){
        vec_sum[i] = vec_1[i] + vec_2[i];
        printf("\nLa suma en C en posicion %d es de: %d",i ,vec_sum[i]);
    }
    printf("\n=====================");
    printf("\nLa suma en C finalizo");
    printf("\n=====================");
}
void copiarVec(int vec_Copy[], int vec_Paste[], int size){
    printf("\nSe copiara el vector Vec_A a Vec_B\n");
    int i;
    for (i = 0; i < size ; i++){
        vec_Paste[i] = vec_Copy[i];
        printf("\nSe copia el numero %d de Vec_A a Vec_B\n", vec_Paste[i]);
        //hacemos print desde la copia para validar copiado correcto
    }
    printf("\n=====================");
    printf("\nSe copio el Vec_A a Vec_B correctamente.\n");
    printf("\n=====================");
}
// Implementación de la función cargaVec corregida y con validación de entrada
void cargaVec(int vec[], int size){
    printf("\nIngresar %d valores enteros.\n", size);
    int i;
    for (i = 0; i < size ; i++) {
        int inputRead;
        do {
            printf("Ingrese dato N %d: ", i + 1);
            // Validar que la entrada sea un número entero
            if (scanf("%d", &vec[i]) == 1) {
                inputRead = 1; // Entrada válida
            } else {
                inputRead = 0; // Entrada inválida
                printf("Entrada inválida. Por favor, ingrese un número entero.\n");
                // limpia el buffer de entrada para evitar bucles infinitos, no tengo fflux en clang
                while (getchar() != '\n');
            }
        } while (inputRead == 0); // repite hasta que la entrada sea válida
        printf("Dato ingresado: %d\n", vec[i]);
    }
}



/////sumar vectores

//void for (0, ce-1,1){
  //  v3[i] = v1[i] + v2[i];
//}

//void invierteVec(int v1[], int v2[], int ce)
//pos = ce - 1;
//for (i = 0, ce-1, i++){
//    v2[pos] = v1[i];
//    pos--;
//}
//
//
//
//
////F
//impPosElmenParVec(Vec_A, 10);
//void impPosElmenParVec(int v[], int ce)
//for (0, ce-1, 1){
//    
//};
//
//
////G
//impPosImpaVec(Vec_A, 10);
//
//for (1, ce-1, i=+2){
//    
//    printf(v[i])
//           };
//
//
////H
//void sumaVec(int v[], int ce);
//
//for (0, ce-1, i++){
//    suma+=;
//}
//
//printf("%d", sumaVec(Vec_A, 10));
//
//
////i iiii
//
//float promeVec(Vec_A, 10);
//
//
//float promeVec(int v[], int ce){
//    float r= (float)sumaVec(v, ce) /ce;
//    return r;
//}
//
////j) Ingresar por teclado un valor entero N e informar la cantidad de elementos iguales
////a N en el vector VecA.
//
//
//
//contarIgualesVec(Vec_A, 10, n);
//int contarIgualesVec(int v[], int ce, int N){
//    scanf("%d", &N)
//    cont = 0;
//    for (i=0, ce-1, i++){
//        if (v[i]==n){
//            cont++;
//        }
//    }
//    return cont;
//}
//
