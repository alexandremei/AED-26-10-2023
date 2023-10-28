#ifndef PESSOA_H
#define PESSOA_H

typedef struct {
    char nome[100];
    char dataNascimento[11]; 
    char cpf[12]; 
} Pessoa;

void preencherDados(Pessoa *pessoa, const char *nome, const char *dataNascimento, const char *cpf);
void imprimirDados(const Pessoa *pessoa);

#endif