#include "vetor.h"

void soma(Vetor* v1, Vetor* v2, Vetor* resultado) {
    resultado->x = v1->x + v2->x;
    resultado->y = v1->y + v2->y;
    resultado->z = v1->z + v2->z;
}

float produto_escalar(Vetor* v1, Vetor* v2) {
    float produto = v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
    return produto;
}
