#include "binary_trees.h"

/**
 * binary_tree_leaves - that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
int leaves = 0;
if (!tree)
return (0);

if (tree->left == NULL && tree->right == NULL)
return (1);
else
leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
return (leaves);
}
