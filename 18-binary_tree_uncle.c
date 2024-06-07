#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node.
 * @node: a pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node or NULL if node is NULL,
 * parent is NULL or node has no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *grandParent = NULL;
	binary_tree_t *rightSon = NULL;
	binary_tree_t *leftSon = NULL;

	if (node == NULL)
		return (NULL);

	parent = node->parent;
	if (parent == NULL)
		return (NULL);

	grandParent = parent->parent;
	if (grandParent == NULL)
		return (NULL);

	leftSon = grandParent->left;
	rightSon = grandParent->right;

	if (parent == leftSon)
		if (rightSon != NULL)
			return (rightSon);
	if (parent == rightSon)
		if (leftSon != NULL)
			return (leftSon);
	return (NULL);

}
