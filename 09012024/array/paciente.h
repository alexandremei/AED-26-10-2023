#ifndef PACIENTE_H
#define PACIENTE_H

typedef struct Paciente {
    int codigo;
    char nome[50];
    char cpf[12];
    int idade;
} Paciente;

Paciente* criar_paciente(int codigo, char* nome, char* cpf, int idade);
void excluir_paciente(Paciente* paciente);

#endif
