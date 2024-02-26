/*
    autor: Virna Amaral
    data: 08/04/2023
    nome: Lista de Compras
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    getchar();

    for(int i=0;i<n;i++){
        char **lista = (char **)malloc(1000*sizeof(char *));
        
        for (int i = 0; i < 1000; i++) {
            lista[i] = (char *)malloc(21*sizeof(char));
        }
        
        
        int palavras=0;
        while(palavras<1000){
            scanf("%s", lista[palavras]);
            palavras++;
            if(getchar()=='\n'){
                break;
            }
        }

        
        for (int i = 0; i < palavras ; i++) {
            for (int k = 0; k < palavras - 1; k++) {
                if (strcmp(lista[k], lista[k + 1]) > 0) {
                    char temp[21];
                    
                    strcpy(temp, lista[k]);
                    strcpy(lista[k], lista[k + 1]);
                    strcpy(lista[k + 1], temp);
                }
            }
        }

        for (int a = 0; a < palavras; a++) {
            for (int b = a + 1; b < palavras; b++) {
                if (strcmp(lista[a], lista[b]) == 0) {
                    for (int k = b; k < palavras - 1; k++) {
                        strcpy(lista[k], lista[k + 1]);
                    }
                    palavras--;
                    b--;
                }
            }
        }
        for (int a = palavras; a < 1000; a++) {
            lista[a][0] = '\0';
        }

        
        for (int k = 0; k < palavras; k++) {
            if (lista[k][0] != '\0') {
                printf("%s", lista[k]);
                if (k < 1000 - 1 && lista[k+1][0] != '\0') {
                    printf(" ");
                }
            }
        }
        printf("\n");
        
        for(int a=0;a<1000;a++){
            free(lista[a]);
        }
        free(lista);
    }
    return 0;
}