#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to tle lowest comon ancestor node of the two given nodes
 * Return NULL is no common ancestor is found.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
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
