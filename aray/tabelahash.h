#define SIZE 101
#include "paciente.h"

typedef struct TabelaHash {
    Paciente* tabela[SIZE];
} TabelaHash;

TabelaHash* criar_tabela();
void inserir_paciente(TabelaHash* ht, Paciente* paciente);
void excluir_paciente(TabelaHash* ht, int codigo);
Paciente* buscar_paciente(TabelaHash* ht, int codigo);
void destruir_tabela(TabelaHash* ht);