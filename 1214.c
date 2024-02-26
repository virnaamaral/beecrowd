/*
    autor: Virna Amaral
    data: 10/03/2023
    nome: Acima da Média
*/

#include <stdio.h>

float med(int n, int vet_n[n]);

int main(){
    int c, n, i, j;

    scanf("%d", &c);
    for(i=0;i<c;i++){
        
        scanf("%d", &n);
        int vet_n[n];

        for(j=0;j<n;j++){
            scanf("%d", &vet_n[j]);
            if(j==n-1){
                printf("%.3f%%\n", med(n, vet_n));
            }
        }
    }
    
    return 0;
}

float med(int n, int vet_n[n]){
    float soma=0, media, count=0;

    for(int i=0;i<n;i++){
        soma += vet_n[i];
    }

    media = soma/n;

    for(int i=0;i<n;i++){
        if(vet_n[i]>media){
            count++;
        }
    }

    float media_final = (count*100.0)/n;

    count = 0;
    media = 0; 
    return media_final;
}