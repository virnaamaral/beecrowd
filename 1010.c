/*
    autor: Virna Amaral
    data: 17/02/2023
    nome: Cálculo Simples
*/

#include <stdio.h>

int main(void){
    int c1, c2, u1, u2; 
    float p1, p2, a;
    scanf("%i %i %f", &c1, &u1, &p1);
    scanf("%i %i %f", &c2, &u2, &p2);
    a = (u1*p1) + (u2*p2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", a);
    return 0;
}