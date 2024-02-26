/*
    autor: Virna Amaral
    data: 16/02/2023
    nome: Lanche
*/

#include <stdio.h>

int main(void){
    int X, Y;
    float price, final_price;
    scanf("%i %i", &X, &Y);
    if (X==1){
        price = 4.00;
        final_price = price * Y;
        printf("Total: R$ %.2f\n", final_price);
    }else if (X==2){
        price = 4.50;
        final_price = price * Y;
        printf("Total: R$ %.2f\n", final_price);
    }else if (X==3){
        price = 5.00;
        final_price = price * Y;
        printf("Total: R$ %.2f\n", final_price);
    }else if (X==4){
        price = 2.00;
        final_price = price * Y;
        printf("Total: R$ %.2f\n", final_price);
    }else if (X==5){
        price = 1.50;
        final_price = price * Y;
        printf("Total: R$ %.2f\n", final_price);
    }
    
    return 0;
}