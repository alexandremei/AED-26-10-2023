#include <stdio.h>
#include "tabelahash.h"
#include "paciente.h"

int main() {
    TabelaHash* ht = criar_tabela();

    Paciente* paciente1 = criar_paciente(1, "Joao", "12345678901", 30);
    inserir_paciente(ht, paciente1);

    Paciente* paciente2 = criar_paciente(2, "Maria", "10987654321", 25);
    inserir_paciente(ht, paciente2);

    Paciente* paciente = buscar_paciente(ht, 1);
    if (paciente != NULL) {
        printf("Paciente encontrado: %s\n", paciente->nome);
    } else {
        printf("Paciente nao encontrado.\n");
    }

    excluir_paciente(ht, 1);

    paciente = buscar_paciente(ht, 1);
    if (paciente != NULL) {
        printf("Paciente encontrado: %s\n", paciente->nome);
    } else {
        printf("Paciente nao encontrado.\n");
    }

    destruir_tabela(ht);

    return 0;
}
