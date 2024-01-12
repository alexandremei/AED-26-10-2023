#ifndef PACIENTE_H
#define PACIENTE_H

#define MAX 101

typedef struct Paciente {
    int codigo;
    char nome[50];
    char cpf[15];
    int idade;
    int disponivel;
} Paciente;

Paciente* tab[MAX];

Paciente* criarPaciente(int codigo, char* nome, char* cpf, int idade);
void inserirPaciente(Paciente* p);
void excluirPaciente(int codigo);\
void imprimirPacientes();

#endif
