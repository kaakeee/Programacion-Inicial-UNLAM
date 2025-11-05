//
//  5.1.2.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 03/09/2025.
/* 5.1.2 Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se digite un ‘*’. Se desea obtener e informar cuantos caracteres ingresados son numéricos y cuantos alfabéticos. Estos últimos tienen que mostrarse separados por mayúsculas y minúsculas. También informar la cantidad de otros símbolos que no sean ni letras ni números. */
#include <stdio.h>
#include <ctype.h>

int main()
{
    int suma_caracter = 0, suma_numero = 0, suma_caracter_slower = 0, suma_caracter_upper = 0, suma_no = 0;
    char caracter, corte;
    puts(" ");
    puts("El sistema informara de los caracteres ingresados hasta que se ingrese un *");
    
    while (caracter != '*')
    {
        printf("\nIngrese el caracter: ");
        //fflux(stdin); se encuentra indefinido en el estandar de clang, por lo que no funciona.
        scanf(" %c", &caracter);
        
        if (isalpha(caracter))
        {
            suma_caracter++;
        } if (isupper(caracter))
        {
            suma_caracter_upper++;
        } else if (islower(caracter))
        {
            suma_caracter_slower++;
        } else if (isdigit(caracter))
        {
            suma_numero++;
        } else
        {
            suma_no++;
        }
        
    }
    
    printf("\nLa suma de caracteres es: %d", suma_caracter);
    printf("\nLa suma de numeros es: %d", suma_numero);
    printf("\nLa suma de caracteres minusculas es: %d", suma_caracter_slower);
    printf("\nLa suma de caracteres mayusculas es: %d", suma_caracter_upper);
    printf("\nLa suma de NO caracteres y NO numeros es: %d", suma_no); // va a dar 1 ya que cuenta "*"
    puts(" "); //se agrega para que no quede el simbolo % al terminar el programa
    
    return(0);
}
