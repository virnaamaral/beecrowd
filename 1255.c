/*
    autor: Virna Amaral
    data: 21/03/2023
    nome: Frequência de Letras
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    int n;
    scanf("%d\n", &n);

    while(n!=0){
        int i = 0, f[26]={0};
        char ch, str[201], lwr_str[201];

        ch = getchar();
        while(ch!='\n'){
            str[i] = ch;
            i++;
            ch = getchar();
        }
        str[i] = '\0';//pega string por caracter

        int j = 0;
        while(str[j]!='\0'){
            if(isalpha(str[j])){
                lwr_str[j] = tolower(str[j]);
                j++;
            }else{
                lwr_str[j] = ' ';
                j++;
            }
        }//transforma em minúscula
        lwr_str[j] = '\0';

        int len = strlen(lwr_str);

        
        for(int k=0;k<len;k++){
            f[lwr_str[k]-'a']++;
        }

        int maior = 0;
        for(int k=0;k<26;k++){
            if(maior<f[k]){
                maior = f[k];
            }
        }

        for(int k=0;k<26;k++){
            if(f[k] == maior){
                printf("%c", k + 'a');
            }
        }
        printf("\n");
        n--;
    }

    return 0;
}