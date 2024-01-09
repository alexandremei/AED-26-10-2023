#include <stdio.h>
#include "paciente.h"

int main() {
    Paciente* paciente1 = criar_paciente(1, "Joao", "12345678901", 30);
    Paciente* paciente2 = criar_paciente(2, "Maria", "10987654321", 25);
    paciente1->proximo = paciente2;

    Paciente* atual = paciente1;
    while (atual != NULL) {
        printf("Codigo: %d\n", atual->codigo);
        printf("Nome: %s\n", atual->nome);
        printf("CPF: %s\n", atual->cpf);
        printf("Idade: %d\n", atual->idade);
        atual = atual->proximo;
    }

    excluir_paciente(paciente2);
    excluir_paciente(paciente1);
    return 0;
}
