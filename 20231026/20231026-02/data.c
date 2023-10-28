#include <stdio.h>
#include "data.h"

void preencherData(Data *data, int dia, int mes, int ano) {
    data->dia = dia;
    data->mes = mes;
    data->ano = ano;
}

void imprimirData(const Data *data) {
    printf("%02d/%02d/%04d\n", data->dia, data->mes, data->ano);
}
