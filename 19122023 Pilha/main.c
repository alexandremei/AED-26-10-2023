#include <stdio.h>
#include <stdlib.h>
#include "aviao.h"

int main() {
    Pilha *pilha = criarPilha();
    int opcao, posicao;
    Aviao aviao;

    do {
        printf("1. Adicionar aviao ao hangar\n");
        printf("2. Tirar aviao do hangar\n");
        printf("3. Listar avioes no hangar\n");
        printf("4. Listar numero de avioes no hangar\n");
        printf("5. Listar caracteristicas do primeiro aviao\n");
        printf("6. Tirar aviao do hangar pela posicao\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Nome do aviao: ");
                scanf("%s", aviao.nome);
                printf("ID do aviao: ");
                scanf("%d", &aviao.id);
                adicionarAviao(pilha, aviao);
                break;
            case 2:
                aviao = tirarAviao(pilha);
                printf("Aviao %s saiu do hangar\n", aviao.nome);
                break;
            case 3:
                listarAvioes(pilha);
                break;
            case 4:
                printf("Numero de avioes no hangar: %d\n", numeroAvioes(pilha));
                break;
            case 5:
                aviao = primeiroAviao(pilha);
                printf("Primeiro aviao no hangar: %s, ID: %d\n", aviao.nome, aviao.id);
                break;
            case 6:
                printf("Posicao do aviao a ser removido: ");
                scanf("%d", &posicao);
                aviao = tirarAviaoPosicao(pilha, posicao);
                printf("Aviao %s na posicao %d saiu do hangar\n", aviao.nome, posicao);
                break;
            case 7:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida\n");
        }
    } while (opcao != 7);

    free(pilha);
    return 0;
}
