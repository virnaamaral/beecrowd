#include <stdio.h>
#include <math.h>

int r(int x, int y){
    int r_r = (pow((3*x),2))+pow(y,2);
    return r_r;
}

int b(int x, int y){
    int r_b = 2*(pow(x,2)) + (pow((5*y),2));
    return r_b;
}

int c(int x, int y){
    int r_c = -100*x + pow(y,3);
    return r_c;
}

int main(){
    int n, i, x, y, r_r, r_b, r_c;
    scanf("%d", &n);
    
    for(i=0;i<n;i++){
        scanf("%d %d", &x, &y);
        if((1<=x && x<=100) && (1<=y && y<=100)){

            r_r = r(x, y);
            r_b = b(x, y);
            r_c = c(x, y);

            if(r_r>r_b && r_r>r_c){
                printf("Rafael ganhou\n");
            }else if(r_b>r_r && r_b>r_c){
                printf("Beto ganhou\n");
            }else if(r_c>r_r && r_c>r_b){
                printf("Carlos ganhou\n");
            }
            x = 0;
            y = 0;
        }
    }
    return 0;
}