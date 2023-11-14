
#include "calculo.h"

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int max_elemento_recursivo(int arr[], int n, int index) {
    if (index == n - 1) {
        return arr[index];
    }
    return max(arr[index], max_elemento_recursivo(arr, n, index + 1));
}

int max_elemento(int arr[], int n) {
    return max_elemento_recursivo(arr, n, 0);
}

int min_elemento_recursivo(int arr[], int n, int index) {
    if (index == n - 1) {
        return arr[index];
    }
    return min(arr[index], min_elemento_recursivo(arr, n, index + 1));
}

int min_elemento(int arr[], int n) {
    return min_elemento_recursivo(arr, n, 0);
}

int soma_elemento_recursivo(int arr[], int n, int index) {
    if (index == n) {
        return 0;
    }
    return arr[index] + soma_elemento_recursivo(arr, n, index + 1);
}

int soma_elemento(int arr[], int n) {
    return soma_elemento_recursivo(arr, n, 0);
}

int produto_elemento_recursivo(int arr[], int n, int index) {
    if (index == n) {
        return 1;
    }
    return arr[index] * produto_elemento_recursivo(arr, n, index + 1);
}

int produto_elemento(int arr[], int n) {
    return produto_elemento_recursivo(arr, n, 0);
}
