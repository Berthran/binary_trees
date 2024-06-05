#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;

	if (tree != NULL && func != NULL)
	{
		leftChild = tree->left;
		rightChild = tree->right;
		if (leftChild)
			binary_tree_inorder(leftChild, func);
		func(tree->n);
		if (rightChild)
			binary_tree_inorder(rightChild, func);
	}
}
