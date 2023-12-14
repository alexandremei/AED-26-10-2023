#ifndef LISTA_DINAMICA_H
#define LISTA_DINAMICA_H

struct nodo {
  int valor;
  struct nodo *proximo;
};

typedef struct nodo *lista;

lista criar_lista();
void liberar_lista(lista l);
int vazia(lista l);
int tamanho(lista l);
int get_elemento(lista l, int indice);
void set_elemento(lista l, int indice, int valor);
int inserir_inicio(lista *l, int valor);
int inserir_fim(lista *l, int valor);
int remover_inicio(lista *l);
int remover_fim(lista *l);

lista inverter(lista l);
lista reverter_ordenado(lista l);
lista copiar(lista l1);
lista concatenar(lista l1, lista l2);
lista intercalar(lista l1, lista l2);

#endif
