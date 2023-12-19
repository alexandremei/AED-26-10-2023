#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"

Fila* criarFila() {
    Fila *fila = (Fila*) malloc(sizeof(Fila));
    fila->inicio = NULL;
    fila->fim = NULL;
    return fila;
}

void adicionarAviao(Fila *fila, Aviao aviao) {
    No *no = (No*) malloc(sizeof(No));
    no->aviao = aviao;
    no->prox = NULL;
    if (fila->fim != NULL) {
        fila->fim->prox = no;
    }
    fila->fim = no;
    if (fila->inicio == NULL) {
        fila->inicio = no;
    }
}

Aviao decolarAviao(Fila *fila) {
    No *temp = fila->inicio;
    Aviao aviao = temp->aviao;
    fila->inicio = temp->prox;
    if (fila->inicio == NULL) {
        fila->fim = NULL;
    }
    free(temp);
    return aviao;
}

void listarAvioes(Fila *fila) {
    No *temp = fila->inicio;
    while (temp != NULL) {
        printf("Aviao: %s, ID: %d\n", temp->aviao.nome, temp->aviao.id);
        temp = temp->prox;
    }
}

int numeroAvioes(Fila *fila) {
    int count = 0;
    No *temp = fila->inicio;
    while (temp != NULL) {
        count++;
        temp = temp->prox;
    }
    return count;
}

Aviao primeiroAviao(Fila *fila) {
    return fila->inicio->aviao;
}
