#ifndef ARVORE_H
#define ARVORE_H

typedef struct Node {
    int key;
    struct Node* left;
    struct Node* right;
} Node;

Node* create_node(int key);
Node* insert_node(Node* root, int key);
void print_tree(Node* root);
int count_nodes(Node* root);
Node* search_node(Node* root, int key);
void preorder_traversal(Node* root);
void inorder_traversal(Node* root);
void postorder_traversal(Node* root);

#endif 
