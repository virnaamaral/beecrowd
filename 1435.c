/*
    autor: Virna Amaral
    data: 07/03/2023
    nome: Matriz Quadrada I
*/

#include <stdio.h>

int main(){
    int N;

    while(N!=0){
        int i, j, k;
        scanf("%d", &N); 
        int matrix[N][N];

        if(0<=N && N<=100){
            for(k=1;k<=(N+1)/2;k++){
                for(i=k-1;i<N-k+1;i++){
                    for(j=k-1;j<N-k+1;j++){
                        matrix[i][j] = k;
                    }
                }
            }
        }

        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                printf("%3d", matrix[i][j]);
                if(j != N-1) {
                    printf(" ");
                }
            }
            printf("\n");
        }
        if(N != 0) {
            printf("\n");
        }
    } 
    return 0;
}