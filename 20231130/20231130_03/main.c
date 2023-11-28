#include <stdio.h>
#include "lista.h"

int main() {
    int lista[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    
    printf("Lista original: ");
    Lista(lista, tamanho);
     printf("\n");

    moverPrimeiroParaFim(lista, tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    inverterLista(lista, tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
