#include <stdio.h>
#include <stdlib.h>
#include "tabela.h"

int main() {
    int chaves[] = {365, 112, 180, 213, 13, 27};
    int n = sizeof(chaves) / sizeof(chaves[0]);

    printf("Sondagem linear:\n");
    TabelaHash* tabelaA = criarTabelaHash();
    int colisoesA = 0;
    for (int i = 0; i < n; i++) {
        colisoesA += inserir(tabelaA, chaves[i], funcaoHashA);
    }
    imprimirTabelaHash(tabelaA);
    printf("Colisoes: %d\n", colisoesA);

    printf("Sondagem quadratica A:\n");
    TabelaHash* tabelaB = criarTabelaHash();
    int colisoesB = 0;
    for (int i = 0; i < n; i++) {
        colisoesB += inserir(tabelaB, chaves[i], funcaoHashB);
    }
    imprimirTabelaHash(tabelaB);
    printf("Colisoes: %d\n", colisoesB);

    printf("Sondagem quadratica B:\n");
    TabelaHash* tabelaC = criarTabelaHash();
    int colisoesC = 0;
    for (int i = 0; i < n; i++) {
        colisoesC += inserir(tabelaC, chaves[i], funcaoHashC);
    }
    imprimirTabelaHash(tabelaC);
    printf("Colisoes: %d\n", colisoesC);

    printf("Hash duplo:\n");
    TabelaHash* tabelaD = criarTabelaHash();
    int colisoesD = 0;
    for (int i = 0; i < n; i++) {
        colisoesD += inserir(tabelaD, chaves[i], funcaoHashD);
    }
    imprimirTabelaHash(tabelaD);
    printf("Colisoes: %d\n", colisoesD);

    free(tabelaA);
    free(tabelaB);
    free(tabelaC);
    free(tabelaD);

    return 0;
}
