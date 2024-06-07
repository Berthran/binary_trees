#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * A perfect binary tree is one in which all the all the internal nodes
 * have exactly two children and all the leaf nodes are at the same level
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 if not or if NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t heightOfTree = 0;
	size_t sizeOfTree = 0;
	size_t expectedSizeOfTree = 0;
	size_t numberOfLeafNodes = 0;
	size_t expectedNumberOfLeafNodes = 0;

	if (tree == NULL)
		return (0);

	heightOfTree = binary_tree_height(tree);
	sizeOfTree = binary_tree_size(tree);
	numberOfLeafNodes = binary_tree_leaves(tree);

	expectedSizeOfTree = (2 << heightOfTree) - 1;
	expectedNumberOfLeafNodes = 1 << heightOfTree;

	if (sizeOfTree == expectedSizeOfTree)
		if (numberOfLeafNodes == expectedNumberOfLeafNodes)
			return (1);
	return (0);

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
