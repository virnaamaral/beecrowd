#include <stdio.h>

int main(void){
    int hours, NUMBER;
    float SALARY, mph;
    scanf("%i", &NUMBER);
    scanf("%i", &hours);
    scanf("%f", &mph);
    SALARY = hours*mph;
    printf("NUMBER = %i\n", NUMBER);
    printf("SALARY = U$ %.2f\n", SALARY);
    return 0;
}