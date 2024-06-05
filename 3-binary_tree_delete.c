#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: the pointer to the root node of the tree to delete
 *
 * Return: nothing
 */


void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *leftChild = NULL;
	binary_tree_t *rightChild = NULL;

	if (tree != NULL)
	{
		parent = tree;
		leftChild = tree->left;
		rightChild = tree->right;
		free(parent);
		if (leftChild)
			binary_tree_delete(leftChild);
		if (rightChild)
			binary_tree_delete(rightChild);
	}
}
