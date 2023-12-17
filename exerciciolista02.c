#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *prox;
    struct No *ant;
} No;

No* removerMaior(No **L) {
    No *maior = *L;
    No *temp = *L;

    while (temp != NULL) {
        if (temp->valor > maior->valor) {
            maior = temp;
        }
        temp = temp->prox;
    }

    if (maior->ant != NULL) {
        maior->ant->prox = maior->prox;
    } else {
        *L = maior->prox;
    }

    if (maior->prox != NULL) {
        maior->prox->ant = maior->ant;
    }

    return maior;
}

No* ordenarLista(No **L) {
    No *K = NULL;
    No *temp;

    while (*L != NULL) {
        temp = removerMaior(L);
        temp->prox = K;
        if (K != NULL) {
            K->ant = temp;
        }
        K = temp;
    }

    return K;
}
