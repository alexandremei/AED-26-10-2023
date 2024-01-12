#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "paciente.h"

Paciente* tab[MAX];

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
    return p;
}

void inserirPaciente(Paciente* p) {
    int h = hash(p->codigo);
    if (tab[h] == NULL || tab[h]->disponivel == 1) {
        tab[h] = p;
    }
}

void excluirPaciente(int codigo) {
    int h = hash(codigo);
    if (tab[h] != NULL) {
        tab[h]->disponivel = 1;
    }
}

void imprimirPacientes() {
    for (int i = 0; i < MAX; i++) {
        if (tab[i] != NULL && tab[i]->disponivel == 0) {
            printf("Codigo: %d, Nome: %s, CPF: %s, Idade: %d\n", tab[i]->codigo, tab[i]->nome, tab[i]->cpf, tab[i]->idade);
        }
    }
}