/*
    autor: Virna Amaral
    data: 15/02/2023
    nome: Média 1
*/

#include <stdio.h>

int main(void){
    float A,B, a = 3.5, b = 7.5, MEDIA;
    scanf("%f", &A);
    scanf("%f", &B);
    MEDIA = (A*a + B*b)/11;
    printf("MEDIA = %.5f\n", MEDIA);
    return 0;
}