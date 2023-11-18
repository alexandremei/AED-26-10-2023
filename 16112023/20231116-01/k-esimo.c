#include <stdio.h>
#include "k-esimo.h"

int k_esimo_digito_recursivo(int n, int k, int num_digits) {
    if (k > num_digits || k < 1) {
        printf("Erro: k deve ser um valor entre 1 e %d.\n", num_digits);
        return -1;
    } else if (k == 1) {
        return n % 10;
    } else {
        return k_esimo_digito_recursivo(n / 10, k - 1, num_digits);
    }
}

int k_esimo_digito(int n, int k) {
    int num_digits = 0;
    int temp = n;

    while (temp != 0) {
        num_digits++;
        temp /= 10;
    }

    return k_esimo_digito_recursivo(n, k, num_digits);
}
