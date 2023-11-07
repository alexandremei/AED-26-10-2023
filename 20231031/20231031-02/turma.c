#include <stdio.h>
#include <stdlib.h>
#include "turma.h"

TURMA* criarTurma(int quantidade) {
    TURMA* novaTurma = (TURMA*)malloc(sizeof(TURMA));
    novaTurma->alunos = (ALUNO*)malloc(quantidade * sizeof(ALUNO));
    novaTurma->quantidade = 0;
    return novaTurma;
}

void liberarTurma(TURMA* turma) {
    free(turma->alunos);
    free(turma);
}

void inserirAluno(TURMA* turma, ALUNO aluno) {
    turma->alunos[turma->quantidade] = aluno;
    turma->quantidade++;
}

void buscarAlunoPorCodigo(TURMA* turma, int codigo) {
    for (int i = 0; i < turma->quantidade; i++) {
        if (turma->alunos[i].codigo == codigo) {
            printf("Aluno encontrado:\n");
            printf("Codigo: %d\n", turma->alunos[i].codigo);
            printf("Nome: %s\n", turma->alunos[i].nome);
            printf("Idade: %d\n", turma->alunos[i].idade);
            printf("Coeficiente: %.2f\n", turma->alunos[i].coeficiente);
            return;
        }
    }
    printf("Aluno com codigo %d não encontrado.\n", codigo);
}

void imprimirDadosAlunos(TURMA* turma) {
    printf("Lista de Alunos:\n");
    for (int i = 0; i < turma->quantidade; i++) {
        printf("Codigo: %d, Nome: %s\n", turma->alunos[i].codigo, turma->alunos[i].nome);
    }
}
