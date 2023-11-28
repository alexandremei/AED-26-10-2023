#include <stdio.h>
#include "lista.h"

int main() {
    Lista l;
    inicializarLista(&l);

    inserirOrdenado(&l, 10);
    inserirOrdenado(&l, 40);
    inserirOrdenado(&l, 780);

    printf("Lista: ");
    exibirLista(&l);

    printf("Quantidade de elementos: %d\n", quantidadeElementos(&l));
    printf("Lista cheia: %s\n", listaCheia(&l) ? "Sim" : "Nao");
    printf("Lista vazia: %s\n", listaVazia(&l) ? "Sim" : "Nao");

    excluirElemento(&l, 40);

    printf("Lista apos excluir 456: ");
    exibirLista(&l);

    alterarMatricula(&l, 10, 123);

    printf("Lista apos alterar 10 para 123: ");
    exibirLista(&l);

    liberarLista(&l);

    return 0;
}
