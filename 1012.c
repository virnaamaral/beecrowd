#include <stdio.h>

int main(void){

    double A, B, C, a_tri, a_cir, a_tra, a_q, a_r, p = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    a_tri = (A*C)/2;
    a_cir = C*C*p;
    a_tra = ((A+B)*C)/2;
    a_q = B*B;
    a_r = A*B;
    printf("TRIANGULO: %.3lf\n", a_tri);
    printf("CIRCULO: %.3lf\n", a_cir);
    printf("TRAPEZIO: %.3lf\n", a_tra);
    printf("QUADRADO: %.3lf\n", a_q);
    printf("RETANGULO: %.3lf\n", a_r);

    return 0;
}