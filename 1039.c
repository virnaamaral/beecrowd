/*
    autor: Virna Amaral
    data: 26/03/2023
    nome: Flores de Fogo
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    struct myStruct{
        int r1;
        int x1;
        int y1;
    };

    struct myStruct2{
        int r2;
        int x2;
        int y2;
    };

int main(){
    
    struct myStruct c1;
    c1.r1=0;
    c1.x1=0;
    c1.y1=0;
    struct myStruct2 c2;
    c2.r2=0;
    c2.x2=0;
    c2.y2=0;


    while(scanf("%d %d %d %d %d %d", &c1.r1, &c1.x1, &c1.y1, &c2.r2, &c2.x2, &c2.y2) != EOF){

        int a, b;
        float dist;
        a = abs(c1.x1-c2.x2);
        b = abs(c1.y1-c2.y2);
        dist = sqrt((a*a) + (b*b));

        if(c1.r1>=1 && c1.r1>=c2.r2+(dist)){
            printf("RICO\n");  

        }else if(c1.r1!=0){
            printf("MORTO\n");
        }    
    }

    return 0;
}