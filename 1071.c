/*
    autor: Virna Amaral
    data: 28/02/2023
    nome: Soma de Impares Consecutivos I
*/

#include <stdio.h>

int main(){
    int X,Y,a,b,i,soma=0;
    scanf("%i %i", &X,&Y);
    if(X<Y){
        a=X;
        b=Y;

    }else{
        a=Y;
        b=X;
    }
    a++;
    for(i=a;i<b;i++){
        if(i%2!=0){
            soma = soma + i;
        }
    }
    printf("%i\n", soma);
    return 0;
}