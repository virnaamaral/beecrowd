/*
    autor: Virna Amaral
    data: 15/02/2023
    nome: Área do Circulo
*/

#include <stdio.h>

int main(void){
    double A, R, n = 3.14159;
    scanf("%lf", &R);
    A = n*R*R;
    printf("A=%.4lf\n", A);
    return 0;
}