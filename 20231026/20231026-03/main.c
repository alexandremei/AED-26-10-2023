#include <stdio.h>
#include "cubo.h"

int main() {
    Cubo cubo1;
    Cubo *ponteiroCubo = &cubo1;

    inicializarCubo(ponteiroCubo, 5); 
    printf("Lado do Cubo: %.2f\n", obterLado(ponteiroCubo));
    printf("Area do Cubo: %.2f\n", calcularArea(ponteiroCubo));
    printf("Volume do Cubo: %.2f\n", calcularVolume(ponteiroCubo));

    return 0;
}
