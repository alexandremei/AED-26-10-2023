#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main() {
    Lista *li;
    li = cria_lista();
    Aluno dados_aluno;
    dados_aluno.matricula = 123;
    dados_aluno.idade = 20;
    sprintf(dados_aluno.nome, "Joao");
    insere_lista_ordenada(li, dados_aluno);
    imprime_lista(li);
    libera_lista(li);
    return 0;
}
