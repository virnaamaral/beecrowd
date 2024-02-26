/*
    autor: Virna Amaral
    data: 18/09/2023
    nome: Amigos de Habay
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
    struct node *next;
    char name[1001];
    struct node *prev;
}node;

void insert(node **head, char string[1001]);
int cmp(node *head, char string[1001]);
void name_sort(node **head, int list_length);
void habays_friend(node *head);
void printlist(node *head);
int listlen(node *head);
void clear_list(node **head);

int main(){
    char end[4] = "FIM";
    char str[1001], vote[4];

    node *head_yes = NULL;
    node *copy_head = NULL; //p comparar em caso de empate
    node *head_no = NULL;

    do{
        scanf("%s", str);

        if(strcmp(str, end) == 0){
            break;
        }
        
        scanf("%s", vote);
        
        if(strcmp(vote, "YES") == 0){
            insert(&copy_head, str);
            if(cmp(head_yes, str) == 1){
                insert(&head_yes, str);
            }
        }else if(strcmp(vote, "NO") == 0){
            insert(&head_no, str);
        }

    }while(strcmp(str, end) != 0);

    name_sort(&head_yes, listlen(head_yes));
    name_sort(&head_no, listlen(head_no));
    printlist(head_yes);
    printlist(head_no);

    habays_friend(copy_head);

    clear_list(&head_yes);
    clear_list(&head_no);
    clear_list(&copy_head);

    return 0;
}

void insert(node **head, char string[1001]){
    node *new = (node *)malloc(sizeof(node));
    node *temp = *head;

    if(new == NULL){
        printf("deu problema\n");
        return;
    }

    strcpy(new->name, string);
    new->next = NULL;

    if(*head == NULL){
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

int cmp(node *head, char string[1001]){
    if(head == NULL){
        return 1;
    }
    while(head != NULL){
        if(strcmp(head->name, string) == 0){
            return 0;
        }else{
            head = head->next;
        }
    }
    return 1;
}

void name_sort(node **head, int list_length){
    node *temp = *head;
    char aux[1001];
    int count = 0;

    if((*head) == NULL){
        return;
    }else{
        for(int i = 0; i < list_length - 1; i++){
            while(temp->next != NULL){
                temp = temp->next;
            }

            while(temp->prev != NULL){
                if(strcmp(temp->name, temp->prev->name) < 0){
                    strcpy(aux, temp->name);
                    strcpy(temp->name,temp->prev->name);
                    strcpy(temp->prev->name, aux);
                    count++;
                    temp = temp->prev;

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

void habays_friend(node *head_yes){
    node *temp = head_yes;
    char friend[1001] = "";
    unsigned int max_size = 0;

    while(temp != NULL){
        if(strlen(temp->name) > max_size){
            strcpy(friend,temp->name);
            max_size = strlen(temp->name);
        }
        temp = temp->next;
    }
    printf("\nAmigo do Habay:\n%s\n", friend);
}

int listlen(node *head){
    int count = 0;

    while(head != NULL){
        count++;
        head = head->next;
    }

    return count;
}

void printlist(node *head){
    while(head != NULL){
        printf("%s\n", head->name);
        head = head->next;
    }
}

void clear_list(node **head){
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
        }
        while(temp->prev != NULL){
            temp = temp->prev;
            free(temp->next);
        }
        free(temp);
        (*head) = NULL;
    }
}
