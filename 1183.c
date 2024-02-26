/*
    autor: Virna Amaral
    data: 04/03/2023
    nome: Acima da Diagonial Principal
*/

#include <stdio.h>

int main(){
    int i, j, k=0;
    char O;
    float M[12][12], D[66], soma = 0, media = 0;

    scanf("%c", &O);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &M[i][j]);
        }
    }

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(i<j){
                D[k]=M[i][j];
                k++;
            }
        }
    }
    
    for(i=0;i<k;i++){
        soma = soma + D[i];
    }
    if(O=='S'||O=='s'){
        printf("\n%.1f", soma);
    }else if(O=='M'||O=='m'){
        media = soma/k;
        printf("\n%.1f", media);
    }
    
    return 0;
}