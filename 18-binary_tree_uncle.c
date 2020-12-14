#include "binary_trees.h"

/**
 * binary_tree_uncle -  function that finds the uncle of a node
 * @node:  pointer to the node to find the uncle
 *
 * Return: 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (!node || node->parent->parent == NULL || node->parent == NULL)
return (NULL);

if (node->parent->parent)
return (node->parent->parent->right);

if (node->parent->parent)
return (node->parent->parent->left);

return (NULL);
}
