#include <stdio.h>
#include "lista.h"

void Lista(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
}

void moverPrimeiroParaFim(int lista[], int tamanho) {
    int primeiro = lista[0];
    for (int i = 0; i < tamanho - 1; i++) {
        lista[i] = lista[i + 1];
    }
    lista[tamanho - 1] = primeiro;
}

void inverterLista(int lista[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio < fim) {
        int temp = lista[inicio];
        lista[inicio] = lista[fim];
        lista[fim] = temp;
        inicio++;
        fim--;
    }
}
