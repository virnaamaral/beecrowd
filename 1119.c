/*
    autor: Virna Amaral
    data: 08/10/2023
    nome: A Fila de Desempregados
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    struct node *next;
    int pessoa;
    struct node *prev;
}node;

void insert(node **head, node **tail, int pessoa);
void remove_person(node **head, node **tail, int pessoa);

int main(){

    node *head = NULL, *tail = NULL;
    int est, mov_h, mov_antih;

    while(1){
        scanf("%d %d %d", &est, &mov_antih, &mov_h);
        fflush(stdin);
        if(est == 0 && mov_h == 0 && mov_antih == 0){
            break;
        }

        for(int i = est; i > 0; i--){
            insert(&head, &tail, i);
        }

        int del_est_head, del_est_tail;
        node *temp_h = head;
        node *temp_antih = tail;

        int reps = est;

        while(reps != 0){
            
            for(int i = 1; i < mov_h; i++){
                temp_h = temp_h->next;
            }

            for(int i = 1; i < mov_antih; i++){
                temp_antih = temp_antih->prev;
            }

            del_est_head = temp_h->pessoa;
            del_est_tail = temp_antih->pessoa;

            temp_h = temp_h->next;
            temp_antih = temp_antih->prev;

            if(del_est_head == temp_antih->pessoa){
                temp_antih = temp_antih->prev;
            }
            
            if(del_est_tail == temp_h->pessoa){
                temp_h = temp_h->next;
            }
            
            if(del_est_head == del_est_tail){
                printf("%3d", del_est_head);
                remove_person(&head, &tail, del_est_head);
                if(reps > 1){
                    printf(",");
                }
                reps--;
            }else{
                printf("%3d%3d", del_est_tail, del_est_head);
                remove_person(&head, &tail, del_est_head);
                remove_person(&head, &tail, del_est_tail);
                if(reps > 2){
                    printf(",");
                }
                reps-=2;
            }
        }
        printf("\n");
    }

    return 0;
}

void remove_person(node **head, node **tail, int pessoa){
    node *temp = *head;

    if(head == NULL && tail == NULL){
        printf("lista vazia\n");
        return;
    }

    if(*head == *tail){
        *head = NULL;
        *tail = NULL;
    }else{
        while(temp->pessoa != pessoa){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        if(temp == (*head)){ // se for remover a (*head)), muda ela pro prox
            (*head) = (*head)->next;
        }else if(temp == (*tail)){ // se for remover a (*tail), transforma ela no prox
            (*tail) = (*tail)->prev;
        }
    }
    free(temp);
}

void insert(node **head, node **tail, int pessoa){
    node *new = (node *)malloc(sizeof(node));

    if(new == NULL){
        printf("Erro ao alocar memória para o novo nó\n");
        return;
    }

    new->pessoa = pessoa;

    if((*head) == NULL){
        *head = new;
        *tail = new;
        new->prev = *head;
        new->next = *head;
    }else{
        new->next = *head; // o prox de novo vai apontar pra o valor da head
        (*head)->prev = new; // o anterior de head vai ser o new
        new->prev = *tail; // o anterior de gb
        (*tail)->next = new;
        *tail = new;
    }
}