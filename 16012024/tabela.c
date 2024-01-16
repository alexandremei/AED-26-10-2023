#include <stdio.h>
#include <stdlib.h>
#include "tabela.h"

int funcaoHash(int chave) {
    return (2 * chave + 5) % M;
}

TabelaHash* criarTabelaHash() {
    TabelaHash* tabela = (TabelaHash*) malloc(sizeof(TabelaHash));
    for (int i = 0; i < M; i++) {
        tabela->tabela[i].inicio = NULL;
    }
    return tabela;
}

void inserir(TabelaHash* tabela, int chave) {
    int indice = funcaoHash(chave);
    No* novoNo = (No*) malloc(sizeof(No));
    novoNo->chave = chave;
    novoNo->prox = tabela->tabela[indice].inicio;
    tabela->tabela[indice].inicio = novoNo;
}

void imprimirTabelaHash(TabelaHash* tabela) {
    for (int i = 0; i < M; i++) {
        printf("%d: ", i);
        No* atual = tabela->tabela[i].inicio;
        while (atual != NULL) {
            printf("%d -> ", atual->chave);
            atual = atual->prox;
        }
        printf("NULL\n");
    }
}
