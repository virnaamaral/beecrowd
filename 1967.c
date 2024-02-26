/*
    autor: Virna Amaral
    data: 06/03/2023
    nome: A Fronteira Final
*/

#include <stdio.h>

int main(){
    int i, j, k, l=0, n, o=0, maior=-1000000, G, A, M, C;
    scanf("%d %d %d %d", &G, &A, &M, &C);
    
    int M1[G][A], M2[A][M], M3[M][C], MR1_2[G][M], MR1_2_3[G][C], maior_[C], maior_len[C];

    for(i=0;i<G;i++){
        for(j=0;j<A;j++){
            scanf("%d", &M1[i][j]);
        }
    }

    for(i=0;i<A;i++){
        for(j=0;j<M;j++){
            scanf("%d", &M2[i][j]);
        }
    }

    for(i=0;i<M;i++){
        for(j=0;j<C;j++){
            scanf("%d", &M3[i][j]);
        }
    }

    for(i=0;i<G;i++){
        for(j=0;j<M;j++){
            MR1_2[i][j] = 0;
            for(k=0;k<A;k++){
                l += M1[i][k] * M2[k][j];
            }
            MR1_2[i][j]=l;
            l=0;
        }
    }

    for(i=0;i<G;i++){
        for(j=0;j<C;j++){
            MR1_2_3[i][j] = 0;
            for(k=0;k<M;k++){
                l += MR1_2[i][k] * M3[k][j];
            }
            MR1_2_3[i][j]=l;
            l=0;
        }
    }

    for(j=0;j<C;j++){
        for(i=0;i<G;i++){
            if(MR1_2_3[i][j]>maior){
                maior = MR1_2_3[i][j];
            }
        }
        maior_[j] = maior;
        maior = 0;
    }

    for(j=0;j<C;j++){
        n = maior_[j];
        while(n!=0){
            n/=10;
            o++;
        }
        maior_len[j]=o;
        o=0;
    }
    
    for(i=0;i<G;i++){
        for(j=0;j<C;j++){
            if(j<C-1){
                printf("%*d ", maior_len[j], MR1_2_3[i][j]);
            }else{
                printf("%*d\n", maior_len[j], MR1_2_3[i][j]);
            }
        }
    }

    return 0;
}