#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "deque.h"

int main() {
    Deque* deque = criarDeque();

    for(int i = 0; i < 10; i++) {
        Soldado* soldado = (Soldado*)malloc(sizeof(Soldado));
        soldado->codigo = i;
        sprintf(soldado->nome, "Soldado %d", i);
        strcpy(soldado->grau, "Grau 1");
        soldado->prox = NULL;
        soldado->ant = NULL;
        inserir_fim(deque, soldado);
    }

    printf("Primeiro soldado: %s\n", primeiro(deque)->nome);
    printf("Ultimo soldado: %s\n", ultimo(deque)->nome);
    printf("Numero de soldados: %d\n", contar(deque));
    
    Soldado* soldadoRemovido = remover_inicio(deque);
    printf("Soldado removido do inicio: %s\n", soldadoRemovido->nome);
    free(soldadoRemovido);
    
    soldadoRemovido = remover_fim(deque);
    printf("Soldado removido do fim: %s\n", soldadoRemovido->nome);
    free(soldadoRemovido);
    
    printf("Numero de soldados apos remocoes: %d\n", contar(deque));

    printf("\nResolvendo o problema de Josephus:\n");
    problemaJosephus(deque, 3);

    while(!vazia(deque)) {
        Soldado* soldado = remover_inicio(deque);
        free(soldado);
    }
    free(deque);
    
    return 0;
}
