/*
    autor: Virna Amaral
    data: 07/03/2023
    nome: O Maior
*/

#include <stdio.h>

int maior_f(int a, int b){
    int maior = ((a+b+abs(a-b))/2);
    return maior;
}

int main(){
    int a, b, c, maiorAB, maiorABC;
    scanf("%d %d %d", &a, &b, &c);

    maiorAB = maior_f(a, b);
    maiorABC = maior_f(maiorAB, c);

    printf("%d eh o maior\n", maiorABC);

    return 0;
}