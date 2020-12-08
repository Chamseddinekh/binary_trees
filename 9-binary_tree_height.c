#include "binary_trees.h"

/**
 * binary_tree_height -   measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * 
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
int left = 0, right = 0;
if (!tree)
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left > right)
return (left + 1);
else
return (right + 1);
}
