#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftChildNode;
	binary_tree_t *previousLeftChildNode;

	leftChildNode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (leftChildNode == NULL)
		return (NULL);

	leftChildNode->parent = parent;
	leftChildNode->n = value;
	leftChildNode->right = NULL;
	leftChildNode->left = parent->left;
	previousLeftChildNode = parent->left;

	if (previousLeftChildNode != NULL)
		previousLeftChildNode->parent = leftChildNode;
	parent->left = leftChildNode;
	return (leftChildNode);

}
