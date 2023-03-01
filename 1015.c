// #include <stdio.h>
// #include <math.h>

// int main(void){
//     double x1, x2, y1, y2, p1, p2, distance, result;
//     scanf("%lf %lf", &x1, &y1);
//     scanf("%lf %lf", &x2, &y2);
//     p1 = x2-x1;
//     p2 = y2-y1;
//     distance = pow(p1, 2) + pow(p2, 2);
//     result = sqrt(distance);
//     printf("%.4lf\n", result);
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main(void){
    double x1, x2, y1, y2, distance, p1, p2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    p1 = x2-x1;
    p2 = y2-y1;
    distance = sqrt(pow(p1, 2) + pow(p2, 2));
    printf("%.4lf", distance);
    return 0;
}