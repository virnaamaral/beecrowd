/*
    autor: Virna Amaral
    data: 25/02/2023
    nome: Idade em Dias
*/

#include <stdio.h>

int main(){
    int dias, meses = 0, anos = 0;
    scanf("%i", &dias);
    while(dias>=30){
        meses++;
        dias = dias - 30;
        if (dias==365){
            anos++;
            dias = dias - 365;
        }
        if (meses==12){
            anos++;
            meses = meses - 12;
            dias = dias - 5;
        }
    }
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
    return 0;
}