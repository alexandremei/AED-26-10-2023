#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    LISTA* lista = criarLista(5);

    inserirElemento(lista, 30);
    inserirElemento(lista, 10);
    inserirElemento(lista, 50);
    inserirElemento(lista, 20);
    inserirElemento(lista, 40);

    printf("Elementos da lista (iterativo): ");
    imprimirListaIterativo(lista);

    printf("\nElementos da lista (recursivo): ");
    imprimirListaRecursivo(lista, 0);

    int elementoBusca = 30;
    int posicao = buscaBinariaRecursiva(lista, elementoBusca, 0, lista->quantidade - 1);
    if (posicao != -1) {
        printf("\n%d encontrado na posicao %d (busca binaria recursiva).\n", elementoBusca, posicao);
    } else {
        printf("\n%d nao encontrado (busca binaria recursiva).\n", elementoBusca);
    }

    int elementoBuscaIterativo = 40;
    int posicaoIterativo = buscaBinariaIterativo(lista, elementoBuscaIterativo);
    if (posicaoIterativo != -1) {
        printf("%d encontrado na posicao %d (busca binaria iterativa).\n", elementoBuscaIterativo, posicaoIterativo);
    } else {
        printf("%d nao encontrado (busca binaria iterativa).\n", elementoBuscaIterativo);
    }

    int elementoBuscaRecursiva = 20;
    int posicaoRecursiva = buscaBinariaRecursiva(lista, elementoBuscaRecursiva, 0, lista->quantidade - 1);
    if (posicaoRecursiva != -1) {
        printf("%d encontrado na posicao %d (busca binaria recursiva).\n", elementoBuscaRecursiva, posicaoRecursiva);
    } else {
        printf("%d nao encontrado (busca binaria recursiva).\n", elementoBuscaRecursiva);
    }

    int maior = buscarMaiorElemento(lista, lista->quantidade - 1, lista->elementos[0]);
    printf("Maior elemento na lista: %d\n", maior);

    int menor = buscarMenorElemento(lista, lista->quantidade - 1, lista->elementos[0]);
    printf("Menor elemento na lista: %d\n", menor);

    int soma = calcularSoma(lista, 0, lista->quantidade - 1);
    printf("Soma dos elementos na lista: %d\n", soma);

    int produto = calcularProduto(lista, 0, lista->quantidade - 1);
    printf("Produto dos elementos na lista: %d\n", produto);

    liberarLista(lista);

    return 0;
}
