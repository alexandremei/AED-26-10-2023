#include <stdio.h>
#include "lista_l_s.h"

int main() {
    ListaLinear lista;
    int i;

    criar_lista(&lista);

    for (i = 0; i < 5; i++) {
        inserir_elemento(&lista, i);
    }

    inserir_elemento_ordenado(&lista, 3);
    inserir_elemento_ordenado(&lista, 1);
    inserir_elemento_ordenado(&lista, 4);

    printf("Elementos da lista: ");
    for (i = 0; i < lista.tamanho; i++) {
        printf("%d ", lista.elementos[i]);
    }
    printf("\n");

    eliminar_elemento(&lista, 3);

    printf("Elementos da lista: ");
    for (i = 0; i < lista.tamanho; i++) {
        printf("%d ", lista.elementos[i]);
    }
    printf("\n");

    return 0;
}
