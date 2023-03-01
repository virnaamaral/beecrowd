#include <stdio.h>

int main(void){
    int X;
    float Y, km_l;
    scanf("%i", &X);
    scanf("%f", &Y);
    km_l = X/Y;
    printf("%.3f ", km_l);
    printf("km/l\n");
    return 0;
}