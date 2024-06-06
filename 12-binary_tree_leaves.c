#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: the number of leaves or 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;
	size_t numberOfLeftLeaves;
	size_t numberOfRightLeaves;

	if (tree == NULL)
		return (0);

	leftChild = tree->left;
	rightChild = tree->right;

	if (leftChild == NULL && rightChild == NULL)
		return (1);

	numberOfLeftLeaves = binary_tree_leaves(leftChild);
	numberOfRightLeaves = binary_tree_leaves(rightChild);
	return (numberOfLeftLeaves + numberOfRightLeaves);
}
