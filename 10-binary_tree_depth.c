#include "binary_trees.h"

/**
 * binary_tree_height - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
int depth = 0;

if (!tree)
return (0);

while (tree->parent)
{
depth++;
tree = tree->parent;
}
return (depth);
}
