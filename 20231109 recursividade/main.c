#include <stdio.h>
#include "calculo.h"

int main() {
    int arr[] = {5, 10, 3, 7, 8}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Elemento maximo: %d\n", max_elemento(arr, n));
    printf("Elemento minimo: %d\n", min_elemento(arr, n));
    printf("Soma dos elementos: %d\n", soma_elemento(arr, n));
    printf("Produto dos elementos: %d\n", produto_elemento(arr, n));

    return 0;
}
