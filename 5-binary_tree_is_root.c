#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is the root
 * @node: A pointer to the node to check
 * Return: 0 if NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
