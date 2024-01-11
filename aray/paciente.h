typedef struct Paciente {
    int codigo;
    char nome[100];
    char cpf[15];
    int idade;
    int disponivel;
} Paciente;

Paciente* criar_paciente(int codigo, char* nome, char* cpf, int idade);
void destruir_paciente(Paciente* paciente);