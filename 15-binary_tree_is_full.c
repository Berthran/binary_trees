#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * A full binary tree is one in which all the nodes have either
 * 0 or 2 children
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 if not or if NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t sizeOfTree;

	if (tree == NULL)
		return (0);

	sizeOfTree = binary_tree_size(tree);

	if (sizeOfTree % 2 == 0)
		return (0);
	return (1);
}


/**
 * binary_tree_size - measures the size of a binary tree
 * The size is the number of nodes in the binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the size of 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
        binary_tree_t *leftChild = NULL;
        binary_tree_t *rightChild = NULL;

        if (tree == NULL)
                return (0);

        leftChild = tree->left;
        rightChild = tree->right;

        return (1 + binary_tree_size(leftChild) + binary_tree_size(rightChild));
}
