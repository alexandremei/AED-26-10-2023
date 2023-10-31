#include "complexo.h"

void criarComplexo(Complexo *numeroComplexo, float parteReal, float parteImaginaria) {
    numeroComplexo->parteReal = parteReal;
    numeroComplexo->parteImaginaria = parteImaginaria;
}

void destruirComplexo(Complexo *numeroComplexo) {
}

void somaComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado) {
    resultado->parteReal = numero1->parteReal + numero2->parteReal;
    resultado->parteImaginaria = numero1->parteImaginaria + numero2->parteImaginaria;
}

void subtrairComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado) {
    resultado->parteReal = numero1->parteReal - numero2->parteReal;
    resultado->parteImaginaria = numero1->parteImaginaria - numero2->parteImaginaria;
}

void multiplicarComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado) {
    resultado->parteReal = (numero1->parteReal * numero2->parteReal) - (numero1->parteImaginaria * numero2->parteImaginaria);
    resultado->parteImaginaria = (numero1->parteReal * numero2->parteImaginaria) + (numero1->parteImaginaria * numero2->parteReal);
}

void dividirComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado) {
    float divisor = (numero2->parteReal * numero2->parteReal) + (numero2->parteImaginaria * numero2->parteImaginaria);
    resultado->parteReal = ((numero1->parteReal * numero2->parteReal) + (numero1->parteImaginaria * numero2->parteImaginaria)) / divisor;
    resultado->parteImaginaria = ((numero1->parteImaginaria * numero2->parteReal) - (numero1->parteReal * numero2->parteImaginaria)) / divisor;
}

float obterParteReal(const Complexo *numeroComplexo) {
    return numeroComplexo->parteReal;
}

float obterParteImaginaria(const Complexo *numeroComplexo) {
    return numeroComplexo->parteImaginaria;
}
