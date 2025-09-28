//
//  4.4.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
//Se ingresan 3 números enteros. Informarlos en orden creciente.//

#include <stdio.h>

int main ()

{
    int num1, num2, num3, num_temporal;
    puts("El programa ordenara los 3 numeros introducidos en orden creciente");
    printf("\nIntroducir el primer numero\n");
    scanf("%d", &num1);
    printf("\nIntroducir el segundo numero\n");
    scanf("%d", &num2);
    printf("\nIntroducir el tercer numero\n");
    scanf("%d", &num3);
    
    
    //proceso logico, acomoda los numeros con una variable temporal, si no se activa ningun IF, el orden es el mismo que se introducieron los numeros//
    
    if (num1 > num2){
        num_temporal = num1;
        num1 = num2;
        num2 = num_temporal; }
    if (num1 > num3){
        num_temporal = num1;
        num1 = num3;
        num3 = num_temporal; }
    if (num2>num3){
        num_temporal = num2;
        num2 = num3;
        num3 = num_temporal; }
    
    printf("El orden de los numeros es: %d, %d y %d", num1, num2, num3);
    
    return(0);
}
