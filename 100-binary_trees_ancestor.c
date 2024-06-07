#include "binary_trees.h"


binary_tree_t *get_sibling(const binary_tree_t *node);

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to tle lowest comon ancestor node of the two given nodes
 * Return NULL is no common ancestor is found.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *parentOfFirst = NULL;
	binary_tree_t *parentOfSecond = NULL;
	binary_tree_t *siblingOfFirst = NULL;
	binary_tree_t *closestAncestor = NULL;

	if (first == NULL || second == NULL)
		return (NULL);

	parentOfFirst = first->parent;
	parentOfSecond = second->parent;

	if (parentOfFirst == NULL && parentOfSecond != first)
		return (NULL);
	if (parentOfSecond == NULL && parentOfFirst != second)
		return (NULL);
	/* first and second are thesame */
	if (first == second)
	{
		if (first->parent->right == first)
			return (first->parent->right);
		return (first->parent->left);
	}
	/* first and second are children of the same parent */
	siblingOfFirst = get_sibling(first);
	if (second == siblingOfFirst)
		return (parentOfFirst);
	/* first is a child of second */
	if (first == parentOfSecond)
		return (parentOfSecond);
	/* second is a child of first */
	if (second == parentOfFirst)
		return (parentOfFirst);
	/* first and second are children of different parent */
	closestAncestor = binary_trees_ancestor(parentOfFirst, second);
	if (closestAncestor == NULL)
		closestAncestor = binary_trees_ancestor(parentOfSecond, first);
	return (closestAncestor);

}

/**
 * get_sibling - finds the sibling of a node.
 * @node: a pointer to the node to find the sibling
 *
 * Return: pointer to the sibling or NULL if node is NULL,
 * parent is NULL or node has no sibling
 */

binary_tree_t *get_sibling(const binary_tree_t *node)
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
