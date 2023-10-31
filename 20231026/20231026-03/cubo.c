#include "cubo.h"

void inicializarCubo(Cubo *cubo, float lado) {
    cubo->lado = lado;
}

float obterLado(const Cubo *cubo) {
    return cubo->lado;
}

float calcularArea(const Cubo *cubo) {
    return 6 * cubo->lado * cubo->lado;
}

float calcularVolume(const Cubo *cubo) {
    return cubo->lado * cubo->lado * cubo->lado;
}
