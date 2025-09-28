//
//  4.6.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
// Confeccionar un programa que permita ingresar un carácter alfanumérico y determine e informe si lo ingresado corresponde a una vocal, con el mensaje “VOCAL” y su correspondiente valor numérico en ASCII //

#include <stdio.h>

int main () {
    
    char valor;
    
    puts("El programa validara si el caracter alfanumerico es una vocal y su valor ASCII");
    printf("\nIngrese el valor: ");
    scanf("%c", &valor);
    
    if (valor == 'a' || valor == 'A' || valor == 'E' || valor == 'e' || valor == 'I' || valor == 'i' || valor == 'o' || valor == 'O' || valor == 'U' || valor == 'u')
    {
        printf("\nEl valor %c es una vocal y su codigo ASCII es %d", valor, valor);
    }
    else
    {
        printf("\nEl valor %c no es una vocal y su codigo ASCII es %d", valor, valor);
    }

    return(0);
}
