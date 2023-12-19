#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"

int main() {
    Fila *fila = criarFila();
    int opcao;
    Aviao aviao;

    do {
        printf("1. Adicionar aviao a fila\n");
        printf("2. Autorizar decolagem\n");
        printf("3. Listar avioes na fila\n");
        printf("4. Listar numero de avioes na fila\n");
        printf("5. Listar caracteristicas do primeiro aviao\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome do aviao: ");
                scanf("%s", aviao.nome);
                printf("ID do aviao: ");
                scanf("%d", &aviao.id);
                adicionarAviao(fila, aviao);
                break;
            case 2:
                aviao = decolarAviao(fila);
                printf("aviao %s decolou\n", aviao.nome);
                break;
            case 3:
                listarAvioes(fila);
                break;
            case 4:
                printf("Numero de avioes na fila: %d\n", numeroAvioes(fila));
                break;
            case 5:
                aviao = primeiroAviao(fila);
                printf("Primeiro aviao na fila: %s, ID: %d\n", aviao.nome, aviao.id);
                break;
            case 6:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 6);

    free(fila);
    return 0;
}
