#ifndef LISTA_LIGADA_ESTATICA_H
#define LISTA_LIGADA_ESTATICA_H

#define TAMANHO_MAXIMO 100

typedef struct {
    int matricula;
    char nome[50];
    int idade;
} Aluno;

typedef struct {
    Aluno elementos[TAMANHO_MAXIMO];
    int tamanho;
} ListaLigada;

void inicializar_lista(ListaLigada* lista);
void liberar_lista(ListaLigada* lista);
int quantidade_elementos(ListaLigada* lista);
int lista_cheia(ListaLigada* lista);
int lista_vazia(ListaLigada* lista);
void exibir_elementos(ListaLigada* lista);
void inserir_elemento(ListaLigada* lista, int matricula, char* nome, int idade);
void inserir_elemento_ordenado(ListaLigada* lista, int matricula, char* nome, int idade);
void excluir_elemento(ListaLigada* lista, int matricula);
void alterar_matricula(ListaLigada* lista, int matricula_antiga, int matricula_nova);

#endif
