//
//  promedioedades.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 10/09/2025.
//
//ingresar las edades de los alumnos del curso, informar el promedio de las edades, el fin de carga se detecta cuando es la edad = 0
#include <stdio.h>

int main (){
    
    int sumaEdad, contador, edad, promedio;
    sumaEdad = 0;
    contador = 0;
    
    printf("\nEl programa calculara el promedio de las edades de los alumnos, cortara cuando ingrese una edad en 0.\n");

    printf("Ingrese la edad del alumno %d: ", contador+1);
    scanf("%d", &edad);
    
    while (edad>0)
    {
        sumaEdad += edad;
        contador++;
        printf("Ingrese la edad del alumno %d: ", contador+1);
        scanf("%d", &edad);
    }
    
    promedio = sumaEdad / contador;
    
    if (contador <= 0)
    {
        printf("\nNo se ingresaron edades de alumnos\n");
    }
    else
    {
        printf("\nEl promedio es: %d\n", promedio);
    }
    
    return(0);
}
