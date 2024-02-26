/*
    autor: Virna Amaral
    data: 25/05/2023
    nome: Fórmula de Bhaskara
*/

#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, delta, sqrt_delta, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);
    delta = (B*B)-(4*A*C);
    if(delta<0||A==0){
        printf("Impossivel calcular\n");
    }else{
        sqrt_delta = sqrt(delta);
        R1 = ((B*-1) + sqrt_delta)/(2*A);
        R2 = ((B*-1) - sqrt_delta)/(2*A);
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    return 0;
}