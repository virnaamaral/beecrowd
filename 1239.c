/*
    autor: Virna Amaral
    data: 22/03/2023
    nome: Atalhos Bloggo
*/

#include <stdio.h>
#include <string.h>

char new_string(char frase[50]);

int main(){
    char ch, frase[50];
    while((ch=getchar())!=EOF){
        int i=0;
        
        memset(frase, 0, 50);
        while(ch!='\n'){
            frase[i] = ch;
            i++;
            ch = getchar();
        }
        new_string(frase);
    }
}

char new_string(char frase[50]){
    int j=0, k=0;
    char c;
    
    int len = strlen(frase);

    for(int p=0;p<len;p++){
        c = frase[p];
        if(c=='*'){
            if(j==0){
                printf("<b>");
                j++;
            }else if(j==1){
                printf("</b>");
                j--;
            }

        }else if(c=='_'){
            if(k==0){
                printf("<i>");
                k++;                    
            }else if(k==1){
                printf("</i>");
                k--;
            }
        }else{
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
} 