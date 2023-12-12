#ifndef LISTA_H
#define LISTA_H

#define MAX 10

typedef struct aluno {
    int matricula;
    char nome[50];
    int idade;
} Aluno;

typedef struct elemento* Lista;

Lista* cria_lista();
void libera_lista(Lista* li);
int tamanho_lista(Lista* li);
int lista_cheia(Lista* li);
int lista_vazia(Lista* li);
int insere_lista_ordenada(Lista* li, Aluno al);
int remove_lista(Lista* li, int mat);
void imprime_lista(Lista* li);

#endif
