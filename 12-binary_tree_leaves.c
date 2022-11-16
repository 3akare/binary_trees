#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in the binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: return the count leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right, count;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	count = left + right;
	return  (count);
}
