#include "lista.h"
#include <stdlib.h>

void copiarLista(int l1[], int l2[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        l2[i] = l1[i];
    }
}

void concatenarListas(int l1[], int tamanho1, int l2[], int tamanho2) {
    for (int i = 0; i < tamanho2; i++) {
        l1[i + tamanho1] = l2[i];
    }
}

void intercalarListas(int l1[], int tamanho1, int l2[], int tamanho2) {
    int *temp = malloc((tamanho1 + tamanho2) * sizeof(int));
    int i = 0, j = 0, k = 0;
    while (i < tamanho1 && j < tamanho2) {
        temp[k++] = l1[i++];
        temp[k++] = l2[j++];
    }
    while (i < tamanho1) {
        temp[k++] = l1[i++];
    }
    while (j < tamanho2) {
        temp[k++] = l2[j++];
    }
    for (i = 0; i < (tamanho1 + tamanho2); i++) {
        l1[i] = temp[i];
    }
    free(temp);
}

