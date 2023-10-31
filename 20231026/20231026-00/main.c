#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "ponto.h"

int main()
{
    Ponto *m_pto;
    float ext_x, ext_y; 
    m_pto=Cria_ponto (3.0, 2.3);

    Acessa_ponto (m_pto, &ext_x, &ext_y); 
    
    printf("\nValor de x= %f", m_pto->x); 
    printf("\nValor de y= %f", m_pto->y);

    Atribuir_ponto (m_pto, 5.0, 5.3);

    Acessa_ponto (m_pto, &ext_x, &ext_y);

    printf("\nValor de x= %f", m_pto->x); 
    printf("\nValor de y= %f", m_pto->y);

    Libera_ponto (m_pto); 
    
    printf("\nHello world!\n");
    return 0;
}