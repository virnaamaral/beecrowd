#include <stdio.h>

int main(){
    int X,Y,a,b,i,soma;
    scanf("%i %i", &X,&Y);
    if(X<Y){
        a=X;
        b=Y;

    }else{
        a=Y;
        b=X;
    }
    for(i=a;i<b;i++){
        if(i%2!=0){
            soma = soma + i;
        }
    }
    printf("%i\n", soma);
    return 0;
}