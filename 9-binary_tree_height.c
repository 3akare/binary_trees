#include "binary_trees.h"
/**
 * binary_tree_height - Measure the height of the binary tree
 * @tree: Pointer to th root node of the binary tree
 * Return: Return 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree || (!(tree->right) && !(tree->right)))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
