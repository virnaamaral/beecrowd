#include <stdio.h>

int main(){
    int N, hours = 0, minutes = 0;
    scanf("%i", &N);
    while(N>=60){
        minutes++;
        N = N - 60;
        if (minutes==60){
            hours++;
            minutes = minutes - 60;
        }
    }
    printf("%i:%i:%i\n", hours, minutes, N);
    return 0;
}