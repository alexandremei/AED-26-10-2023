#include <stdio.h>
#include "paciente.h"

int main() {
    Paciente* tab[MAX] = {NULL};

    Paciente* p1 = criarPaciente(123, "Joao", "111.111.111-11", 30);
    inserirPaciente(tab, p1);

    Paciente* p2 = criarPaciente(456, "Maria", "222.222.222-22", 25);
    inserirPaciente(tab, p2);

    printf("Pacientes antes da exclusao:\n");
    imprimirPacientes(tab);

    excluirPaciente(tab, 123);

    printf("Pacientes depois da exclusao:\n");
    imprimirPacientes(tab);

    return 0;
}
