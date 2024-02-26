/*
    autor: Virna Amaral
    data: 15/02/2023
    nome: Salário com Bônus
*/

#include <stdio.h>

int main(void){
    char name[15];
    double salary, total_made, bonus = 0.15, TOTAL;
    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &total_made);
    TOTAL = (total_made*bonus)+salary;
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}