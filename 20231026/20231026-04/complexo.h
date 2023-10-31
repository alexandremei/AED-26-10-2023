#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
    float parteReal;
    float parteImaginaria;
} Complexo;

void criarComplexo(Complexo *numeroComplexo, float parteReal, float parteImaginaria);
void destruirComplexo(Complexo *numeroComplexo);
void somaComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado);
void subtrairComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado);
void multiplicarComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado);
void dividirComplexos(const Complexo *numero1, const Complexo *numero2, Complexo *resultado);
float obterParteReal(const Complexo *numeroComplexo);
float obterParteImaginaria(const Complexo *numeroComplexo);

#endif
