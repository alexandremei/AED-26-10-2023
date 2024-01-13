#ifndef TABELA_H
#define TABELA_H

#define M 11
#define MAX_KEY 999

typedef struct {
    int chave;
    int disponivel;
} TabelaHash;

TabelaHash* criarTabelaHash();
int inserir(TabelaHash* tabela, int chave, int (*funcaoHash)(int, int));
void imprimirTabelaHash(TabelaHash* tabela);
int funcaoHashA(int chave, int i);
int funcaoHashB(int chave, int i);
int funcaoHashC(int chave, int i);
int funcaoHashD(int chave, int i);

#endif
