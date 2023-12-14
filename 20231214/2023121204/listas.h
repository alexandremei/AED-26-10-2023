#ifndef LISTAS_H
#define LISTAS_H

typedef struct nodo {
  char nome[50];
  struct nodo *proximo;
  struct nodo *anterior;
} Nodo;

typedef Nodo* Lista;

Lista* criar_lista();
void liberar_lista(Lista* l);
int inserir_aluno(Lista* l, char* nome, char tipo);
void exibir_lista(Lista* l, char tipo);

#endif