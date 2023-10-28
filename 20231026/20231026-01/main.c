#include <stdio.h>
#include "pessoa.h"

int main() {
    Pessoa pessoa1;
    Pessoa *ponteiroPessoa = &pessoa1;

    preencherDados(ponteiroPessoa, "Alex Texeira dos Santos", "29/09/2000", "123.456.789-00");
    imprimirDados(ponteiroPessoa);

    return 0;
}
