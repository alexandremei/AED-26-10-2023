#include <stdio.h>
#include "listas.h"

int main() {
  Lista* l1 = criar_lista();
  Lista* l2 = criar_lista();
  Lista* l3 = criar_lista();

  inserir_aluno(l1, "Ana", 'D');
  inserir_aluno(l1, "Bob", 'D');
  inserir_aluno(l1, "Carlos", 'D');
  inserir_aluno(l1, "David", 'D');

  inserir_aluno(l2, "Eva", 'C');
  inserir_aluno(l2, "Frank", 'C');
  inserir_aluno(l2, "George", 'C');
  inserir_aluno(l2, "Jill", 'C');

  inserir_aluno(l3, "Liam", 'L');
  inserir_aluno(l3, "Mia", 'L');
  inserir_aluno(l3, "Noah", 'L');
  inserir_aluno(l3, "Olivia", 'L');
  inserir_aluno(l3, "Sophia", 'L');
  inserir_aluno(l3, "William", 'L');
  inserir_aluno(l3, "Yvonne", 'L');

  printf("Lista l1 (A-D): ");
  exibir_lista(l1, 'D');

  printf("Lista l2 (E-J): ");
  exibir_lista(l2, 'C');

  printf("Lista l3 (L-Y): ");
  exibir_lista(l3, 'L');

  liberar_lista(l1);
  liberar_lista(l2);
  liberar_lista(l3);


  return 0;
}
