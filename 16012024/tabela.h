#ifndef TABELA_H
#define TABELA_H

#define M 11

typedef struct No {
    int chave;
    struct No* prox;
} No;

typedef struct {
    No* inicio;
} Lista;

typedef struct {
    Lista tabela[M];
} TabelaHash;

TabelaHash* criarTabelaHash();
void inserir(TabelaHash* tabela, int chave);
void imprimirTabelaHash(TabelaHash* tabela);

#endif
