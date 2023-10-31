#ifndef PONTO_H
#define PONTO_H

typedef struct ponto {
     float x;
     float y;
}Ponto;

Ponto * Cria_ponto(float x, float y);
void Libera_ponto (Ponto *pto); 
int Acessa_ponto(Ponto *pto, float *x, float *y); 
int Atribuir_ponto(Ponto *pto, float x, float y);
float Distancia_ponto(Ponto *ptol, Ponto *pto2);

#endif