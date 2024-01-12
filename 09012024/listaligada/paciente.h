#ifndef PACIENTE_H
#define PACIENTE_H

#define MAX 101

typedef struct Paciente {
    int codigo;
    char nome[50];
    char cpf[15];
    int idade;
    int disponivel;
    struct Paciente* prox;
} Paciente;

Paciente* criarPaciente(int codigo, char* nome, char* cpf, int idade);
void inserirPaciente(Paciente** tab, Paciente* p);
void excluirPaciente(Paciente** tab, int codigo);
void imprimirPacientes(Paciente** tab);

#endif
