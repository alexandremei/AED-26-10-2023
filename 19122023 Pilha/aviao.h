#ifndef AVIAO_H
#define AVIAO_H

typedef struct aviao {
    char nome[50];
    int id;
} Aviao;

typedef struct no {
    Aviao aviao;
    struct no *prox;
} No;

typedef struct pilha {
    No *topo;
} Pilha;

Pilha* criarPilha();
void adicionarAviao(Pilha *pilha, Aviao aviao);
Aviao tirarAviao(Pilha *pilha);
void listarAvioes(Pilha *pilha);
int numeroAvioes(Pilha *pilha);
Aviao primeiroAviao(Pilha *pilha);
Aviao tirarAviaoPosicao(Pilha *pilha, int posicao);

#endif
