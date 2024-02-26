/*
    autor: Virna Amaral
    data: 18/09/2023
    nome: Diamantes e Areia
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char c;
    struct node *next;
}node;

void push(node **head, char diamond_side);
void pop(node **head);
void clear_queue(node **head);
void printstack(node *head);
int diamond_counter(node *head);

int main(){
    node *head = NULL;
    int n;
    char c;

    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++){
        c = getchar();
        while(c!='\n'){
            if(c == '<'){
                push(&head, c);
            }else if (c == '>'){
                push(&head, c);
            }
            c = getchar();
        }
    
        printf("%d\n", diamond_counter(head));
        clear_queue(&head);

    }

    return 0;
}

void push(node **head, char diamond_side){
    node *new = (node *)malloc(sizeof(node));
    
    new->c = diamond_side;
    new->next = NULL;

    if((*head) == NULL){
        (*head) = new;
    }else{
        new->next = (*head); // conecta o node novo com a head da pilha
        (*head) = new; // transforma o novo em head
    }
}

void clear_queue(node **head){
    node *temp = *head;
    
    while(temp != NULL){
        if((*head) == NULL){
            return;
        }else if((*head)->next == NULL){
            free(*head);
            (*head) = NULL;
            return;
        }else{
            (*head) = (*head)->next;
            free(temp);
        }
        temp = temp->next;
    }
}

int diamond_counter(node *head){
    node *temp = head;
    int diamond = 0, count1 = 0, count2 = 0;

    while(temp != NULL){
        if(temp->c == '>'){
            count1++;
        }else if(temp->c == '<'){
            count2++;
            if(count1 >= 1){
                diamond++;
                count1--;
                count2--;
            }
        }
        temp = temp->next;
    }

    return diamond;
}

void pop(node **head){
    node *temp = *head;

    if((*head) == NULL){
        return;
    }else if((*head)->next == NULL){
        free(*head);
        (*head) = NULL;
        return;
    }else{
        (*head) = (*head)->next;
        free(temp);
    }
}

void printstack(node *head){
    while(head != NULL){
        printf("%c || ", head->c);
        head = head->next;
    }
    printf(" NULL\n");
}