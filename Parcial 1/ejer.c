//
//  ejer.c
//  
//
//  Created by Ramiro Nehuen Sanabria on 01/10/2025.
//
#include <stdio.h>

int main () {
    int Z=0, V, B, R, S=0, C=0;
    
    scanf("%d", &V);
    scanf("%d", &B);
    while (B!=0 && V!=0)
    {   R=V%3;
        if(R!=0){
            S+=V;
            C++;
        }
        else
            if (B%7==0)
                printf("\n3 y 7\n");
            else
            {   printf("\n3 \n");
                Z++;
            }
        scanf("%d", &V);
        scanf("%d", &B);
    }
    if(C!=0)
        printf("\n%2.f\n", (float)S/C);
    printf("\n%d\n", Z);
    return 0;
}
