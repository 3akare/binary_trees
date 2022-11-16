#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: Node sibling on success or NULL on fail
 */

binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n == node->parent->left->n)
		return (node->parent->right);
	return (node->parent->left);
}
