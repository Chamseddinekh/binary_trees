#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
int leaves = 0;
if (!tree)
return (0);

if (tree->left != NULL || tree->right != NULL)
leaves = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

return (leaves);

}
