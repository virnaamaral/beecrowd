/*
    autor: Virna Amaral
    data: 15/02/2023
    nome: Diferença
*/

#include <stdio.h>

int main(void){
    int A, B, C, D, DIFERENCA;
    scanf("%i %i %i %i", &A, &B, &C, &D);
    DIFERENCA = (A*B)-(C*D);
    printf("DIFERENCA = %i\n", DIFERENCA);
    return 0;
}