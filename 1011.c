/*
    autor: Virna Amaral
    data: 17/02/2023
    nome: Esfera
*/

#include <stdio.h>

int main(void){
    
    double VOLUME, R, p = 3.14159;
    scanf("%lf", &R);
    VOLUME = (4.0/3)*p*(R*R*R);
    printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}