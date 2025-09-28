//
//  2.12.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 31/08/2025.
//

/* Confeccionar un programa que solicite el ingreso de un número entero positivo de 4 cifras y pueda calcular e informar la suma de sus dígitos hasta llegar a una sola cifra. Ejemplo: 9929 → 2 */
#include <stdio.h>

int main ()

{
    int numero, numero_a, numero_b, numero_c, numero_d, suma, resultado, resultado_final;
    
    puts("El sistema sumara la cantidad de digitos hasta llegar a una sola cifra");
    printf("\nIntroducir un numero entero positivo de 4 cifras\n:");
    scanf("%d", &numero);
    
    //proceso logico, se comento y se usa el proceso "digito raiz" el cual es mas eficiente, incluso puede ser mas de 4 digitos.//
    /*
    //descomponemos el numero entero //
    numero_a = numero / 1000;        //devuelve el primer digito X... //
    numero_b = (numero / 100) % 10;  //devuelve el segundo digito .X..//
    numero_c = (numero / 10) % 10;   //devuelve el tercer digito ..X. //
    numero_d = numero % 10;           //devuelve el cuarto digito ...X //
    
    //sumamos digitos //
    
    suma = numero_a + numero_b + numero_c + numero_d; // el minimo es 1 y el maximo 36//
    
    resultado = (suma / 10) + (suma % 10); //descomponemos en decena y unidad nuevamente, sumamos todo, si es 10 o mayor necesitamos descomponer otra vez.//
    
    resultado_final = (resultado / 10) + (resultado % 10); //descomponemos otra vez en el caso de ser necesario >=10//
    */
    
    resultado_final = 1 + ((numero - 1) % 9);
    
    printf("\nEl resultado de sumar todos los digitos y llegar a una cifra es de: %d\n", resultado_final);
    
    return(0);
}
