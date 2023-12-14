#include "listas.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Lista* criar_lista() {
  Lista* l = (Lista*) malloc(sizeof(Lista));
  if (l != NULL) {
    *l = NULL;
  }
  return l;
}

void liberar_lista(Lista* l) {
  if (l != NULL && (*l) != NULL) {
    Nodo* aux = *l;
    Nodo* prox;
    do {
      prox = aux->proximo;
      free(aux);
      aux = prox;
    } while (aux != (*l));
    free(l);
  }
}

int inserir_aluno(Lista* l, char* nome, char tipo) {
  Nodo* novo = (Nodo*) malloc(sizeof(Nodo));
  if (novo == NULL) {
    return 0;
  }

  strcpy(novo->nome, nome);

  if ((*l) == NULL) {
    *l = novo;
    if (tipo == 'C' || tipo == 'D') {
      novo->proximo = novo;
      novo->anterior = novo;
    }
  } else {
    if (tipo == 'C') {
      Nodo* ultimo = (*l)->anterior;
      ultimo->proximo = novo;
      novo->anterior = ultimo;
      novo->proximo = *l;
      (*l)->anterior = novo;
    } else if (tipo == 'D') {
      Nodo* primeiro = *l;
      primeiro->anterior = novo;
      novo->proximo = primeiro;
      *l = novo;
    } else {
      Nodo* ultimo = *l;
      while (ultimo->proximo != NULL) {
        ultimo = ultimo->proximo;
      }
      ultimo->proximo = novo;
      novo->anterior = ultimo;
    }
  }

  return 1;
}

void exibir_lista(Lista* l, char tipo) {
  if (l != NULL && (*l) != NULL) {
    Nodo* aux = *l;
    do {
      printf("%s ", aux->nome);
      aux = aux->proximo;
    } while (aux != (*l) && tipo == 'C');
    printf("\n");
  }
}