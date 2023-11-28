#include <stdio.h>
#include <string.h>
#include "turma.h"

void inicializar_lista(ListaLigada* lista) {
    lista->tamanho = 0;
}

void liberar_lista(ListaLigada* lista) {
    lista->tamanho = 0;
}

int quantidade_elementos(ListaLigada* lista) {
    return lista->tamanho;
}

int lista_cheia(ListaLigada* lista) {
    return lista->tamanho == TAMANHO_MAXIMO;
}

int lista_vazia(ListaLigada* lista) {
    return lista->tamanho == 0;
}

void exibir_elementos(ListaLigada* lista) {
    int i;

    for (i = 0; i < lista->tamanho; i++) {
        printf("Matricula: %d, Nome: %s, Idade: %d\n", lista->elementos[i].matricula, lista->elementos[i].nome, lista->elementos[i].idade);
    }
}

void inserir_elemento(ListaLigada* lista, int matricula, char* nome, int idade) {
    if (lista->tamanho < TAMANHO_MAXIMO) {
        lista->elementos[lista->tamanho].matricula = matricula;
        strcpy(lista->elementos[lista->tamanho].nome, nome);
        lista->elementos[lista->tamanho].idade = idade;
        lista->tamanho++;
    }
}

void inserir_elemento_ordenado(ListaLigada* lista, int matricula, char* nome, int idade) {
    int i, j;

    if (lista->tamanho < TAMANHO_MAXIMO) {
        for (i = 0; i < lista->tamanho; i++) {
            if (lista->elementos[i].matricula > matricula) {
                break;
            }
        }

        for (j = lista->tamanho; j > i; j--) {
            lista->elementos[j] = lista->elementos[j - 1];
        }

        lista->elementos[i].matricula = matricula;
        strcpy(lista->elementos[i].nome, nome);
        lista->elementos[i].idade = idade;
        lista->tamanho++;
    }
}

void excluir_elemento(ListaLigada* lista, int matricula) {
    int i, j;

    for (i = 0; i < lista->tamanho; i++) {
        if (lista->elementos[i].matricula == matricula) {
            break;
        }
    }

    for (j = i; j < lista->tamanho - 1; j++) {
        lista->elementos[j] = lista->elementos[j + 1];
    }

    lista->tamanho--;
}

void alterar_matricula(ListaLigada* lista, int matricula_antiga, int matricula_nova) {
    int i;

    for (i = 0; i < lista->tamanho; i++) {
        if (lista->elementos[i].matricula == matricula_antiga) {
            break;
        }
    }

    lista->elementos[i].matricula = matricula_nova;
}
