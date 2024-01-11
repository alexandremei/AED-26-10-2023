#include <stdlib.h>
#include "tabelahash.h"
#include "paciente.h"

int hash(int codigo) {
    return codigo % SIZE;
}

TabelaHash* criar_tabela() {
    TabelaHash* ht = (TabelaHash*) malloc(sizeof(TabelaHash));
    for (int i = 0; i < SIZE; i++) {
        ht->tabela[i] = NULL;
    }
    return ht;
}

void inserir_paciente(TabelaHash* ht, Paciente* paciente) {
    int indice = hash(paciente->codigo);
    if (ht->tabela[indice] == NULL || ht->tabela[indice]->disponivel == 1) {
        if (ht->tabela[indice] != NULL) {
            destruir_paciente(ht->tabela[indice]);
        }
        ht->tabela[indice] = paciente;
    }
}

void excluir_paciente(TabelaHash* ht, int codigo) {
    int indice = hash(codigo);
    if (ht->tabela[indice] != NULL) {
        ht->tabela[indice]->disponivel = 1;
    }
}

Paciente* buscar_paciente(TabelaHash* ht, int codigo) {
    int indice = hash(codigo);
    if (ht->tabela[indice] != NULL && ht->tabela[indice]->disponivel == 0) {
        return ht->tabela[indice];
    } else {
        return NULL;
    }
}

void destruir_tabela(TabelaHash* ht) {
    for (int i = 0; i < SIZE; i++) {
        if (ht->tabela[i] != NULL) {
            destruir_paciente(ht->tabela[i]);
        }
    }
    free(ht);
}