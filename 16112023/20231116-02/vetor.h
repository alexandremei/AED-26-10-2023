#ifndef VETOR_H
#define VETOR_H

typedef struct {
    float x;
    float y;
    float z;
} Vetor;

void soma(Vetor* v1, Vetor* v2, Vetor* resultado);
float produto_escalar(Vetor* v1, Vetor* v2);

#endif
