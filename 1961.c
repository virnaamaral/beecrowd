#include <stdio.h>

int main(){
    int P, N, i, c=0;
    scanf("%d %d", &P, &N);
    
    int M[N];
    for(i=0;i<N;i++){
        scanf("%d", &M[i]);
    }
    if(P<=5 && P>=1){
        if(N<=100 && N>=2){
            for(i=0;i<N;i++){
                if(M[i]<M[i+1]){
                    if(M[i+1]-M[i]<=P){
                        c++;
                    }
                }else if(M[i]>M[i+1]){
                    if(M[i]-M[i+1]<=P){
                        c++;
                    }
                }else if(M[i]==M[i+1]){
                    c++;
                }
            }
        }
    }

    if(c==N-1){
        printf("YOU WIN\n");
    }else{
        printf("GAME OVER\n");
    }
    return 0;
}