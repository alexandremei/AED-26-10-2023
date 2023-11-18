#include <stdio.h>
#include "k-esimo.h"

int main() {
    int n = 2845;
    int k = 3;

    printf("K_esimoDigito(%d, %d) = %d\n", n, k, k_esimo_digito(n, k));

    return 0;
}
