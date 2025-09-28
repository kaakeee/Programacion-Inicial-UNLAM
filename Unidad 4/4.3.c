//
//  4.3.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//
// Confeccionar un programa que pueda determinar de 3 números enteros que se ingresan si alguno de ellos es igual a la suma de los otros dos. //

#include <stdio.h>

int main ()

{
    int num1, num2, num3, ninguno;
    puts("El programa determinara si alguno de los numeros es igual a la suma de los otros 2");
    
    printf("\nPor favor introducir el primer numero:\n");
    scanf("%d", &num1);
    printf("\nPor favor introducir el segundo numero:\n");
    scanf("%d", &num2);
    printf("\nPor favor introducir el tercer numero:\n");
    scanf("%d", &num3);
    
    ninguno = 0;
    
    //condiciones logicas//
    if (num1 == num2 + num3){
        printf("El numero %d es igual a la suma de %d y %d", num1, num2, num3);
        ninguno = 1;}
    if (num2 == num1 + num3){
        printf("El numero %d es igual a la suma de %d y %d", num2, num1, num3);
        ninguno = 1;}
    if (num3 == num2 + num1){
        printf("El numero %d es igual a la suma de %d y %d", num3, num2, num1);
        ninguno = 1;}
    if (ninguno == 0)
    printf("Ningun numero sumado a otro da igual al tercer numero");
    
    return(0);
}
