#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root = NULL;

    root = binary_tree_node(NULL, 98);

    /* Case 1: parent exists but no right node */
    binary_tree_insert_right(root, 70);
    binary_tree_print(root);

    printf("\n");

    /* Case 2: parent exits, no right child */
    binary_tree_insert_right(root->right, 65);
    binary_tree_print(root);
   
    printf("\n");

    /* Case 3: parent exits, right child exists */

    binary_tree_insert_right(root->right->right, 75);
    binary_tree_print(root);

    printf("\n");

    binary_tree_insert_right(root->right, 60);
    binary_tree_print(root);
   
    printf("\n");

    binary_tree_insert_right(root->right, 50);
    binary_tree_print(root);
    
    printf("\n");

    binary_tree_insert_right(root->right->right, 45);
    binary_tree_print(root);

    printf("\n");
    /*
    root->left = binary_tree_node(root, 12);
    printf("\n");
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(NULL, 70);
    binary_tree_print(root);*/
    return (0);
}
