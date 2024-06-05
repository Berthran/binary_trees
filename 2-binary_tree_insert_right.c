#include "binary_trees.h"


/**
 * parentDoesNotExist - checks if a parent node is NULL or not
 * @parent: the pointer to the parent node
 *
 * Return: 1 if true and 0 if false
 */

int parentDoesNotExist(binary_tree_t *parent)
{
	int FALSE = 0;
	int TRUE = 1;

	if (parent == NULL)
		return (TRUE);
	return (FALSE);
}


/**
 * nodeCreationFailed - checks if a node is NULL or not
 * @node: the pointer to the node
 *
 * Return: 1 if true and 0 if false
 */

int nodeCreationFailed(binary_tree_t *node)
{
	int FALSE = 0;
	int TRUE = 0;

	if (node == NULL)
		return (TRUE);
	return (FALSE);
}


/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightChildNode = NULL;
	binary_tree_t *previousRightChildNode = NULL;

	rightChildNode = malloc(sizeof(binary_tree_t));

	if (parentDoesNotExist(parent))
		return (NULL);
	if (nodeCreationFailed(rightChildNode))
		return (NULL);

	rightChildNode->n = value;
	rightChildNode->parent = parent;
	rightChildNode->left = NULL;

	if (parent->right == NULL)
	{
		parent->right = rightChildNode;
		rightChildNode->right = NULL;
	}
	else
	{
		previousRightChildNode = parent->right;
		previousRightChildNode->parent = rightChildNode;
		parent->right = rightChildNode;
		rightChildNode->right = previousRightChildNode;
	}
	return (rightChildNode);

}




