#include "binary_trees.h"

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


