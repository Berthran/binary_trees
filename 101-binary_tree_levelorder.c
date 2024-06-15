#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverses a binary tree using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;

	if (tree != NULL && func != NULL)
	{
		/* Display root node */
		if (tree->parent == NULL)
			func(tree->n);
		leftChild = tree->left;
		/* Dislay left child if there is */
		if (leftChild)
			func(leftChild->n);
		rightChild = tree->right;
		/* Display right child if there is */
		if (rightChild)
			func(rightChild->n);
		/* Recursive call */
		binary_tree_levelorder(leftChild, func);
		binary_tree_levelorder(rightChild, func);
	}
}
