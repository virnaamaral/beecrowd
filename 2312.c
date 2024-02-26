/*
    autor: Virna Amaral
    data: 03/10/2023
    nome:Quadro de Medalhas
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    struct node *next;
    
    char country[501];
    int gold;
    int silver;
    int bronze;
    
    struct node *prev;
}node;

void insert(node **head, node **tail, char country[501], int ouro, int prata, int bronze);
void printlist(node *head);
void bubblesort(node **head, int num_paises);

int main(){

    node *head = NULL, *tail = NULL;
    
    int num_paises, ouro, prata, bronze;
    char pais[500];

    scanf("%d", &num_paises);

    for(int i = 0; i < num_paises; i++){
        scanf("%s %d %d %d", pais, &ouro, &prata, &bronze);
        insert(&head, &tail, pais, ouro, prata, bronze);
    }
    bubblesort(&head, num_paises);
    printlist(head);

    return 0;
}

void insert(node **head, node **tail, char country[501], int ouro, int prata, int bronze){
    node *temp = *head;
    node *new = (node *)malloc(sizeof(node));

    if(new == NULL){
        printf("Erro ao alocar memória para novo nó\n");
        return;
    }

    strcpy(new->country, country);
    new->gold = ouro;
    new->silver = prata;
    new->bronze = bronze;
    new->next = NULL;

    if((*head) == NULL){
        (*head) = new;
        (*tail) = new;
        new->prev = NULL;
    }else{
        (*tail)->next = new;
        new->prev = temp;
        *tail = new;
    }

}

void printlist(node *head){
    if(head == NULL){
        printf("lista vazia\n");
        return;
    }

    while(head != NULL){
        printf("%s %d %d %d\n", head->country, head->gold, head->silver, head->bronze);
        head = head->next;
    }

}

void bubblesort(node **head, int num_paises){
    if((*head) == NULL){
        return;
    }else{
        for(int i = 0; i < num_paises; i++){
            node *temp = *head;
            int swapped = 0;

            while(temp->next != NULL){
                if((temp->gold < temp->next->gold) || 
                (temp->silver < temp->next->silver && temp->gold == temp->next->gold) || 
                (temp->bronze < temp->next->bronze && temp->silver == temp->next->silver && temp->gold == temp->next->gold) || 
                ((temp->bronze == temp->next->bronze && temp->silver == temp->next->silver && temp->gold == temp->next->gold) && (strcmp(temp->country, temp->next->country) > 0))){
                    char aux[501];
                    int ouro_aux, prata_aux, bronze_aux;
                
                    strcpy(aux, temp->country);
                    strcpy(temp->country, temp->next->country);
                    strcpy(temp->next->country, aux); // muda o pais de node
                
                    ouro_aux = temp->gold;
                    temp->gold = temp->next->gold;
                    temp->next->gold = ouro_aux;
                
                    prata_aux = temp->silver;
                    temp->silver = temp->next->silver;
                    temp->next->silver = prata_aux;
                
                    bronze_aux = temp->bronze;
                    temp->bronze = temp->next->bronze;
                    temp->next->bronze = bronze_aux;
                
                    swapped = 1;
                    temp = temp->next;
                }else{
                    temp = temp->next;
                }
            }
            if(swapped == 0){
                break;
            }
        }
    }
}
