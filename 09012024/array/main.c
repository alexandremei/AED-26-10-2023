#include <stdio.h>
#include "paciente.h"

int main() {
    Paciente* paciente = criar_paciente(1, "Joao", "12345678901", 30);
    printf("Codigo: %d\n", paciente->codigo);
    printf("Nome: %s\n", paciente->nome);
    printf("CPF: %s\n", paciente->cpf);
    printf("Idade: %d\n", paciente->idade);
    excluir_paciente(paciente);
    return 0;
}
