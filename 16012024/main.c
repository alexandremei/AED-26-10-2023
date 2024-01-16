#include <stdio.h>
#include <stdlib.h>
#include "tabela.h"

int main() {
    int chaves[] = {12, 44, 13, 88, 23, 94, 11, 39, 20, 16, 5};
    int n = sizeof(chaves) / sizeof(chaves[0]);

    TabelaHash* tabela = criarTabelaHash();
    for (int i = 0; i < n; i++) {
        inserir(tabela, chaves[i]);
    }

    imprimirTabelaHash(tabela);

    free(tabela);

    return 0;
}
