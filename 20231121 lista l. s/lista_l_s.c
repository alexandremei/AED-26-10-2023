#include "lista_l_s.h"

void criar_lista(ListaLinear* lista) {
    lista->tamanho = 0;
}

void inserir_elemento(ListaLinear* lista, int elemento) {
    if (lista->tamanho < TAMANHO_MAXIMO) {
        lista->elementos[lista->tamanho] = elemento;
        lista->tamanho++;
    }
}

void inserir_elemento_ordenado(ListaLinear* lista, int elemento) {
    int i, j;

    if (lista->tamanho < TAMANHO_MAXIMO) {
        for (i = 0; i < lista->tamanho; i++) {
            if (lista->elementos[i] > elemento) {
                break;
            }
        }

        for (j = lista->tamanho; j > i; j--) {
            lista->elementos[j] = lista->elementos[j - 1];
        }

        lista->elementos[i] = elemento;
        lista->tamanho++;
    }
}

void eliminar_elemento(ListaLinear* lista, int chave) {
    int i, j;

    for (i = 0; i < lista->tamanho; i++) {
        if (lista->elementos[i] == chave) {
            break;
        }
    }

    for (j = i; j < lista->tamanho - 1; j++) {
        lista->elementos[j] = lista->elementos[j + 1];
    }

    lista->tamanho--;
}