#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int* elementos;
    int quantidade;
} LISTA;

LISTA* criarLista(int quantidade);
void liberarLista(LISTA* lista);
void inserirElemento(LISTA* lista, int elemento);
void imprimirLista(LISTA* lista);
int buscarSequencial(LISTA* lista, int elemento);
int buscarSequencialOrdenada(LISTA* lista, int elemento);
int buscaBinaria(LISTA* lista, int elemento);
int buscarMaiorElemento(LISTA* lista);
int buscarMenorElemento(LISTA* lista);
int calcularSoma(LISTA* lista);
int calcularProduto(LISTA* lista);

#endif
