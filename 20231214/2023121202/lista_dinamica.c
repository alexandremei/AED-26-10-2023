#include <stdio.h>
#include <stdlib.h>
#include "lista_dinamica.h"

lista criar_lista() {
  return NULL;
}

void liberar_lista(lista l) {
  if (l != NULL) {
    liberar_lista(l->proximo);
    free(l);
  }
}

int vazia(lista l) {
  return l == NULL;
}

int tamanho(lista l) {
  int tamanho = 0;
  while (l != NULL) {
    tamanho++;
    l = l->proximo;
  }
  return tamanho;
}

int get_elemento(lista l, int indice) {
  if (indice < 0 || indice >= tamanho(l)) {
    return -1;
  }

  int i = 0;
  while (i < indice) {
    l = l->proximo;
    i++;
  }

  return l->valor;
}

void set_elemento(lista l, int indice, int valor) {
  if (indice < 0 || indice >= tamanho(l)) {
    return;
  }

  int i = 0;
  while (i < indice) {
    l = l->proximo;
    i++;
  }

  l->valor = valor;
}

int inserir_inicio(lista *l, int valor) {
  lista novo = malloc(sizeof(struct nodo));
  if (novo == NULL) {
    return -1;
  }

  novo->valor = valor;
  novo->proximo = *l;
  *l = novo;

  return 0;
}

int inserir_fim(lista *l, int valor) {
  lista novo = malloc(sizeof(struct nodo));
  if (novo == NULL) {
    return -1;
  }

  novo->valor = valor;
  novo->proximo = NULL;

  if (*l == NULL) {
    *l = novo;
  } else {
    lista aux = *l;
    while (aux->proximo != NULL) {
      aux = aux->proximo;
    }
    aux->proximo = novo;
  }

  return 0;
}

int remover_inicio(lista *l) {
  if (*l == NULL) {
    return -1;
  }

  lista aux = *l;
  *l = (*l)->proximo;
  free(aux);

  return 0;
}

int remover_fim(lista *l) {
  if (*l == NULL) {
    return -1;
  }

  if ((*l)->proximo == NULL) {
    free(*l);
    *l = NULL;
    return 0;
  }

  lista aux = *l;
  while (aux->proximo->proximo != NULL) {
    aux = aux->proximo;
  }

  lista remover = aux->proximo;
  aux->proximo = NULL;
  free(remover);

  return 0;
}

lista inverter(lista l) {
  lista l1 = NULL;

  while (l != NULL) {
    inserir_fim(&l1, l->valor);
    l = l->proximo;
  }

  return l1;
}

lista reverter_ordenado(lista l) {
  lista l1 = NULL;

  while (l != NULL) {
    inserir_inicio(&l1, l->valor);
    l = l->proximo;
  }

  return l1;
}

lista copiar(lista l1) {
  lista l2 = NULL;

  while (l1 != NULL) {
    inserir_fim(&l2, l1->valor);
    l1 = l1->proximo;
  }

  return l2;
}

lista concatenar(lista l1, lista l2) {
  lista l3 = l1;

  while (l1->proximo != NULL) {
    l1 = l1->proximo;
  }

  l1->proximo = l2;

  return l3;
}

lista intercalar(lista l1, lista l2) {
  lista l3 = NULL;

  while (l1 != NULL && l2 != NULL) {
    if (l1->valor <= l2->valor) {
      inserir_fim(&l3, l1->valor);
      l1 = l1->proximo;
    } else {
      inserir_fim(&l3, l2->valor);
      l2 = l2->proximo;
    }
  }

  if (l1 != NULL) {
    while (l1 != NULL) {
      inserir_fim(&l3, l1->valor);
      l1 = l1->proximo;
    }
  } else {
    while (l2 != NULL) {
      inserir_fim(&l3, l2->valor);
      l2 = l2->proximo;
    }
  }

  return l3;
}
