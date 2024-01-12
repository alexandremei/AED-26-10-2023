#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"

int hash(int codigo) {
    return codigo % MAX;
}

Paciente* criarPaciente(int codigo, char* nome, char* cpf, int idade) {
    Paciente* p = (Paciente*) malloc(sizeof(Paciente));
    p->codigo = codigo;
    strcpy(p->nome, nome);
    strcpy(p->cpf, cpf);
    p->idade = idade;
    p->disponivel = 0;
    p->prox = NULL;
    return p;
}

void inserirPaciente(Paciente** tab, Paciente* p) {
    int h = hash(p->codigo);
    Paciente* atual = tab[h];
    if (atual == NULL || atual->disponivel == 1) {
        p->prox = atual;
        tab[h] = p;
    } else {
        while (atual->prox != NULL && atual->prox->disponivel == 0) {
            atual = atual->prox;
        }
        p->prox = atual->prox;
        atual->prox = p;
    }
}

void excluirPaciente(Paciente** tab, int codigo) {
    int h = hash(codigo);
    Paciente* atual = tab[h];
    if (atual != NULL) {
        if (atual->codigo == codigo) {
            atual->disponivel = 1;
        } else {
            while (atual->prox != NULL && atual->prox->codigo != codigo) {
                atual = atual->prox;
            }
            if (atual->prox != NULL) {
                atual->prox->disponivel = 1;
            }
        }
    }
}

void imprimirPacientes(Paciente** tab) {
    for (int i = 0; i < MAX; i++) {
        Paciente* atual = tab[i];
        while (atual != NULL) {
            if (atual->disponivel == 0) {
                printf("Codigo: %d, Nome: %s, CPF: %s, Idade: %d\n", atual->codigo, atual->nome, atual->cpf, atual->idade);
            }
            atual = atual->prox;
        }
    }
}
