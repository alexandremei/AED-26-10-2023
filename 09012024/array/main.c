#include <stdio.h>
#include "paciente.h"

int main() {
    for (int i = 0; i < MAX; i++) {
        tab[i] = NULL;
    }

    Paciente* p1 = criarPaciente(123, "Joao", "111.111.111-11", 30);
    inserirPaciente(p1);

    Paciente* p2 = criarPaciente(456, "Maria", "222.222.222-22", 25);
    inserirPaciente(p2);

    printf("Pacientes antes da exclusao:\n");
    imprimirPacientes();

    excluirPaciente(123);

    printf("Pacientes depois da exclusao:\n");
    imprimirPacientes();

    return 0;
}
