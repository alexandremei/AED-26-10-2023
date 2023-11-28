#include <stdio.h>
#include "lista.h"

void printLista(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
}

int main() {
    int l1[10] = {1, 2, 3, 4, 5};
    int tamanho1 = 5;
    int l2[5] = {6, 7, 8, 9, 10};
    int tamanho2 = 5;

    printf("Lista l1: ");
    printLista(l1, tamanho1);
    printf("Lista l2: ");
    printLista(l2, tamanho2);

    copiarLista(l1, l2, tamanho1);
    printf("Lista l2 apos copiar l1: ");
    printLista(l2, tamanho1);

    concatenarListas(l1, tamanho1, l2, tamanho2);
    printf("Lista l1 apos concatenar com l2: ");
    printLista(l1, tamanho1 + tamanho2);

    intercalarListas(l1, tamanho1, l2, tamanho2);
    printf("Lista l1 apos intercalar com l2: ");
    printLista(l1, tamanho1 + tamanho2);

    return 0;
}
