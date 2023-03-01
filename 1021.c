#include <stdio.h>

int main(){
    int a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0;
    float n;
    scanf("%f", &n);

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
        }else if(n>=1){
            n=n-1;
            g++;
        }else if(n>=0.5){
            n=n-0.5;
            h++;
        }else if(n>=0.25){
            n=n-0.25;
            i++;
        }else if(n>=0.1){
            n=n-0.1;
            j++;
        }else if(n>=0.05){
            n=n-0.05;
            k++;
        }else{
            n=n-0.01;
            l++;
        }
    }
    printf("%f\n", n);
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", a);
    printf("%i nota(s) de R$ 50.00\n", b);
    printf("%i nota(s) de R$ 20.00\n", c);
    printf("%i nota(s) de R$ 10.00\n", d);
    printf("%i nota(s) de R$ 5.00\n", e);
    printf("%i nota(s) de R$ 2.00\n", f);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", g);
    printf("%i moeda(s) de R$ 0.50\n", h);
    printf("%i moeda(s) de R$ 0.25\n", i);
    printf("%i moeda(s) de R$ 0.10\n", j);
    printf("%i moeda(s) de R$ 0.05\n", k);
    printf("%i moeda(s) de R$ 0.01\n", l);
    return 0;
}