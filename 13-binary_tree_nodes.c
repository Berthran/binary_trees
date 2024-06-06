#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1
 * child in the binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the number of leaves or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;
	size_t numberOfLeftNodes;
	size_t numberOfRightNodes;

	if (tree == NULL)
		return (0);

	leftChild = tree->left;
	rightChild = tree->right;

	if (leftChild == NULL && rightChild == NULL)
		return (0);

	numberOfLeftNodes = 1 + binary_tree_nodes(leftChild);
	numberOfRightNodes = 1 + binary_tree_nodes(rightChild);
	return (numberOfLeftNodes + numberOfRightNodes - 1);
}
