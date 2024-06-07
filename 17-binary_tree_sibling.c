#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling or NULL if node is NULL,
 * parent is NULL or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *leftSibling = NULL;
	binary_tree_t *rightSibling = NULL;

	if (node == NULL)
		return (NULL);

	parent = node->parent;

	if (parent == NULL)
		return (NULL);
	leftSibling = parent->left;
	rightSibling = parent->right;

	if (node == leftSibling)
		if (rightSibling != NULL)
			return (rightSibling);
	if (node == rightSibling)
		if (leftSibling != NULL)
			return (leftSibling);
	return (NULL);

}
