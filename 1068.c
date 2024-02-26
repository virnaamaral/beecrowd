/*
    autor: Virna Amaral
    data: 12/05/2023
    nome: Balanço de Parênteses I
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  char c;
  struct node *next;
};

int push_stack(struct node **head, char c);
int pop_stack(struct node **head);
void print_stack(struct node *head);

int main() {
    struct node *head = NULL;
    struct node *remover = head;
    char str[1000];

    while (fgets(str, 1000, stdin)) {
        int checker = 0;

        for (unsigned int i = 0; i < strlen(str); i++) {
        if (str[i] == '(') {
            push_stack(&head, '(');
            checker--;
        } else if (str[i] == ')') {
            pop_stack(&head);
            checker++;
        }
        }

        if (head != NULL) {
        checker = 1;
        while (head != NULL) {
            pop_stack(&head);
        }
        }

        if (checker == 0) {
        printf("correct\n");
        } else {
        printf("incorrect\n");
        }
    }

    while (remover != NULL) {
        struct node *next = remover->next;
        free(remover);
        remover = next;
    }

    return 0;
}

int push_stack(struct node **head, char caractere) {
    struct node *n = *head;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->c = caractere;
    new->next = NULL;

    if (*head == NULL) {
        *head = new;
    } else {
        while (n->next != NULL) {
        n = n->next;
        }
        n->next = new;
    }
    return 1;
}

int pop_stack(struct node **head) {
    struct node *n = *head;

    if (*head == NULL) {
        return 1;
    } else if (n->next == NULL) {
        free(n);
        *head = NULL;
    } else {
        while (n->next->next != NULL) {
        n = n->next;
        }
        free(n->next);
        n->next = NULL;
    }
    return 1;
}

void print_stack(struct node *head) {
    struct node *n = head;
    while (n != NULL) {
        printf("%c\n", n->c);
        n = n->next;
    }
}