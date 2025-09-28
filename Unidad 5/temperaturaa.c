//
//  temperaturaa.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 24/09/2025.
//
#include <stdio.h>

int main (){
    int num1, num2, a, b, temp;
    
    
    printf("\nIngrese el primer numero: ");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero: ");
    scanf("%d", &num2);
    
    a = num1;
    b = num2;
    
    while (b != 0) {
        temp = b; // temp 2
        b = a % b; // b 0.5
        a = temp;
    }
    
    printf("\nEl maximo comun divisor: %d", a);
    return(0);
}
