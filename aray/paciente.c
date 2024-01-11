#include <stdlib.h>
#include <string.h>
#include "paciente.h"

Paciente* criar_paciente(int codigo, char* nome, char* cpf, int idade) {
    Paciente* paciente = (Paciente*) malloc(sizeof(Paciente));
    paciente->codigo = codigo;
    strcpy(paciente->nome, nome);
    strcpy(paciente->cpf, cpf);
    paciente->idade = idade;
    paciente->disponivel = 0;
    return paciente;
}

void destruir_paciente(Paciente* paciente) {
    free(paciente);
}
