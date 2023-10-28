#include <stdio.h>
#include "data.h"

int main() {
    Data data1;
    Data *ponteiroData = &data1;

    preencherData(ponteiroData, 11, 3, 2023);
    imprimirData(ponteiroData);

    return 0;
}
