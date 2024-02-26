/*
    autor: Virna Amaral
    data: 22/02/2023
    nome: Gasto de Combustível
*/

#include <stdio.h>

int main(void){
    int time, speed;
    float distance, fuel;
    scanf("%i", &time);
    scanf("%i", &speed);
    distance = speed*time;
    fuel = distance/12;
    printf("%.3f\n", fuel);
    return 0;
}