#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct elemento {
    Aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elem;

Lista* cria_lista() {
    Lista* li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL)
        *li = NULL;
    return li;
}

void libera_lista(Lista* li) {
    if(li != NULL) {
        Elem* no;
        while((*li) != NULL) {
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int tamanho_lista(Lista* li) {
    if(li == NULL) return 0;
    int cont = 0;
    Elem* no = *li;
    while(no != NULL) {
        cont++;
        no = no->prox;
    }
    return cont;
}

int lista_cheia(Lista* li) {
    return tamanho_lista(li) >= MAX;
}

int lista_vazia(Lista* li) {
    if(li == NULL)
        return 1;
    if(*li == NULL)
        return 1;
    return 0;
}

int insere_lista_ordenada(Lista* li, Aluno al) {
    if(li == NULL) return 0;
    if(lista_cheia(li)) return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados = al;
    if(lista_vazia(li)) {
        no->prox = (*li);
        *li = no;
        return 1;
    }
    else {
        Elem *ant, *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula) {
            ant = atual;
            atual = atual->prox;
        }
        if(atual == *li) {
            no->prox = (*li);
            *li = no;
        } else {
            no->prox = ant->prox;
            ant->prox = no;
        }
        return 1;
    }
}

int remove_lista(Lista* li, int mat) {
    if(li == NULL) return 0;
    if((*li) == NULL) return 0;
    Elem *ant, *no = *li;
    while(no != NULL && no->dados.matricula != mat) {
        ant = no;
        no = no->prox;
    }
    if(no == NULL) return 0;
    if(no == *li)
        *li = no->prox;
    else
        ant->prox = no->prox;
    free(no);
    return 1;
}

void imprime_lista(Lista* li) {
    if(li == NULL) return;
    Elem* no = *li;
    while(no != NULL) {
        printf("Matricula: %d\n",no->dados.matricula);
        printf("Nome: %s\n",no->dados.nome);
        printf("Idade: %d\n\n",no->dados.idade);
        no = no->prox;
    }
}
