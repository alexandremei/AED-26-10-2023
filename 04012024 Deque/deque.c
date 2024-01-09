#include <stdio.h>
#include <stdlib.h>
#include "deque.h"

Deque* criarDeque() {
    Deque* deque = (Deque*)malloc(sizeof(Deque));
    deque->inicio = NULL;
    deque->fim = NULL;
    deque->tamanho = 0;
    return deque;
}

int vazia(Deque* deque) {
    return deque->tamanho == 0;
}

int inserir_inicio(Deque* deque, Soldado* soldado) {
    if (deque == NULL || soldado == NULL) return 0;
    if (vazia(deque)) {
        deque->inicio = soldado;
        deque->fim = soldado;
    } else {
        soldado->prox = deque->inicio;
        deque->inicio->ant = soldado;
        deque->inicio = soldado;
    }
    deque->tamanho++;
    return 1;
}

int inserir_fim(Deque* deque, Soldado* soldado) {
    if (deque == NULL || soldado == NULL) return 0;
    if (vazia(deque)) {
        deque->inicio = soldado;
        deque->fim = soldado;
    } else {
        soldado->ant = deque->fim;
        deque->fim->prox = soldado;
        deque->fim = soldado;
    }
    deque->tamanho++;
    return 1;
}

Soldado* remover_inicio(Deque* deque) {
    if (deque == NULL || vazia(deque)) return NULL;
    Soldado* soldado = deque->inicio;
    deque->inicio = deque->inicio->prox;
    if (deque->inicio != NULL) deque->inicio->ant = NULL;
    else deque->fim = NULL;
    deque->tamanho--;
    return soldado;
}

Soldado* remover_fim(Deque* deque) {
    if (deque == NULL || vazia(deque)) return NULL;
    Soldado* soldado = deque->fim;
    deque->fim = deque->fim->ant;
    if (deque->fim != NULL) deque->fim->prox = NULL;
    else deque->inicio = NULL;
    deque->tamanho--;
    return soldado;
}

Soldado* primeiro(Deque* deque) {
    if (deque == NULL || vazia(deque)) return NULL;
    return deque->inicio;
}

Soldado* ultimo(Deque* deque) {
    if (deque == NULL || vazia(deque)) return NULL;
    return deque->fim;
}

int contar(Deque* deque) {
    if (deque == NULL) return -1;
    return deque->tamanho;
}

Soldado* remover_pos(Deque* deque, int pos) {
    if (deque == NULL || vazia(deque) || pos < 0 || pos >= deque->tamanho) return NULL;
    Soldado* soldado = deque->inicio;
    for (int i = 0; i < pos; i++) soldado = soldado->prox;
    if (soldado->ant != NULL) soldado->ant->prox = soldado->prox;
    else deque->inicio = soldado->prox;
    if (soldado->prox != NULL) soldado->prox->ant = soldado->ant;
    else deque->fim = soldado->ant;
    deque->tamanho--;
    return soldado;
}

void problemaJosephus(Deque* deque, int n) {
    if (deque == NULL || vazia(deque) || n <= 0) return;
    while (deque->tamanho > 1) {
        for (int i = 0; i < n; i++) {
            Soldado* soldado = remover_inicio(deque);
            inserir_fim(deque, soldado);
        }
        Soldado* soldado = remover_inicio(deque);
        printf("Soldado eliminado: %s\n", soldado->nome);
        free(soldado);
    }
    printf("Soldado que vai escapar: %s\n", deque->inicio->nome);
}
