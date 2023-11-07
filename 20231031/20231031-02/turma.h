#ifndef TURMA_H
#define TURMA_H

#include "aluno.h"

typedef struct {
    ALUNO* alunos;
    int quantidade;
} TURMA;

TURMA* criarTurma(int quantidade);
void liberarTurma(TURMA* turma);
void inserirAluno(TURMA* turma, ALUNO aluno);
void buscarAlunoPorCodigo(TURMA* turma, int codigo);
void imprimirDadosAlunos(TURMA* turma);

#endif
