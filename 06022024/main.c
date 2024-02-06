#include <stdio.h>
#include "arvore.h"

int main() {
    Node* root = NULL;

    int elements[] = {24, 10, 32, 5, 12, 29, 35};
    for (int i = 0; i < sizeof(elements)/sizeof(elements[0]); i++) {
        root = insert_node(root, elements[i]);
    }

    printf("Arvore: ");
    print_tree(root);
    printf("\n");

    printf("Numero de nos: %d\n", count_nodes(root));

    int key = 24;
    Node* node = search_node(root, key);
    printf("Busca pelo elemento %d: %s\n", key, node ? "Encontrado" : "Nao encontrado");

    printf("Pre-ordem: ");
    preorder_traversal(root);
    printf("\n");

    printf("In-ordem: ");
    inorder_traversal(root);
    printf("\n");

    printf("Pos-ordem: ");
    postorder_traversal(root);
    printf("\n");

    return 0;
}
