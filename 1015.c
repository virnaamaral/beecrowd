/*
    autor: Virna Amaral
    data: 20/02/2023
    nome: Distância Entre Dois Pontos
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double x1, x2, y1, y2, distance, p1, p2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    p1 = x2-x1;
    p2 = y2-y1;
    distance = sqrt(pow(p1, 2) + pow(p2, 2));
    printf("%.4lf\n", distance);
    return 0;
}