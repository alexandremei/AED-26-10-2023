#include <stdio.h>
#include <stdlib.h>
#include "tabela.h"

int funcaoHashA(int chave, int i) {
    return (chave + i) % M;
}

int funcaoHashB(int chave, int i) {
    return (chave + i * i) % M;
}

int funcaoHashC(int chave, int i) {
    return (chave + 2 * i + i * i) % M;
}

int funcaoHashD1(int chave) {
    return chave % M;
}

int funcaoHashD2(int chave) {
    return 7 - (chave % 7);
}

int funcaoHashD(int chave, int i) {
    return (funcaoHashD1(chave) + i * funcaoHashD2(chave)) % M;
}

TabelaHash* criarTabelaHash() {
    TabelaHash* tabela = (TabelaHash*) malloc(M * sizeof(TabelaHash));
    for (int i = 0; i < M; i++) {
        tabela[i].chave = -1;
        tabela[i].disponivel = 1;
    }
    return tabela;
}

int inserir(TabelaHash* tabela, int chave, int (*funcaoHash)(int, int)) {
    int colisoes = 0;
    for (int i = 0; i < M; i++) {
        int indice = funcaoHash(chave, i);
        if (tabela[indice].disponivel) {
            tabela[indice].chave = chave;
            tabela[indice].disponivel = 0;
            return colisoes;
        }
        colisoes++;
    }
    printf("Tabela cheia, não foi possível inserir a chave %d\n", chave);
    return colisoes;
}

void imprimirTabelaHash(TabelaHash* tabela) {
    for (int i = 0; i < M; i++) {
        if (!tabela[i].disponivel) {
            printf("%d ", tabela[i].chave);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}
