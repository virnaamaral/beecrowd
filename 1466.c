/*
    autor: Virna Amaral
    data: 03/12/2023
    nome: Percuso em Árvore por Nível
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node *esq;
    struct node *dir;
    int valor;
}node;

void inserir(node **arv, int n);
void imprimir(node *arv, int nivel);
void limpar_arvore(node **arv);

int main(){
    int c;
    scanf("%d", &c);

    if(c <= 1000){
        for (int k = 0; k < c; k++){
            int n, var;

            node *arv = NULL;
            scanf("%d", &n);
            if(n >= 1 && n <= 500){
                int i = 0;
                while(i < n){
                    scanf("%d", &var);
                    inserir(&arv, var);
                    i++;
                }
                i = 0;
                int nivel = k+1;
                printf("Case %d:\n", nivel);
                
                while(i < n){
                    if (i == 0) {
                        printf("%d", arv->valor);
                    } else {
                        imprimir(arv, i);
                    }
                    i++;
                }
                printf("\n\n");
                limpar_arvore(&arv);
            }
        }
    }
    return 0;
}

void inserir(node **arv, int n){
    if(*arv == NULL){
        *arv = (node *)malloc(sizeof(node));
        if(*arv == NULL){
            return;
        }

        (*arv)->esq = NULL;
        (*arv)->dir = NULL;
        (*arv)->valor = n;
    }else{
        if(n < (*arv)->valor){
            inserir(&(*arv)->esq, n);
        }
        if(n > (*arv)->valor){
            inserir(&(*arv)->dir, n);
        }
    }
}

void imprimir(node *arv, int nivel){
    if(arv != NULL){
        if(nivel == 0){
            printf(" %d", arv->valor);
        }else{
            imprimir(arv->esq, nivel-1);
            imprimir(arv->dir, nivel-1);
        }
    }
}   


void limpar_arvore(node **arv){
    if(*arv != NULL){
        limpar_arvore(&(*arv)->esq);
        limpar_arvore(&(*arv)->dir);
        free(*arv);
        *arv = NULL;
  }
}