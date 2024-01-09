#include <stdlib.h>
#include <string.h>
#include "paciente.h"

Paciente* criar_paciente(int codigo, char* nome, char* cpf, int idade) {
    Paciente* paciente = (Paciente*) malloc(sizeof(Paciente));
    paciente->codigo = codigo;
    strncpy(paciente->nome, nome, sizeof(paciente->nome));
    strncpy(paciente->cpf, cpf, sizeof(paciente->cpf));
    paciente->idade = idade;
    paciente->proximo = NULL;
    return paciente;
}

void excluir_paciente(Paciente* paciente) {
    free(paciente);
}
