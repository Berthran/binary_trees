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
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;

	if (tree == NULL)
		return (0);

	leftChild = tree->left;
	rightChild = tree->right;

	if (leftChild == NULL && rightChild == NULL)
		return (1);
	return (binary_tree_is_full(leftChild) && binary_tree_is_full(rightChild));
}
