/*
    autor: Virna Amaral
    data: 15/02/2023
    nome: Média 2
*/

#include <stdio.h>

int main(void){
    float A, a=2, B, b=3, C, c=5, MEDIA;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    MEDIA = (A*a + B*b + C*c)/10;
    printf("MEDIA = %.1f\n", MEDIA);
    return 0;
}