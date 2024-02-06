#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Node* create_node(int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* insert_node(Node* root, int key) {
    if (root == NULL) {
        return create_node(key);
    }
    if (key < root->key) {
        root->left = insert_node(root->left, key);
    } else if (key > root->key) {
        root->right = insert_node(root->right, key);
    }
    return root;
}

void print_tree(Node* root) {
    if (root != NULL) {
        print_tree(root->left);
        printf("%d ", root->key);
        print_tree(root->right);
    }
}

int count_nodes(Node* root) {
    if (root == NULL) {
        return 0;
    } else {
        return 1 + count_nodes(root->left) + count_nodes(root->right);
    }
}

Node* search_node(Node* root, int key) {
    if (root == NULL || root->key == key) {
        return root;
    }
    if (root->key < key) {
        return search_node(root->right, key);
    }
    return search_node(root->left, key);
}

void preorder_traversal(Node* root) {
    if (root != NULL) {
        printf("%d ", root->key);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void inorder_traversal(Node* root) {
    if (root != NULL) {
        inorder_traversal(root->left);
        printf("%d ", root->key);
        inorder_traversal(root->right);
    }
}

void postorder_traversal(Node* root) {
    if (root != NULL) {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d ", root->key);
    }
}
