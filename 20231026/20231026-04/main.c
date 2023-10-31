#include <stdio.h>
#include "complexo.h"

int main() {
    Complexo z1, z2, resultado;
    Complexo *ponteiroZ1 = &z1;
    Complexo *ponteiroZ2 = &z2;
    Complexo *ponteiroResultado = &resultado;

    
    criarComplexo(ponteiroZ1, 2, 3); 
    criarComplexo(ponteiroZ2, 1, -1); 

    
    somaComplexos(ponteiroZ1, ponteiroZ2, ponteiroResultado);
    printf("Soma: %.2f + %.2fi\n", obterParteReal(ponteiroResultado), obterParteImaginaria(ponteiroResultado));

    
    subtrairComplexos(ponteiroZ1, ponteiroZ2, ponteiroResultado);
    printf("Subtracao: %.2f + %.2fi\n", obterParteReal(ponteiroResultado), obterParteImaginaria(ponteiroResultado));

    
    multiplicarComplexos(ponteiroZ1, ponteiroZ2, ponteiroResultado);
    printf("Multiplicacao: %.2f + %.2fi\n", obterParteReal(ponteiroResultado), obterParteImaginaria(ponteiroResultado));

    
    dividirComplexos(ponteiroZ1, ponteiroZ2, ponteiroResultado);
    printf("Divisao: %.2f + %.2fi\n", obterParteReal(ponteiroResultado), obterParteImaginaria(ponteiroResultado));

    
    destruirComplexo(ponteiroZ1);
    destruirComplexo(ponteiroZ2);

    return 0;
}
