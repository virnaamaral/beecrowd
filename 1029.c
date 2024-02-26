/*
    autor: Virna Amaral
    data: 25/05/2023
    nome: Fibonacci, Quantas Chamadas?
*/

#include <stdio.h>

int count;

int fibonacci(int x);

int main(void){
    int x, n, r;
    
    scanf("%d", &n);
    while(n>0){
        count=-1;
        scanf("%d", &x);
        r = fibonacci(x);
        printf("fib(%d) = %d calls = %d\n", x, count, r);
        
        n--;
    }
    return 0;
}

int fibonacci(int x){
    int result;
    if(x==0){
        count++;
        return 0;
    }else if(x==1){
        count++;
        return 1;
    }else{
        count++;
        result = fibonacci(x-1) + fibonacci(x-2);
        return result;  
    }
}