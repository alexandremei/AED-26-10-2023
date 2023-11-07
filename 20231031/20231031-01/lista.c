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

void imprimirLista(LISTA* lista) {
    for (int i = 0; i < lista->quantidade; i++) {
        printf("%d ", lista->elementos[i]);
    }
    printf("\n");
}

int buscarSequencial(LISTA* lista, int elemento) {
    int comparacoes = 0;
    for (int i = 0; i < lista->quantidade; i++) {
        comparacoes++;
        if (lista->elementos[i] == elemento) {
            printf("Comparacoes na busca sequencial: %d\n", comparacoes);
            return i;
        }
    }
    printf("Comparacoes na busca sequencial: %d\n", comparacoes);
    return -1;
}

int buscarSequencialOrdenada(LISTA* lista, int elemento) {
    int comparacoes = 0;
    for (int i = 0; i < lista->quantidade; i++) {
        comparacoes++;
        if (lista->elementos[i] == elemento) {
            printf("Comparacoes na busca sequencial ordenada: %d\n", comparacoes);
            return i;
        }
        if (lista->elementos[i] > elemento) {
            break;
        }
    }
    printf("Comparacoes na busca sequencial ordenada: %d\n", comparacoes);
    return -1;
}

int buscaBinaria(LISTA* lista, int elemento) {
    int inicio = 0;
    int fim = lista->quantidade - 1;
    int comparacoes = 0;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        comparacoes++;
        if (lista->elementos[meio] == elemento) {
            printf("Comparacoes na busca binaria: %d\n", comparacoes);
            return meio;
        }
        if (lista->elementos[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    printf("Comparacoes na busca binaria: %d\n", comparacoes);
    return -1;
}


int buscarMaiorElemento(LISTA* lista) {
    int maior = lista->elementos[0];
    for (int i = 1; i < lista->quantidade; i++) {
        if (lista->elementos[i] > maior) {
            maior = lista->elementos[i];
        }
    }
    return maior;
}

int buscarMenorElemento(LISTA* lista) {
    int menor = lista->elementos[0];
    for (int i = 1; i < lista->quantidade; i++) {
        if (lista->elementos[i] < menor) {
            menor = lista->elementos[i];
        }
    }
    return menor;
}

int calcularSoma(LISTA* lista) {
    int soma = 0;
    for (int i = 0; i < lista->quantidade; i++) {
        soma += lista->elementos[i];
    }
    return soma;
}

int calcularProduto(LISTA* lista) {
    int produto = 1;
    for (int i = 0; i < lista->quantidade; i++) {
        produto *= lista->elementos[i];
    }
    return produto;
}