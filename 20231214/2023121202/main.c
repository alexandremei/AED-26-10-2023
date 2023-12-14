#include <stdio.h>
#include "lista_dinamica.h"

int main() {
  lista L = criar_lista();

  inserir_fim(&L, 1);
  inserir_fim(&L, 2);
  inserir_fim(&L, 3);
  inserir_fim(&L, 4);
  inserir_fim(&L, 5);

  lista L1 = inverter(L);

  printf("L1 (invertida): ");
  while (L1 != NULL) {
    printf("%d ", L1->valor);
    L1 = L1->proximo;
  }
  printf("\n");

  L1 = reverter_ordenado(L);

  printf("L1 (invertida em ordem inversa): ");
  while (L1 != NULL) {
    printf("%d ", L1->valor);
    L1 = L1->proximo;
  }
  printf("\n");

  lista L2 = copiar(L);

  printf("L2 (copia de L): ");
  while (L2 != NULL) {
    printf("%d ", L2->valor);
    L2 = L2->proximo;
  }
  printf("\n");

  lista L3 = criar_lista();
  inserir_fim(&L3, 6);
  inserir_fim(&L3, 7);
  L3 = concatenar(L, L3);

  printf("L3 (L concatenada com outra lista): ");
  while (L3 != NULL) {
    printf("%d ", L3->valor);
    L3 = L3->proximo;
  }
  printf("\n");

  lista L4 = criar_lista();
  inserir_fim(&L4, 8);
  inserir_fim(&L4, 9);
  L4 = intercalar(L, L4);

  printf("L4 (L intercalada com outra lista): ");
  while (L4 != NULL) {
    printf("%d ", L4->valor);
    L4 = L4->proximo;
  }
  printf("\n");

  liberar_lista(L);
  liberar_lista(L1);
  liberar_lista(L2);
  liberar_lista(L3);
  liberar_lista(L4);

  return 0;
}
