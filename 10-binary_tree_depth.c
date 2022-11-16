#include "binary_trees.h"
/**
 * binary_tree_depth - Depth of a node in a binary tree
 *
 * @tree: A pointer to the node to measure the depth
 * Return: size_t
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	while (tree !=  NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count - 1);
}
