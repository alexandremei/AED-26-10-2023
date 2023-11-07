#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

LISTA* criarLista(int quantidade) {
    LISTA* novaLista = (LISTA*)malloc(sizeof(LISTA));
    novaLista->elementos = (int*)malloc(quantidade * sizeof(int));
    novaLista->quantidade = 0;
    return novaLista;
}

void liberarLista(LISTA* lista) {
    free(lista->elementos);
    free(lista);
}

void inserirElemento(LISTA* lista, int elemento) {
    lista->elementos[lista->quantidade] = elemento;
    lista->quantidade++;
}

void inserirElementoOrdenado(LISTA* lista, int elemento) {
    int i = lista->quantidade - 1;
    while (i >= 0 && lista->elementos[i] > elemento) {
        lista->elementos[i + 1] = lista->elementos[i];
        i--;
    }
    lista->elementos[i + 1] = elemento;
    lista->quantidade++;
}

void imprimirListaIterativo(LISTA* lista) {
    for (int i = 0; i < lista->quantidade; i++) {
        printf("%d ", lista->elementos[i]);
    }
    printf("\n");
}

void imprimirListaRecursivo(LISTA* lista, int indice) {
    if (indice < lista->quantidade) {
        printf("%d ", lista->elementos[indice]);
        imprimirListaRecursivo(lista, indice + 1);
    } else {
        printf("\n");
    }
}

int buscaBinariaRecursiva(LISTA* lista, int elemento, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (lista->elementos[meio] == elemento) {
            return meio;
        }
        if (lista->elementos[meio] < elemento) {
            return buscaBinariaRecursiva(lista, elemento, meio + 1, fim);
        }
        return buscaBinariaRecursiva(lista, elemento, inicio, meio - 1);
    }
    return -1;
}

int buscaBinariaIterativo(LISTA* lista, int elemento) {
    int inicio = 0;
    int fim = lista->quantidade - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (lista->elementos[meio] == elemento) {
            return meio;
        }
        if (lista->elementos[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int buscarMaiorElemento(LISTA* lista, int indice, int atualMaior) {
    if (indice < 0) {
        return atualMaior;
    }
    if (lista->elementos[indice] > atualMaior) {
        atualMaior = lista->elementos[indice];
    }
    return buscarMaiorElemento(lista, indice - 1, atualMaior);
}

int buscarMenorElemento(LISTA* lista, int indice, int atualMenor) {
    if (indice < 0) {
        return atualMenor;
    }
    if (lista->elementos[indice] < atualMenor) {
        atualMenor = lista->elementos[indice];
    }
    return buscarMenorElemento(lista, indice - 1, atualMenor);
}

int calcularSoma(LISTA* lista, int indiceInicial, int indiceFinal) {
    if (indiceInicial > indiceFinal) {
        return 0;
    }
    return lista->elementos[indiceInicial] + calcularSoma(lista, indiceInicial + 1, indiceFinal);
}

int calcularProduto(LISTA* lista, int indiceInicial, int indiceFinal) {
    if (indiceInicial > indiceFinal) {
        return 1;
    }
    return lista->elementos[indiceInicial] * calcularProduto(lista, indiceInicial + 1, indiceFinal);
}