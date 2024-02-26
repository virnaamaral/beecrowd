/*
    autor: Virna Amaral
    data: 28/02/2023
    nome: Cédulas
*/


#include <stdio.h>

int main(){
    int n, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h;
    scanf("%i", &n);
    h = n;

    while(n>0){
        if(n>=100){
            n=n-100;
            a++;
        }else if(n>=50){
            n=n-50;
            b++;
        }else if(n>=20){
            n=n-20;
            c++;
        }else if(n>=10){
            n=n-10;
            d++;
        }else if(n>=5){
            n=n-5;
            e++;
        }else if(n>=2){
            n=n-2;
            f++;
        }else{
            n = n -1;
            g++;
        }
    }
    printf("%i\n", h);
    printf("%i nota(s) de R$ 100,00\n", a);
    printf("%i nota(s) de R$ 50,00\n", b);
    printf("%i nota(s) de R$ 20,00\n", c);
    printf("%i nota(s) de R$ 10,00\n", d);
    printf("%i nota(s) de R$ 5,00\n", e);
    printf("%i nota(s) de R$ 2,00\n", f);
    printf("%i nota(s) de R$ 1,00\n", g);
    return 0;
}