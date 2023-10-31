#ifndef CUBO_H
#define CUBO_H

typedef struct {
    float lado;
} Cubo;

void inicializarCubo(Cubo *cubo, float lado);
float obterLado(const Cubo *cubo);
float calcularArea(const Cubo *cubo);
float calcularVolume(const Cubo *cubo);

#endif
