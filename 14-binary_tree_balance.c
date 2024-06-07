#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance
 *
 * Return: the balance factor of the binary tree or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;
	int heightOfLeftSubtree = 0;
	int heightOfRightSubtree = 0;

	if (tree == NULL)
		return (0);

	leftChild = tree->left;
	rightChild = tree->right;

	if (leftChild == NULL && rightChild == NULL)
		return (0);

	if (leftChild)
		heightOfLeftSubtree = 1 + binary_tree_height(leftChild);
	if (rightChild)
		heightOfRightSubtree = 1 + binary_tree_height(rightChild);
	return (heightOfLeftSubtree - heightOfRightSubtree);
}

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
