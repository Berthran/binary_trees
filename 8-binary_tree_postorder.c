#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree using post-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;

	if (tree != NULL && func != NULL)
	{
		leftChild = tree->left;
		rightChild = tree->right;
		if (leftChild)
			binary_tree_postorder(leftChild, func);
		if (rightChild)
			binary_tree_postorder(rightChild, func);
		func(tree->n);
	}
}
