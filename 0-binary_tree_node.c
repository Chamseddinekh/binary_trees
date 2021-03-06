#include "binary_trees.h"

/**
 * binary_tree_node -  inserts a node as the left-child of another node
 * @parent: pointer node
 * @value: node value
 *
 * Return: a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
