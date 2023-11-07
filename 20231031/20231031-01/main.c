#include <stdio.h>
#include "lista.h"

int main() {
    int tamanhoLista1, elementoBusca;

    printf("Digite o tamanho da primeira lista: ");
    scanf("%d", &tamanhoLista1);

    LISTA* lista1 = criarLista(tamanhoLista1);

    for (int i = 0; i < tamanhoLista1; i++) {
        int valor;
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valor);
        inserirElemento(lista1, valor);
    }

    printf("\nElementos na lista 1: ");
    imprimirLista(lista1);

    printf("\nDigite um elemento para buscar na lista 1: ");
    scanf("%d", &elementoBusca);

    int posicaoBusca = buscarSequencial(lista1, elementoBusca);

    if (posicaoBusca != -1) {
        printf("%d encontrado na posicao %d (busca sequencial).\n", elementoBusca, posicaoBusca);
    } else {
        printf("%d nao encontrado (busca sequencial).\n", elementoBusca);
    }

    LISTA* lista2 = criarLista(30);
    for (int i = 0; i < 30; i++) {
        inserirElemento(lista2, i * 2); 
    }

    printf("\nElementos na lista 2: ");
    imprimirLista(lista2);

    printf("\nDigite um elemento para buscar na lista 2: ");
    scanf("%d", &elementoBusca);

    int posicaoBuscaSeq = buscarSequencial(lista2, elementoBusca);
    int posicaoBuscaSeqOrd = buscarSequencialOrdenada(lista2, elementoBusca);
    int posicaoBuscaBin = buscaBinaria(lista2, elementoBusca);

    if (posicaoBuscaSeq != -1) {
        printf("%d encontrado na posicao %d (busca sequencial na lista 2).\n", elementoBusca, posicaoBuscaSeq);
    } else {
        printf("%d nao encontrado (busca sequencial na lista 2).\n", elementoBusca);
    }

    if (posicaoBuscaSeqOrd != -1) {
        printf("%d encontrado na posicao %d (busca sequencial ordenada na lista 2).\n", elementoBusca, posicaoBuscaSeqOrd);
    } else {
        printf("%d nao encontrado (busca sequencial ordenada na lista 2).\n", elementoBusca);
    }

    if (posicaoBuscaBin != -1) {
        printf("%d encontrado na posicao %d (busca binaria na lista 2).\n", elementoBusca, posicaoBuscaBin);
    } else {
        printf("%d nao encontrado (busca binaria na lista 2).\n", elementoBusca);
    }

    int elementoExiste = 10;
    int elementoNaoExiste = 15;

    int posicaoExisteSeq = buscarSequencial(lista2, elementoExiste);
    int posicaoNaoExisteSeq = buscarSequencial(lista2, elementoNaoExiste);
    int posicaoExisteSeqOrd = buscarSequencialOrdenada(lista2, elementoExiste);
    int posicaoNaoExisteSeqOrd = buscarSequencialOrdenada(lista2, elementoNaoExiste);
    int posicaoExisteBin = buscaBinaria(lista2, elementoExiste);
    int posicaoNaoExisteBin = buscaBinaria(lista2, elementoNaoExiste);

    printf("\nComparacao de resultados:\n");
    printf("%d existe na lista 2 (Busca Sequencial): %d\n", elementoExiste, posicaoExisteSeq);
    printf("%d nao existe na lista 2 (Busca Sequencial): %d\n", elementoNaoExiste, posicaoNaoExisteSeq);
    printf("%d existe na lista 2 (Busca Sequencial Ordenada): %d\n", elementoExiste, posicaoExisteSeqOrd);
    printf("%d nao existe na lista 2 (Busca Sequencial Ordenada): %d\n", elementoNaoExiste, posicaoNaoExisteSeqOrd);
    printf("%d existe na lista 2 (Busca Binaria): %d\n", elementoExiste, posicaoExisteBin);
    printf("%d nao existe na lista 2 (Busca Binaria): %d\n", elementoNaoExiste, posicaoNaoExisteBin);

    int maiorLista1 = buscarMaiorElemento(lista1);
    printf("\nMaior elemento na lista 1: %d\n", maiorLista1);

    int menorLista1 = buscarMenorElemento(lista1);
    printf("Menor elemento na lista 1: %d\n", menorLista1);

    int somaLista1 = calcularSoma(lista1);
    printf("Soma dos elementos na lista 1: %d\n", somaLista1);

    int produtoLista1 = calcularProduto(lista1);
    printf("Produto dos elementos na lista 1: %d\n", produtoLista1);
    
    liberarLista(lista1);
    liberarLista(lista2);

    return 0;
}
