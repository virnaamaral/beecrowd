/*
    autor: Virna Amaral
    data: 20/02/2023
    nome: Criptografia
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d\n", &n);

    while(n!=0){
        int j=0;
        char ch, str[1000], p1[1000], p2[1000], p3[1000];
        
        ch = getchar();
        while(ch!='\n'){
            str[j] = ch;
            j++;
            ch = getchar();
        }
        str[j] = '\0';
        p1[j] = '\0';
        p2[j] = '\0';
        p3[j] = '\0';

        int i = 0;
        while(str[i]!='\0'){
            if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){
                p1[i]=str[i]+3;
            }else{
                p1[i]=str[i];
            }
            i++;
        }

        int len_p1 = strlen(p1)-1;
        
        i = 0;
        while(str[i]!='\0'){
            p2[i]=p1[len_p1-i];
            i++;
        }

        i = 0;
        while(str[i]!='\0'){
            if(len_p1%2==0){
                if(i<(len_p1)/2){
                    p3[i]=p2[i];
                i++;
                }else{
                    p3[i]=p2[i]-1;
                    i++;
                }
            }else{
                if(i<=(len_p1)/2){
                    p3[i]=p2[i];
                i++;
                }else{
                    p3[i]=p2[i]-1;
                    i++;
                }
            }
        }

        printf("%s\n", p3);        
        n--;
    }

    return 0;
}