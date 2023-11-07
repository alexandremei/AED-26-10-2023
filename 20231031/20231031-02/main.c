#include <stdio.h>
#include "aluno.h"
#include "turma.h"

int main() {
    TURMA* turma = criarTurma(5);

    ALUNO aluno1 = {1, "Enzo", 12, 8.5};
    ALUNO aluno2 = {2, "Maria", 14, 9.0};
    ALUNO aluno3 = {3, "Pedro", 17, 7.8};

    inserirAluno(turma, aluno1);
    inserirAluno(turma, aluno2);
    inserirAluno(turma, aluno3);

    imprimirDadosAlunos(turma);

    int codigoBusca = 3;
    buscarAlunoPorCodigo(turma, codigoBusca);

    liberarTurma(turma);

    return 0;
}
