//
//  Ejercicio5.c
//
//
//  Created by Ramiro Nehuen Sanabria on 18/09/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h> //Added for input validation


// Function to get integer input with error handling and range checking
int getIntegerInput(const char *prompt, int min, int max) {
    int input;
    do {
        printf("%s", prompt);
        if (scanf("%d", &input) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            // Clear the input buffer
            while (getchar() != '\n'); 
        } else if (input < min || input > max) {
            printf("Input out of range. Please enter a number between %d and %d.\n", min, max);
        }
    } while (input < min || input > max);
    return input;
}

// Function to get float input with error handling and range checking
float getFloatInput(const char *prompt, float min) {
    float input;
    do {
        printf("%s", prompt);
        if (scanf("%f", &input) != 1) {
            printf("Invalid input. Please enter a floating-point number.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        } else if (input <= min) {
            printf("Input out of range. Please enter a number greater than %.2f\n", min);
        }
    } while (input <= min);
    return input;
}

// Function to get character input with error handling
char getCharInput(const char *prompt, const char *validChars) {
    char input;
    do {
        printf("%s", prompt);
        if (scanf(" %c", &input) != 1) { // Note the space before %c to consume whitespace
            printf("Invalid input. Please enter a character.\n");
            // Clear the input buffer
            while (getchar() != '\n');
        } else {
            input = toupper(input);
            bool isValid = false;
            for (int i = 0; validChars[i] != '\0'; i++) {
                if (input == toupper(validChars[i])) {
                    isValid = true;
                    break;
                }
            }
            if (!isValid) {
                printf("Invalid character. Please enter one of: %s\n", validChars);
            } else {
                break;
            }
        }
    } while (true);
    return input;
}


int main() {
    int legajo, ant, cat, cant_10 = 0, max_leg, total = 0, contF = 0, contM = 0, contX = 0;
    float sueldo, max = 0.0; // Initialize max to 0.0
    char sex;
    bool primero = true;

    do {
        legajo = getIntegerInput("\nIngrese el legajo del empleado (1000-5000, 0 para terminar): ", 0, 5000);
        if (legajo == 0) break;

        sueldo = getFloatInput("\nIngrese el sueldo básico del empleado (mayor a cero): ", 0.0);
        ant = getIntegerInput("\nIngrese la antigüedad del empleado (mayor o igual a cero): ", 0, INT_MAX);
        sex = getCharInput("\nIngrese el sexo del empleado (F, M o X): ", "FMX");
        cat = getIntegerInput("\nIngrese la categoría del empleado (1-5): ", 1, 5);

        if (cat == 2 || cat == 3)
            sueldo += 150000;
        else if (cat == 4)
            sueldo += (sueldo * 0.1);
        else if (cat == 5)
            sueldo += (sueldo * 0.3);

        if (ant > 10) {
            sueldo += (sueldo * 0.1);
            cant_10++;
        }

        printf("\nEl sueldo del empleado de legajo %d es: %.2f\n\n", legajo, sueldo);

        if (primero || sueldo > max) {
            max = sueldo;
            max_leg = legajo;
            primero = false;
        }

        if (sex == 'F') contF++;
        else if (sex == 'M') contM++;
        else contX++;

        total++;
    } while (true);


    if (total > 0) {
        printf("\nLa cantidad de empleados con más de 10 años de antigüedad es: %d\n", cant_10);
        printf("\nEl empleado que más sueldo cobró es el del legajo %d con un importe de $ %.2f\n", max_leg, max);
        printf("\nPorcentaje de empleadas mujeres: %.2f%%\n", (float)contF / total * 100);
        printf("Porcentaje de empleados hombres: %.2f%%\n", (float)contM / total * 100);
        printf("Porcentaje de empleadxs no binarixs: %.2f%%\n", (float)contX / total * 100);
    } else {
        printf("\nNo se registraron datos de sueldos de empleados.");
    }

    printf("\n\n\n");
    return 0;
}
