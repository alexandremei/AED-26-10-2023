#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void inicializarLista(Lista* l) {
    l->qtd = 0;
}

void liberarLista(Lista* l) {
    l->qtd = 0;
}

int quantidadeElementos(Lista* l) {
    return l->qtd;
}

int listaCheia(Lista* l) {
    return l->qtd == MAX;
}

int listaVazia(Lista* l) {
    return l->qtd == 0;
}

void exibirLista(Lista* l) {
    for (int i = 0; i < l->qtd; i++) {
        printf("%d ", l->matricula[i]);
    }
    printf("\n");
}

int inserirOrdenado(Lista* l, int mat) {
    if (l->qtd == MAX) {
        return 0;
    }
    int i = 0;
    while (i < l->qtd && l->matricula[i] < mat) {
        i++;
    }
    for (int j = l->qtd; j > i; j--) {
        l->matricula[j] = l->matricula[j - 1];
    }
    l->matricula[i] = mat;
    l->qtd++;
    return 1;
}

int excluirElemento(Lista* l, int mat) {
    if (l->qtd == 0) {
        return 0;
    }
    int pos = 0;
    while (pos < l->qtd && l->matricula[pos] != mat) {
        pos++;
    }
    if (pos == l->qtd) {
        return 0;
    }
    for (int j = pos; j < l->qtd - 1; j++) {
        l->matricula[j] = l->matricula[j + 1];
    }
    l->qtd--;
    return 1;
}

int alterarMatricula(Lista* l, int mat, int nova_mat) {
    int pos = 0;
    while (pos < l->qtd && l->matricula[pos] != mat) {
        pos++;
    }
    if (pos == l->qtd) {
        return 0;
    }
    l->matricula[pos] = nova_mat;
    return 1;
}
