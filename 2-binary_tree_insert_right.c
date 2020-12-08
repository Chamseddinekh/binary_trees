#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node on the right
 * @parent: pointer node
 * @value: node value
 *
 * Return: a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_right_node;
if (!parent)
return (NULL);
new_right_node = malloc(sizeof(binary_tree_t));
if (!new_right_node)
return (NULL);

if (parent->right == NULL)
{
new_right_node->parent = parent;
new_right_node->left = NULL;
new_right_node->right = parent->right;
new_right_node->n = value;
}
else
parent->right = new_right_node;

return (new_right_node);
}
