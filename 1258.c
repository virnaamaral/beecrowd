/*
    autor: Virna Amaral
    data: 31/03/2023
    nome: Camisetas
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct camisas{
    char nome[200];
    char cor[20];
    char tamanho[5];
};

void ordem_alfabetica(struct camisas *c, int j);
void ordem_cor_tam(struct camisas *c, int j);

int main(){
    int n = -1, m, cont = 0;
    
    for(;;){//como nao possui condicao, ele assume como "verdadeiro" sempre, rodando infinitamente
        
        if(n==0){
            break;
        }

        scanf("%d", &n);
        if(cont>0 && n!=0){
            printf("\n");
        }
        getchar();

        m = n;
        int i = 0;
        
        struct camisas *c;
        c = (struct camisas *)malloc(n*sizeof(struct camisas));
        
        while(m>0){
            char nome[200], cor[20], tamanho[5], ch;
            int j = 0;
            
            ch = getchar();
            memset(nome, '\0', sizeof(nome));
            while(ch!='\n'){
                nome[j] = ch;
                j++;
                ch = getchar();
            }
            nome[j] = '\0';

            scanf("%s %s", cor, tamanho);
            getchar();

            strncpy(c[i].cor, cor, sizeof(cor));
            strncpy(c[i].tamanho, tamanho, sizeof(tamanho));
            strncpy(c[i].nome, nome, sizeof(nome));
            
            i++;
            m--;

        }

        ordem_alfabetica(c, n);
        ordem_cor_tam(c, n);

        
        for(int k=0;k<n;k++){
            printf("%s %s %s\n", c[k].cor, c[k].tamanho, c[k].nome);
        }
        free(c);
        cont++;
    }
    
    return 0;
}

void ordem_alfabetica(struct camisas *c, int j){
    int k, l;
    for(k=0;k<j-1;k++){
        for(l=0;l<j-1;l++){
            if(strcmp(c[l].nome, c[l+1].nome)>0){//ordena nome em alfabetica
                char s[200];

                strcpy(s, c[l].nome);
                strcpy(c[l].nome, c[l+1].nome);
                strcpy(c[l+1].nome, s);

                strcpy(s, c[l].cor);
                strcpy(c[l].cor, c[l+1].cor);
                strcpy(c[l+1].cor, s);
                
                strcpy(s, c[l].tamanho);
                strcpy(c[l].tamanho, c[l+1].tamanho);
                strcpy(c[l+1].tamanho, s);

            }
        }
    }
}

void ordem_cor_tam(struct camisas *c, int j){
    int k, l;
    for(k=0;k<j-1;k++){
        for(l=0;l<j-1;l++){
            if(strcmp(c[l].cor, c[l+1].cor)>0){//ordena por cor
                char s[200];

                strcpy(s, c[l].nome);
                strcpy(c[l].nome, c[l+1].nome);
                strcpy(c[l+1].nome, s);

                strcpy(s, c[l].cor);
                strcpy(c[l].cor, c[l+1].cor);
                strcpy(c[l+1].cor, s);
                
                strcpy(s, c[l].tamanho);
                strcpy(c[l].tamanho, c[l+1].tamanho);
                strcpy(c[l+1].tamanho, s);
            }
        }
    }

    for(k=0;k<j-1;k++){
        for(l=0;l<j-1;l++){
            if(strcmp(c[l].tamanho, c[l+1].tamanho)<0 && strcmp(c[l].cor, c[l+1].cor)==0){//ordena por tam e cor igual
                char s[200];

                strcpy(s, c[l].nome);
                strcpy(c[l].nome, c[l+1].nome);
                strcpy(c[l+1].nome, s);

                strcpy(s, c[l].cor);
                strcpy(c[l].cor, c[l+1].cor);
                strcpy(c[l+1].cor, s);
                
                strcpy(s, c[l].tamanho);
                strcpy(c[l].tamanho, c[l+1].tamanho);
                strcpy(c[l+1].tamanho, s);
            }
        }
    }
}