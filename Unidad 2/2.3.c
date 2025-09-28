//
//  2.3.c
//
//
//  Created by Ramiro Nehuen Sanabria on 27/08/2025.
//2.3 Se ingresan las notas de dos evaluaciones de un alumno. Determinar la nota promedio.//

#include <stdio.h>

int main ()

{
    int nota1, nota2, promedio;
    
    puts("El programa calculara el promedio de 2 notas de un alumno ingresando las 2 evaluaciones"); //mensaje a usuario//
    printf("\nIntroducir nota 1\n"); //mensaje a usuario sobre nota 1//
    scanf("%d", &nota1);    //ingresa nota 1//
    
    printf("\nIntroducir nota 2\n"); //mensaje a usuario//
    scanf("%d", &nota2); //nota 2//
    
    //procesamiento logico del promedio//
    
    promedio = (nota1 + nota2) / 2;
    
    printf("\nEl promedio del alumno es: %d", promedio);
    
    return(0);
}
