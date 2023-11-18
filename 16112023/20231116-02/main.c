#include <stdio.h>
#include "vetor.h"

int main() {
    Vetor v1 = {1.0, 2.0, 3.0};
    Vetor v2 = {4.0, 5.0, 6.0};
    Vetor resultado;

    soma(&v1, &v2, &resultado);
    printf("Soma: (%.2f, %.2f, %.2f)\n", resultado.x, resultado.y, resultado.z);

    float produto = produto_escalar(&v1, &v2);
    printf("Produto escalar: %.2f\n", produto);

    return 0;
}
