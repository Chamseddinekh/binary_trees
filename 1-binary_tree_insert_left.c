#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node on the left
 * @parent: pointer node
 * @value: node value
 *
 * Return: a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_left_node;
if (!parent)
return (NULL);
new_left_node = malloc(sizeof(binary_tree_t));
if (!new_left_node)
return (NULL);

if (parent->left == NULL)
{
new_left_node->parent = parent;
new_left_node->left = parent->left;
new_left_node->right = NULL;
new_left_node->n = value;
}
parent->left = new_left_node;
return (new_left_node);
}
