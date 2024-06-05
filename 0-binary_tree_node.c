#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *treeNode = NULL;

	treeNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	/* Node creation failed */
	if (treeNode == NULL)
		return (NULL);
	/* set the value */
	treeNode->n = value;
	/* Assign parent of treeNode to parent argument */
	treeNode->parent = parent;
	/* Initialize the left and right pointers */
	treeNode->right = NULL;
	treeNode->left = NULL;
	return (treeNode);
}

