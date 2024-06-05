#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;

	if (tree != NULL && func != NULL)
	{
		if (tree != NULL)
		{
			func(tree->n);
			leftChild = tree->left;
			rightChild = tree->right;
			if (leftChild)
				binary_tree_preorder(leftChild, func);
			if (rightChild)
				binary_tree_preorder(rightChild, func);
		}

	}
}
