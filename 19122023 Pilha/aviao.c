#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"

Pilha* criarPilha() {
    Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
    pilha->topo = NULL;
    return pilha;
}

void adicionarAviao(Pilha *pilha, Aviao aviao) {
    No *no = (No*) malloc(sizeof(No));
    no->aviao = aviao;
    no->prox = pilha->topo;
    pilha->topo = no;
}

Aviao tirarAviao(Pilha *pilha) {
    No *temp = pilha->topo;
    Aviao aviao = temp->aviao;
    pilha->topo = temp->prox;
    free(temp);
    return aviao;
}

void listarAvioes(Pilha *pilha) {
    No *temp = pilha->topo;
    while (temp != NULL) {
        printf("Aviao: %s, ID: %d\n", temp->aviao.nome, temp->aviao.id);
        temp = temp->prox;
    }
}

int numeroAvioes(Pilha *pilha) {
    int count = 0;
    No *temp = pilha->topo;
    while (temp != NULL) {
        count++;
        temp = temp->prox;
    }
    return count;
}

Aviao primeiroAviao(Pilha *pilha) {
    return pilha->topo->aviao;
}

Aviao tirarAviaoPosicao(Pilha *pilha, int posicao) {
    Pilha *tempPilha = criarPilha();
    Aviao aviao;
    int i;

    for (i = 0; i < posicao - 1; i++) {
        adicionarAviao(tempPilha, tirarAviao(pilha));
    }

    aviao = tirarAviao(pilha);

    while (numeroAvioes(tempPilha) > 0) {
        adicionarAviao(pilha, tirarAviao(tempPilha));
    }

    free(tempPilha);
    return aviao;
}
