#ifndef LISTA_H
#define LISTA_H

typedef struct {
    int* elementos;
    int quantidade;
} LISTA;

LISTA* criarLista(int quantidade);
void liberarLista(LISTA* lista);
void inserirElemento(LISTA* lista, int elemento);
void inserirElementoOrdenado(LISTA* lista, int elemento);
void imprimirListaIterativo(LISTA* lista);
void imprimirListaRecursivo(LISTA* lista, int indice);
int buscaBinariaRecursiva(LISTA* lista, int elemento, int inicio, int fim);
int buscaBinariaIterativo(LISTA* lista, int elemento);
int buscarMaiorElemento(LISTA* lista, int indice, int atualMaior);
int buscarMenorElemento(LISTA* lista, int indice, int atualMenor);
int calcularSoma(LISTA* lista, int indiceInicial, int indiceFinal);
int calcularProduto(LISTA* lista, int indiceInicial, int indiceFinal);

#endif