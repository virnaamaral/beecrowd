/*
    autor: Virna Amaral
    data: 25/02/2023
    nome: Teste de Seleção 1
*/

#include <stdio.h>

int main(){
    int A, B, C, D;
    scanf("%i %i %i %i", &A, &B, &C, &D);
    if(B>C && D>A){
        if(C+D>A+B){
            if(C>0 && D>0){
                if(A%2==0){
                    printf("Valores aceitos\n");
                }else{
                    printf("Valores nao aceitos\n");
                }
            }else{
                printf("Valores nao aceitos\n");
            }
        }else{
            printf("Valores nao aceitos\n");
        }
    }else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}