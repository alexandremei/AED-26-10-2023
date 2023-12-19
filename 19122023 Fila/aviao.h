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

typedef struct fila {
    No *inicio;
    No *fim;
} Fila;

Fila* criarFila();
void adicionarAviao(Fila *fila, Aviao aviao);
Aviao decolarAviao(Fila *fila);
void listarAvioes(Fila *fila);
int numeroAvioes(Fila *fila);
Aviao primeiroAviao(Fila *fila);

#endif
