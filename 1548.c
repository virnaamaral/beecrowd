/*
    autor: Virna Amaral
    data: 18/09/2023
    nome: Fila do Recreio
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int nota;
    struct node *next;
    struct node *prev;
}node;

void enqueue(node **head, int nota);
void bubblesort(node **head, int reps);
void swap_checker(node *head, node *copy);
void clear_queue(node **head);
void printqueue(node *head);

int main(){
    node *head = NULL;
    node *copy = NULL;
    int n, m, p;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        for(int j = 0; j < m; j++){
            scanf("%d", &p);
            enqueue(&head, p);
            enqueue(&copy, p);
        }

        bubblesort(&head, m);
        swap_checker(head, copy);
        clear_queue(&head);
        clear_queue(&copy);
    }
    return 0;
}

void enqueue(node **head, int nota_aluno){
    node *new = (node *)malloc(sizeof(node));
    node *temp = *head;

    if(new == NULL){
        printf("erro de alocacao\n");
        return;
    }

    new->nota = nota_aluno;
    new->next = NULL;

    if(*head == NULL){ // aq tem q ser head msm
        *head = new;
        new->prev = NULL;
    }else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        new->prev = temp;
        temp->next = new;
    }
}


void bubblesort(node **head, int reps){
    node *temp = *head;

    if((*head) == NULL || (*head)->next == NULL){
        return;
    }else{
        for(int i = 0; i < reps - 1; i++){
            int aux, count = 0;
           
            while(temp->next != NULL){
                temp = temp->next;
            } // chegar ao final

            while(temp->prev != NULL){
                if(temp->prev->nota < temp->nota){
                    aux = temp->prev->nota;
                    temp->prev->nota = temp->nota;
                    temp->nota = aux;
                    temp = temp->prev;
                    count++;
                }else{
                    temp = temp->prev;
                }
            }
            if(count == 0){
                break;
            }
        }
    }
}

void swap_checker(node *head, node *copy){
    int count = 0;

    while(head != NULL){
        if(head->nota == copy->nota){
            count++;
        }
        head = head->next;
        copy = copy->next;
    }
    printf("%d\n", count);
}

void clear_queue(node **head){
    node *temp = *head;

    if((*head) == NULL){
        return;
    }else if((*head)->next == NULL){
        free(*head);
        (*head) = NULL;
        return;
    }else{
        while(temp->next != NULL){
            temp = temp->next;
            free(temp->prev);
        }
        free(temp);
        (*head) = NULL;
    }
}

void printqueue(node *head){
    printf("\nNULL");
    while(head != NULL){
        printf(" <- %d -> ", head->nota);
        head = head->next;
    }
    printf("NULL\n");
}