#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *nextNode;
};

int size = 0;
struct node *currentNode = NULL;
struct node *firstNode = NULL;

int main(void) {
    for (int i = 0; i <= 10; i++) {
        struct node *n = (struct node *)malloc(sizeof(struct node)); // Alocar memória
        if (n == NULL) {
            printf("Erro de alocação de memória\n");
            return 1;
        }
        n->value = i;
        n->nextNode = NULL;
        size++;

        if (currentNode != NULL) {
            currentNode->nextNode = n;
        } else {
            firstNode = n;
        }
        currentNode = n;
    }

    // Imprimir a lista
    currentNode = firstNode;
    while (currentNode != NULL) {
        printf("[Val: %d] [Address: %p]\n", currentNode->value, (void *)currentNode);
        currentNode = currentNode->nextNode;
    }

    // Liberar memória
    currentNode = firstNode;
    while (currentNode != NULL) {
        struct node *temp = currentNode;
        currentNode = currentNode->nextNode;
        free(temp);
    }

    return 0;
}

