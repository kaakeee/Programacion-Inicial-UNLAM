//
//  6.2.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 07/10/2025.
/*6.2. Se ingresa valores positivos entre 1 y 50, finalizando el ingreso con el valor -10. Calcular:
 
a. Porcentaje de números son primos.
b. Cantidad de números pares.
c. Promedio de los números impares.
 
Utilizar las siguientes funciones:
 
• IngrDatoValCF: Recibe tres parámetros que son el rango y la condición de fin, que es un número que no pertenece al rango válido. El ingreso se hace dentro de la función y se retorna el dato ingresado y validado.
 
• CalculaResto: Recibe por parámetro el Dividendo y el Divisor, retorna el resto de la división.
 
• esPar: Recibe por parámetro un número, retorna 1 (verdadero) si es Par, 0 (falso) si es Impar.
 
Invoca a la función CalculaResto:
 
• esPrimo: Recibe por parámetro un número, retorna 1 (verdadero) si es primo, 0 (falso) si no es primo. Invoca a la función CalculaResto. (un número es primo si sólo es divisible por 1 y por sí mismo).
• Promedio: Recibe por parámetro una variable acumuladora y una variable contadora. Retorna el promedio si contador es mayor a 0 sino Retorna 0. Se debe preguntar después del retorno el valor del promedio. */

#include <stdio.h>
#include <math.h> // Necesario para sqrt en esPrimo

// --- Prototipos de Funciones ---
int IngrDatoValCF(int inicio, int fin, int corte);
int CalculaResto(int dividendo, int divisor);
int esPar(int numero);
int esPrimo(int numero);
float Promedio(int suma, int contador);

int main() {
    int numero;
    int totalNumeros = 0, cantPrimos = 0, cantPares = 0, cantImpares = 0, sumaImpares = 0;

    printf("Este programa analiza numeros enteros entre 1 y 50.\n");
    printf("Ingrese -10 para finalizar la carga de datos.\n");

    while ((numero = IngrDatoValCF(1, 50, -10)) != -10) {
        totalNumeros++;

        if (esPrimo(numero)) {
            cantPrimos++;
        }
        if (esPar(numero)) {
            cantPares++;
        } else {
            cantImpares++;
            sumaImpares += numero;
        }
    }

    if (totalNumeros > 0) {
        float porcPrimos = Promedio(cantPrimos * 100, totalNumeros);
        float promImpares = Promedio(sumaImpares, cantImpares);

        printf("\n========= Resultados =========\n");
        printf("a. Porcentaje de numeros primos: %.2f%%\n", porcPrimos);
        printf("b. Cantidad de numeros pares: %d\n", cantPares);
        
        if (promImpares > 0) {
             printf("c. Promedio de los numeros impares: %.2f\n", promImpares);
        } else {
             printf("c. No se ingresaron numeros impares.\n");
        }
    } else {
        printf("\nNo se ingresaron datos para analizar.\n");
    }

    return 0;
}

/*Solicita al usuario un número dentro de un rango específico,
  validando la entrada hasta que sea correcta o sea el valor de corte.*/
int IngrDatoValCF(int inicio, int fin, int corte) {
    int num;
    do {
        printf("\n> Ingrese un numero entre %d y %d (%d para terminar): ", inicio, fin, corte);
        scanf("%d", &num);
        if ((num < inicio || num > fin) && num != corte) {
            printf("  Error: El valor ingresado está fuera del rango permitido.\n");
        }
    } while ((num < inicio || num > fin) && num != corte);
    return num;
}

/*Calcula el resto de la división entera entre dos números.*/
int CalculaResto(int dividendo, int divisor) {
    if (divisor == 0) {
        // Manejo de error para evitar división por cero, aunque en este
        // programa no debería ocurrir.
        return 0; 
    }
    return dividendo % divisor;
}

/*Determina si un número es par. Retorna 1 si es par, 0 si es impar. Utiliza la función CalculaResto. */
int esPar(int numero) {
    if (CalculaResto(numero, 2) == 0) {
        return 1; // Es par
    } else {
        return 0; // Es impar
    }
}

/*Determina si un número es primo. Retorna 1 si es primo, 0 si no lo es. Utiliza la función CalculaResto. */
int esPrimo(int numero) {
    if (numero < 2) {
        return 0; // Los números menores a 2 no son primos.
    }
    if (numero == 2) {
        return 1; // 2 es el único primo par.
    }
    if (esPar(numero)) { // Usamos esPar que a su vez usa CalculaResto.
        return 0; // Ningún otro número par es primo.
    }
    
    // Solo es necesario comprobar divisores impares hasta la raíz cuadrada del número.
    int limite = (int)sqrt((double)numero);
    for (int i = 3; i <= limite; i += 2) {
        if (CalculaResto(numero, i) == 0) {
            return 0; // Si encuentra un divisor, no es primo.
        }
    }
    
    return 1; // Si no encontró divisores, es primo.
}

/*Calcula el promedio de una suma de números. Retorna el promedio o 0 si el contador es 0.*/
float Promedio(int suma, int contador) {
    if (contador > 0) {
        return (float)suma / contador;
    } else {
        return 0;
    }
}
