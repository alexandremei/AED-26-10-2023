#include <stdio.h>
#include "turma.h"

int main() {
    ListaLigada lista;
    int i;

    inicializar_lista(&lista);

    inserir_elemento(&lista, 0001, "Joao", 10);
    inserir_elemento(&lista, 0002, "Maria", 11);
    inserir_elemento(&lista, 0003, "Pedro", 12);

    printf("Elementos da lista:\n");
    exibir_elementos(&lista);

    printf("Quantidade de elementos validos na lista: %d\n", quantidade_elementos(&lista));

    if (lista_cheia(&lista)) {
        printf("A lista esta cheia.\n");
    }

    if (lista_vazia(&lista)) {
        printf("A lista esta vazia.\n");
    }

    inserir_elemento_ordenado(&lista, 0004, "Ana", 13);

    printf("Elementos da lista:\n");
    exibir_elementos(&lista);

    excluir_elemento(&lista, 0002);

    printf("Elementos da lista:\n");
    exibir_elementos(&lista);

    alterar_matricula(&lista, 0001, 1000);

    printf("Elementos da lista:\n");
    exibir_elementos(&lista);

    liberar_lista(&lista);

    return 0;
}
