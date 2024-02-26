/*
    autor: Virna Amaral
    data: 03/10/2023
    nome: PãodeQuejoSwepper
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;

    while(scanf("%d %d", &n, &m)!=EOF){
        int l, c;

        int **matrix = (int **)malloc(n*sizeof(int *));//alocar espaço pra cada linha

        for(int i=0;i<n;i++){
            matrix[i] = (int*)malloc(m*sizeof(int));//alocar espaço pra cada coluna a partir do primeiro espaco da linha
        }

        for(l=0;l<n;l++){
            for(c=0;c<m;c++){
                scanf("%d", &matrix[l][c]);
                if(matrix[l][c]==1){
                    matrix[l][c]=9;
                }else{
                    matrix[l][c]=0;
                }//troca valores da matriz para 0 e 9, caso haja diferente
            }
        }
        for(l=0;l<n;l++){
            for(c=0;c<m;c++){    
                int *ptr = &matrix[l][c];

                if(*ptr == 9){
                    continue;
                }
                if (l > 0) { 
                    int *ptr_cima = *(matrix + l - 1) + c;
                     if(*ptr_cima == 9){
                        matrix[l][c]++;
                    }
                }

                if (c > 0) {
                    int *ptr_esq = ptr - 1;
                    if(*ptr_esq == 9){
                        matrix[l][c]++;
                    }
                }

                if (l < n - 1) { 
                    int *ptr_baixo = *(matrix + l + 1) + c;
                    if(*ptr_baixo == 9){
                        matrix[l][c]++;
                    }
                }

                if (c < m - 1) {
                    int *ptr_dir = ptr + 1;
                    if(*ptr_dir == 9){
                        matrix[l][c]++;
                    }
                }
            }  
        }        

        for(l=0;l<n;l++){
            for(c=0;c<m;c++){
                printf("%d", matrix[l][c]);
            }
            printf("\n");
        }

        for(int i=0;i<n;i++){
            free(matrix[i]);
        }
        free(matrix);
    }

    return 0;
}