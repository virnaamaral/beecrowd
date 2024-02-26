/*
    autor: Virna Amaral
    data: 15/03/2023
    nome: Conversa Internacional
*/

#include <stdio.h>
#include <string.h>

int main(){
    int n, k = 0, c = 0, l = 0;
    char s1[20], s2[20];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d", &k);

        l = k;

        if(2<=k && k<=100){
            while(l!=0){
                scanf("%s", s1);
                int comp_r = strcmp(s1, s2);
                strcpy(s2, s1);
            
                if(comp_r!=0){
                    c++;
                }
                l--;
            }

            if(c>1){
                printf("ingles\n");
                c = 0;
            }else{
                printf("%s\n", s2);
                c = 0;
            }

        }else{
            break;
        }
    }

    return 0;
}