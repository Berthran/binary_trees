#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return:  the height of the binary tree of 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;
	size_t heightOfLeft;
	size_t heightOfRight;

	if (tree == NULL)
		return (0);

	leftChild = tree->left;
	rightChild = tree->right;

	if (leftChild == NULL && rightChild == NULL)
		return (0);

	heightOfLeft = 1 + binary_tree_height(leftChild);
	heightOfRight = 1 + binary_tree_height(rightChild);

	if (heightOfRight >= heightOfLeft)
		return (heightOfRight);
	return (heightOfLeft);
}


