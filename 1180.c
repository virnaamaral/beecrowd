/*
    autor: Virna Amaral
    data: 28/02/2023
    nome: Menor e Posição
*/

#include <stdio.h>

int main(){
    int N, i, menor_valor=10000000, p;
    scanf("%d", &N);
    int X[N];
    
    for(i=0;i<N;i++){
        scanf("%d", &X[i]);
    }
    for(i=0;i<N;i++){
        if(X[i]<menor_valor){
        menor_valor = X[i];
        p = i;
        }
    }
    printf("Menor valor: %d\n", menor_valor);
    printf("Posicao: %d\n", p);
    return 0;
}